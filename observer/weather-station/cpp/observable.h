#ifndef OBSERVABLES_H
#define OBSERVABLES_H

#include "interfaces.h"
#include <set>

class Observer;

class Observable {
private:
	std::set<Observer*> observers;
	bool hasChanges;
public:
	Observable();
	void addObserver(Observer* observer);
	void deleteObserver(Observer* observer);
	
    void notifyObservers();
	void setChanged(bool status=true);
};

#endif