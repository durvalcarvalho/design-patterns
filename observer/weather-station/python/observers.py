from interfaces import Observer, DisplayElement


class CurrentConditions(Observer, DisplayElement):

	def __init__(self, observable):
		self.observable = observable
		self.observable.addObserver(self)
		self.temperature = self.humity = self.pressure = 0

	def update(self, observable, *args, **kwargs):
		self.temperature = observable.getTemperature()
		self.humity = observable.getHumidy()
		self.pressure = observable.getPressure()
		self.display()

	def display(self):
		print("Current Conditions")
		print(self.temperature, self.humity, self.pressure)
		print()


class StaticticsDisplay(Observer, DisplayElement):

	def __init__(self, observable):
		self.observable = observable
		self.observable.addObserver(self)
		self.temperature = self.humity = self.pressure = 0

	def update(self, observable, *args, **kwargs):
		self.temperature = observable.getTemperature()
		self.humity = observable.getHumidy()
		self.pressure = observable.getPressure()
		self.display()

	def display(self):
		print("\nStatictics Display")
		print(self.temperature, self.humity, self.pressure)
		print()
