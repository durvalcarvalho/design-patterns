from behaviors import FlyHigh, quackNoisy

class Duck:
	def __init__(self):
		self.flyBehavior = FlyHigh()
		self.quackBehavior = quackNoisy()

	def fly(self):
		self.flyBehavior.fly()

	def quack(self):
		self.quackBehavior.quack()

	def setFlyBehavior(self, behavior):
		self.flyBehavior = behavior()

	def setQuackBehavior(self, behavior):
		self.quackBehavior = behavior()
