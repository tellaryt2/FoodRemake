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
	OrderDelivery OrderingDelibvery(OrderDelivery order);
	OrderPickup OrderingPickup(OrderPickup order);
	bool Pay(Order order);
	void Cancel(Order order);
	void ConfirmReceipt(Order order);
	void AddDishInMenu(Dish dish);
	void DeleteDishInMenu(Dish dish);

private:
	string Name;
	string Adress;
	list <Order> Orders;
	list <Dish> Menu;
	list <Dish>::iterator ThisMenu = Menu.begin();

};