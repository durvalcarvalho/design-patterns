#ifndef INTERFACES_H
#define INTERFACES_H

#include "observable.h"

class Observable;

class Observer {
public:
	virtual void update(Observable* observable) =0;
};

class DisplayElement {
public:
	virtual void display() =0;
};

#endif