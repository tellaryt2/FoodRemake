#pragma once
#include <string>

using namespace std;

class Dish
{
public:
	Dish(string name, string size, double price);
	string GetName();
	string GetServingSize();
	double GetPricePorcion();
	void SetName(string name);
	void SetPricePorcion(double price);
	void SetServingSize(string size);


private:
	string Name;
	double PricePorcion;
	string ServingSize;
};
