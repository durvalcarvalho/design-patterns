#include "behaviors.h"

class Duck {
public:
	Duck(FlyBehavior* fb=nullptr, 
		QuackBehavior* qb=nullptr);
	void fly() const;
	void quack() const;
	void setFlyBehavior(FlyBehavior* fb);
	void setQuackBehavior(QuackBehavior* qb);
private:
	FlyBehavior* _flyBehavior;
	QuackBehavior* _quackBehavior;
};

