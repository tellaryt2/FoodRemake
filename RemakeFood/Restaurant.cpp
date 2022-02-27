#include "Restaurant.h"

OrderDelivery Restaurant::OrderingDelibvery(OrderDelivery order)
{
	return order;
}

OrderPickup Restaurant::OrderingPickup(OrderPickup order)
{
	return order;
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
	Menu.push_back(dish);
}

void Restaurant::DeleteDishInMenu(Dish dish)
{
	for (auto i = Menu.begin(); i != Menu.end(); i++)
	{
		ThisMenu = i;
		if (ThisMenu->GetName() == dish.GetName())
		{
			Menu.erase(ThisMenu);
			return;
		}
	}
}
