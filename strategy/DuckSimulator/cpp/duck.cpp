#include "duck.h"
#include <iostream>


Duck::Duck(FlyBehavior* fb, QuackBehavior* qb) {
	if(fb == nullptr)
		_flyBehavior = new FlyLow();
	else
		_flyBehavior = fb;

	if(qb==nullptr)
		_quackBehavior = new QuackQuietly();
	else
		_quackBehavior = qb;

}

void Duck::fly() const {
	_flyBehavior->fly();
}

void Duck::quack() const {
	_quackBehavior->quack();
}

void Duck::setFlyBehavior(FlyBehavior* fb) {
	_flyBehavior = fb;
}

void Duck::setQuackBehavior(QuackBehavior* qb){
	_quackBehavior = qb;
}
