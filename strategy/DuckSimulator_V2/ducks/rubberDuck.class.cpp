#include "rubberDuck.class.hpp"
#include "../behaviors/flyBehavior/flyNoWay.hpp"
#include "../behaviors/quackBehavior/squeak.hpp"

#include <iostream>

RubberDuck::~RubberDuck() {}

RubberDuck::RubberDuck() {
  this->quackBehavior = new Squeak();
  this->flyBehavior = new FlyNoWay();
};