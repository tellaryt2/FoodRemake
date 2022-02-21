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


private:
	string Name;
	string Adress;
	list <Order> Orders;
	list <Dish> Menu;

};