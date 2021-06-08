#ifndef OBSERVERS_H
#define OBSERVERS_H

#include "interfaces.h"
#include "observable.h"


class CurrentConditions : public Observer, public DisplayElement {
public:
	CurrentConditions(Observable* observable);
	
	void update(Observable* observable);
	void display();

private:
	Observable* observable;
	int temperature, humity, pressure;
};


class StaticticsDisplay : public Observer, public DisplayElement {

public:
	StaticticsDisplay(Observable* observable);
	void update(Observable* observable);
	void display();
private:
	Observable* observable;
	int temperature, humity, pressure;
};

#endif