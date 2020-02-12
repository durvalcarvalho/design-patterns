#ifndef STATIONS_H
#define STATIONS_H

#include "observable.h"

class WeatherData : public Observable {
public:
	WeatherData();
	void measurementsChanged();
	void setMeasurements(int temp, int hum, int pres);
	void randomData();
	int getPressure() const;
	int getTemperature() const;
	int getHumidy() const;
private:
	int temperature, pressure, humidy;
};

#endif