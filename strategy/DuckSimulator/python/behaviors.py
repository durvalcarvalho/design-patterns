from abc import ABC, abstractmethod


class flyBehavior(ABC):
	@abstractmethod
	def fly(self):
		pass


class FlyLow(flyBehavior):
	def fly(self):
		print("Flying low")


class FlyHigh(flyBehavior):
	def fly(self):
		print("Flying high")

class FlyMoon(flyBehavior):
	def fly(self):
		print("Flying to the moon")


class quackBehavior(ABC):
	@abstractmethod
	def quack(self):
		pass


class quackNoisy(quackBehavior):
	def quack(self):
		print("QUACK QUACK")

class quackQuietly(quackBehavior):
	def quack(self):
		print("quack quack")




