from duck import Duck
from behaviors import quackQuietly, FlyMoon


donald = Duck()

donald.quack()
donald.fly()

donald.setFlyBehavior(FlyMoon)
donald.setQuackBehavior(quackQuietly)

donald.quack()
donald.fly()