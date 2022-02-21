#pragma once
#include <string>
#include "Dish.h"
#include <list>

using namespace std;

class Order
{
public:
	string GetClientFIO();
	string GetPhoneNumber();
	void MakeOrder(string FIO, string number); //сделать конструктор из этого
	Dish AddDish(Dish dish);
	void DeleteDish(Dish dish);
	double CalculatedPrice(Dish dish);

protected:

	enum status { Create = 1, Payed, Taked, OnTheWay, Cancelled };

private:
	string ClientFIO;
	string PhoneNumber;
	list <pair <Dish, double> >Dishs;  //list
};

//switch(status)
//case(create) if ...