#include "Dish.h"

int Dish::GetServingSize()
{
	return this->ServingSize;
}

Dish::Dish(string name, int size, double price)
{
	this->Name = name;
	this->ServingSize = size;
	this->PricePorcion = price;
}



Dish::Dish(Dish* dish)
{
	this->Name = dish->Name;
	this->PricePorcion = dish->PricePorcion;
	this->ServingSize = dish->ServingSize;
}

string Dish::GetName()
{
	return this->Name;
}

double Dish::GetPricePorcion()
{
	return this->PricePorcion;
}

void Dish::SetName(string name)
{
	this->Name = name;
}

void Dish::SetPricePorcion(double price)
{
	this->PricePorcion = price;
}

void Dish::SetServingSize(int size)
{
	this->ServingSize = size;
}

