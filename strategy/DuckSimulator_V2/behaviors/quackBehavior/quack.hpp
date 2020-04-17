#ifndef QUACK_H
#define QUACK_H

#include "quackBehavior.interface.hpp"

class Quack : public QuackBehavior
{
  public: 
    void quack();
};

#endif