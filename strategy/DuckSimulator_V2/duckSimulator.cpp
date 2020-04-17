#include "ducks/duck.class.hpp"
#include "ducks/marlardDuck.class.hpp"
#include "behaviors/flyBehavior/flyNoWay.hpp"
#include "behaviors/quackBehavior/squeak.hpp"

//#include "ducks/rubberDuck.class.hpp"

#include <iostream>

using namespace std;

int main()
{
    Duck duck = MarlardDuck();

    duck.performFly();
    duck.performQuack();

    duck.setFlyBehavior(new FlyNoWay());
    duck.setQuackBehavior(new Squeak());

    duck.performFly();
    duck.performQuack();

    return 0;
};