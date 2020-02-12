#include <iostream>

#include "observers.h"
#include "stations.h"

CurrentConditions::CurrentConditions(Observable* obs) {
	observable = obs;
	observable->addObserver(this);
	temperature = humity = pressure = 0;
}

void CurrentConditions::update(Observable* observable) {
	WeatherData* wd = (WeatherData*) observable;
	temperature = wd->getTemperature();
	humity = wd->getHumidy();
	pressure = wd->getPressure();
	display();
}

void CurrentConditions::display() {
	std::cout << "\nCurrent Conditions\n";
	std::cout << temperature << "°C" << "\n";
	std::cout << humity << "°%" << "\n";
	std::cout << pressure << " mbar" << "\n";
	std::cout << std::endl;
}

StaticticsDisplay::StaticticsDisplay(Observable* observable) {
	observable->addObserver(this);
	this->observable = observable;
	temperature = humity = pressure = 0;
}

void StaticticsDisplay::update(Observable* observable) {
	
	WeatherData* wd = (WeatherData*) observable;
	temperature = wd->getTemperature();
	humity = wd->getHumidy();
	pressure = wd->getPressure();
	display();
}

void StaticticsDisplay::display() {
	std::cout << "\nStatictics Display\n";
	std::cout << temperature << "°C" << "\n";
	std::cout << humity << "°%" << "\n";
	std::cout << pressure << " mbar" << "\n";
	std::cout << std::endl;
}