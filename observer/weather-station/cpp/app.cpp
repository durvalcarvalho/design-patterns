#include <iostream>
#include "stations.h"
#include "observers.h"

using namespace std;

int main() {

	WeatherData wd;
	
	cout << "First Check" << endl;
	CurrentConditions cc(&wd);
	wd.randomData();

	cout << "==================================" << endl;

	cout << "Second Check" << endl;
	StaticticsDisplay sd(&wd);
	wd.randomData();
	
	cout << "==================================" << endl;

	return 0;
}