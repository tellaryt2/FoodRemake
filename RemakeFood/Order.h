#pragma once
#include <string>
#include "Dish.h"
#include <list>

using namespace std;

class Order
{
public:
	enum Status { Create = 1, Payed, Taked, OnTheWay, Cancelled };
	virtual void ChangeStatus(Status& status);
	Order(string FIO, string number, Dish dish);
	Order();
	string GetClientFIO();
	string GetPhoneNumber();
	void AddDish(Dish dish);
	void DeleteDish(Dish dish);
	virtual double CalculatedPrice(Dish dish); //
private:
	string ClientFIO;
	string PhoneNumber;
	list <pair <Dish, double>> Dishs;
	list<pair <Dish, double>>::iterator ThisDishs = Dishs.begin();
};

