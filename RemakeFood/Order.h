#pragma once
#include <string>
#include "Dish.h"
#include <list>

using namespace std;

class Order
{
public:
	Order(string FIO, string number, Dish dish);
	string GetClientFIO();
	string GetPhoneNumber();
	Dish AddDish(Dish dish);
	void DeleteDish(Dish dish);
	double CalculatedPrice(Dish dish);

protected:

	enum status { Create = 1, Payed, Taked, OnTheWay, Cancelled };

private:
	string ClientFIO;
	string PhoneNumber;
	list <pair <Dish, double> > Dishs;  
};

//switch(status)
//case(create) if ...