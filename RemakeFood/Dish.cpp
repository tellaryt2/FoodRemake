#include "Dish.h"

string Dish::GetServingSize()
{
	return this->ServingSize;
}

Dish::Dish(string name, string size, double price)
{
	this->Name = name;
	this->ServingSize = size;
	this->PricePorcion = price;
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

void Dish::SetServingSize(string size)
{
	this->ServingSize = size;
}


//исключения (шоб не пустое добавлялось)