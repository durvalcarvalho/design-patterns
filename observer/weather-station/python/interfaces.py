from abc import ABC, abstractmethod


class Observable:
	def __init__(self):
		self.observers = set()
		self.hasChanges = False

	def addObserver(self, observer):
		self.observers.add(observer)

	def deleteObserver(self, observer):
		self.observers.remove(observer)

	def notifyObservers(self, *args, **kwargs):
		if(self.hasChanges):
			for observer in self.observers:
				observer.update(self, *args, **kwargs)
			self.hasChanges = False

	def setChanged(self, status=True):
		self.hasChanges = status


class Observer(ABC):
	@abstractmethod
	def update(self, observable, *args, **kwargs):
		pass

class DisplayElement(ABC):
	@abstractmethod
	def display(self):
		pass
		