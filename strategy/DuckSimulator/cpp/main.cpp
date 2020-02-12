#include "duck.h"

#include <iostream>

using namespace std;

int main() {

	Duck duck;
	duck.fly();
	duck.quack();

	cout << endl;

	duck.setFlyBehavior(new FlyHigh());
	duck.setQuackBehavior(new QuackNoisy());
	duck.fly();
	duck.quack();

	return 0;
}