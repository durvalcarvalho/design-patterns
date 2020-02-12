#include <cstdlib>
#include "stations.h"


WeatherData::WeatherData() {
	temperature = pressure = humidy = 0;
}

void WeatherData::measurementsChanged() {
	setChanged();
	notifyObservers();
}

void WeatherData::setMeasurements(int temp, int hum, int pres) {
	temperature = temp;
	humidy = hum;
	pressure = pres;
	measurementsChanged();
}

void WeatherData::randomData() {
	int temp = rand() % 23 + 10;
	int hum = rand() % 71 + 30;
	int pres = rand() % 401 + 821;
	setMeasurements(temp, hum, pres);
}

int WeatherData::getPressure() const { return pressure; }
int WeatherData::getTemperature() const { return temperature; }
int WeatherData::getHumidy() const { return humidy; }
