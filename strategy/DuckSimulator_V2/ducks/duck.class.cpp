#include "duck.class.hpp"

#include <iostream>

Duck::Duck() {} 
Duck::~Duck() {}

void Duck::performFly() {
    flyBehavior->fly();
}
void Duck::performQuack() {
    quackBehavior->quack();
}

void Duck::setQuackBehavior(QuackBehavior* qb) {
    delete this->quackBehavior;
    quackBehavior = qb;
};

void Duck::setFlyBehavior(FlyBehavior* fb) {
    delete this->flyBehavior;
    flyBehavior = fb;
}