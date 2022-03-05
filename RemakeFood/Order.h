#pragma once
#include <string>
#include "Dish.h"
#include <list>

using namespace std;

class Order
{
public:
	//енам
	Order(string FIO, string number, Dish dish);
	Order();
	string GetClientFIO();
	string GetPhoneNumber();
	void AddDish(Dish dish);
	void DeleteDish(Dish dish);
	double CalculatedPrice(Dish dish); //виртуальная

protected:

	enum status { Create = 1, Payed, Taked, OnTheWay, Cancelled }; //доставлен
	//изменение статуса функция()
private:
	string ClientFIO;
	string PhoneNumber;
	list <pair <Dish, double>> Dishs;
	list<pair <Dish, double>>::iterator ThisDishs = Dishs.begin();
};

//switch(status)
//case(create) if ...

//изменение статуса функция()