#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

class Observer;

class Subject {
protected:
  vector<Observer*> observers;
public:
  virtual bool register_observer(Observer* observer);
  virtual bool remove_observer(Observer* observer);
  virtual void notify_observers();
};

class Observer {
protected:
  Subject* subject = nullptr;
public:
  virtual bool notify() = 0;
  virtual void subscribe_subject(Subject* subject) { this->subject = subject; }
  virtual void unsubscribe_subject() { this->subject = nullptr; }
};

void Subject::notify_observers() {
  for(auto observer : observers) {
    observer->notify();
  }
  printf("\n");
}

bool Subject::register_observer(Observer* observer) {
  auto it = find(observers.begin(), observers.end(), observer);

  if( it == observers.end() ) {
    observers.push_back(observer);
    observer->subscribe_subject(this);
    return true;
  }

  return false;
}

bool Subject::remove_observer(Observer* observer) {
  auto it = find(observers.begin(), observers.end(), observer);

  if( it != observers.end() ) {
    observers.erase(it);
    observer->unsubscribe_subject();
    return true;
  }

  return false;
}

class WeatherData : public Subject {
private:
  double temperature;
  double humidity;
  double pressure;
public:
  double get_temperature() const { return temperature; }
  double get_humidity() const { return humidity; }
  double get_pressure() const { return pressure; }
  
  void set_temperature(double temperature) { 
    this->temperature = temperature;
    notify_observers();
  }
  void set_humidity(double humidity) { 
    this->humidity = humidity;
    notify_observers();
  }
  void set_pressure(double pressure) { 
    this->pressure = pressure;
    notify_observers();
  }
};

class DisplayElement : public Observer {
protected:
  double temperature;
  double humidity;
  double pressure;
  string type;

public:
  DisplayElement(string type="Default DisplayElement") : type(type) {}

  virtual void display() {
    printf("[%s] %.02lf °C, %.02lf g/m³, %.02lf Pa.\n", type.c_str(), 
           temperature, humidity, pressure);
  }
  
  bool notify() override {
    if(subject == nullptr) {
      return false;
    }

    WeatherData* weather_data = dynamic_cast<WeatherData*>(subject);

    temperature = weather_data->get_temperature();
    humidity = weather_data->get_humidity();
    pressure = weather_data->get_pressure();

    printf("[%s] Updates! %.02lf °C, %.02lf g/m³, %.02lf Pa.\n", type.c_str(), 
           temperature, humidity, pressure);

    return true;
  }
};

class CurrentConditions : public DisplayElement {
public:
  CurrentConditions(string type="CurrentConditions") : DisplayElement(type) {}
};

class StatisticsDisplay : public DisplayElement {
public:
  StatisticsDisplay(string type="StatisticsDisplay") : DisplayElement(type) {}
};

class ForecastDisplay : public DisplayElement {
public:
  ForecastDisplay(string type="ForecastDisplay") : DisplayElement(type) {}
};

int main() {

  WeatherData wd;

  CurrentConditions cd;
  StatisticsDisplay sd;
  ForecastDisplay fd;

  wd.register_observer(&cd);
  wd.set_humidity(1);

  wd.register_observer(&sd);
  wd.set_temperature(10);

  wd.register_observer(&fd);
  wd.set_pressure(5);

  wd.remove_observer(&cd);
  wd.set_humidity(7);

  wd.remove_observer(&fd);

  return 0;
}