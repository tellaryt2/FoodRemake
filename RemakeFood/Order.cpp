#include "Order.h"

string Order::GetClientFIO()
{
	return this->ClientFIO;
}

string Order::GetPhoneNumber()
{
	return this->PhoneNumber;
}

void Order::MakeOrder(string FIO, string number)
{

}

Dish Order::AddDish(Dish dish)
{
	
}

void Order::DeleteDish(Dish dish)
{

}

double Order::CalculatedPrice(Dish dish)
{
	/* price = dish.GetPricePorcion() * Dishs(dish, GetCountPorcies() ) */
	return 0.0;
}
