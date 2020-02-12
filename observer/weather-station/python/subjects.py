from interfaces import Observable
from random import randint

class WeatherData(Observable):

	def __init__(self):
		super().__init__()
		self.temperature = self.humidy = self.pressure = 0

	def measurementsChanged(self):
		self.setChanged()
		self.notifyObservers()

	def setMeasurements(self, temperature, humidy, pressure):
		self.temperature = temperature
		self.humidy = humidy
		self.pressure = pressure
		self.measurementsChanged()

	def randomData(self):
		pressure = 1021.0 + randint(-200, 200)
		temperature = 22 + randint(-12, 10)
		humidy = 50 + randint(-20, 50)
		self.setMeasurements(temperature, humidy, pressure)

	def getPressure(self):
		return f'{self.pressure} mbar'

	def getTemperature(self):
		return f'{self.temperature}°C'

	def getHumidy(self):
		return f'{self.humidy}%'
