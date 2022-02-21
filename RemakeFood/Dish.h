#pragma once
#include <string>

using namespace std;

class Dish
{
public:
	Dish(string name, string size, double price);
	Dish(Dish *dish);
	string GetName();
	string GetServingSize(); // int
	double GetPricePorcion();
	void SetName(string name);
	void SetPricePorcion(double price);
	void SetServingSize(string size);


private:
	string Name;
	double PricePorcion;
	string ServingSize;
};
