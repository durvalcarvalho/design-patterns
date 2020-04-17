#ifndef DUCK_H
#define DUCK_H

#include "../behaviors/flyBehavior/flyBehavior.interface.hpp"
#include "../behaviors/quackBehavior/quackBehavior.interface.hpp"

class Duck{
  protected:
    FlyBehavior* flyBehavior;
    QuackBehavior* quackBehavior;
  
  public:
    Duck();
    ~Duck();
    
    void performFly();
    void performQuack();

    void setQuackBehavior(QuackBehavior* fb);
    void setFlyBehavior(FlyBehavior* qb);
};

#endif