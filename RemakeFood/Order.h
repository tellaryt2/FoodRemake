#pragma once
#include <string>
#include "Dish.h"

using namespace std;

class Order
{
public:
	string GetClientFIO();
	string GetPhoneNumber();
	void MakeOrder(string FIO, string number);
	Dish AddDish(Dish dish);
	void DeleteDish(Dish dish);
	double CalculatedPrice(Dish dish);

private:
	string ClientFIO;
	string PhoneNumber;
	//status
	pair <Dish, double> Dishs;
};