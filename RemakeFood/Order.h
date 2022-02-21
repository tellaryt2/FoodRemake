#pragma once
#include <string>
#include "Dish.h"
#include <list>

using namespace std;

class Order
{
public:
	Order(string FIO, string number, Dish dish);
	Order();
	string GetClientFIO();
	string GetPhoneNumber();
	void AddDish(Dish dish);
	void DeleteDish(Dish dish);
	double CalculatedPrice(Dish dish);

protected:

	enum status { Create = 1, Payed, Taked, OnTheWay, Cancelled };

private:
	string ClientFIO;
	string PhoneNumber;
	list <pair <Dish, double>> Dishs;
	list<pair <Dish, double>>::iterator ThisDishs = Dishs.begin();
};

//switch(status)
//case(create) if ...