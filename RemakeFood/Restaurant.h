#pragma once
#include "Order.h"
#include "Dish.h"
#include <string>
#include <list>
#include "OrderDelivery.h"
#include "OrderPickup.h"

using namespace std;

class Restaurant
{
public:
	void OrderingDelibvery(/*адрес*/);
	void OrderingPickup();
	bool Pay(Order order);
	void Cancel(Order order);
	void ConfirmReceipt(Order order);
	void AddDishInMenu(Dish dish);
	void DeleteDishInMenu(Dish dish);
	void ShowMenu();

private:
	string Name;
	string Adress;
	list <Order> Orders;
	list <pair <Dish, int>> Menu;
	list <pair <Dish, int>>::iterator ThisMenu = Menu.begin();
	int CounterMenu = 1;
};