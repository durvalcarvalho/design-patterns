#include "marlardDuck.class.hpp"
#include "../behaviors/flyBehavior/flyWithWings.hpp"
#include "../behaviors/quackBehavior/quack.hpp"

MarlardDuck::~MarlardDuck() {}

MarlardDuck::MarlardDuck() {
  this->quackBehavior = new Quack();
  this->flyBehavior = new FlyWithWings();
};