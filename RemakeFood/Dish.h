#pragma once
#include <string>

using namespace std;

class Dish
{
public:
	string GetName();
	string GetServingSize();
	double GetPricePorcion();

private:
	string Name;
	double PricePorcion;
	string ServingSize;
};
