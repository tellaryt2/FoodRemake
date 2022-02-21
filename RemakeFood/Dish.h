#pragma once
#include <string>

using namespace std;

class Dish
{
public:
	Dish(string name, int size, double price);
	Dish(Dish *dish);
	string GetName();
	int GetServingSize(); // int
	double GetPricePorcion();
	void SetName(string name);
	void SetPricePorcion(double price);
	void SetServingSize(int size);


private:
	string Name;
	double PricePorcion;
	int ServingSize;
};
