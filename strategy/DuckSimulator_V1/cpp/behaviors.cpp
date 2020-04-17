#include <iostream>
#include "behaviors.h"

void FlyLow::fly() const {
	std::cout << "Flying low" << std::endl;
}

void FlyHigh::fly() const {
	std::cout << "Flying High" << std::endl;
}

void FlyFast::fly() const {
	std::cout << "Flying Fast" << std::endl;
}

void QuackNoisy::quack() const {
	std::cout << "QUACK QUACK" << std::endl;
}

void QuackQuietly::quack() const {
	std::cout << "quack quack" << std::endl;
}