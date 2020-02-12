#include "observable.h"

Observable::Observable() {
	hasChanges = false;
}

void Observable::addObserver(Observer* observer) {
	observers.insert(observer);
}

void Observable::deleteObserver(Observer* observer) {
	observers.erase(observer);
}

void Observable::notifyObservers() {
	if(hasChanges) {

		for(Observer* observers : observers)
			observers->update(this);

		hasChanges = false;
	}
}

void Observable::setChanged(bool status) {
	hasChanges = status;
}