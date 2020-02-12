from subjects import WeatherData
from observers import CurrentConditions, StaticticsDisplay

def main():
	wd = WeatherData()

	print("First Check")
	cc = CurrentConditions(wd)
	wd.randomData()

	print('===' * 10)

	print("\nSecond Check")
	sd = StaticticsDisplay(wd)
	wd.randomData()

	print('===' * 10)

	print("\nThird Check")
	wd.deleteObserver(cc)
	wd.randomData()

	print('===' * 10)

	print("\nFourth Check")
	wd.deleteObserver(wd)
	wd.randomData()

main()