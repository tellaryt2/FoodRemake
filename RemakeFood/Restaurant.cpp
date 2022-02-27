#include <iostream>
#include "Restaurant.h"

OrderDelivery Restaurant::OrderingDelibvery()
{
	cout << "Enter FIO: ";
	string fio;
	cin >> fio;
	cout << "Enter number telephone: ";
	string number;
	cin >> number;
	cout << "Enter adress: ";
	string adress;
	cin >> adress;
	cout << "choose a dish: ";

	OrderDelivery newOrderDelivery(fio, number, adress);

	Orders.push_back(newOrderDelivery);
	return newOrderDelivery;
}

OrderPickup Restaurant::OrderingPickup()
{
	return ;
}

bool Restaurant::Pay(Order order)
{
	return false;
}

void Restaurant::Cancel(Order order)
{
	
}

void Restaurant::ConfirmReceipt(Order order)
{

}

void Restaurant::AddDishInMenu(Dish dish)
{
	Menu.push_back(make_pair(dish, CounterMenu));
	CounterMenu++;
}

void Restaurant::DeleteDishInMenu(Dish dish)
{
	for (auto i = Menu.begin(); i != Menu.end(); i++)
	{
		ThisMenu = i;
		if (ThisMenu->first.GetName() == dish.GetName())
		{
			Menu.erase(ThisMenu);
			return;
		}
	}
}

void Restaurant::ShowMenu()
{
	for (auto i = Menu.begin(); i != Menu.end(); i++)
	{
		ThisMenu = i;
		cout << ThisMenu->second << ") " 
			<< "name: " << ThisMenu->first.GetName() << "\t" 
			<< "ServingSize: " << ThisMenu->first.GetServingSize() << "\t" 
			<< "PricePorcion: " << ThisMenu->first.GetPricePorcion();
	}
}
