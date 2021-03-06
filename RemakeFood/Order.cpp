#include "Order.h"

void Order::ChangeStatus(Status& status) 
{
	switch (status)
	{
		case Order::Create:
		{
			status = Payed;
			break;
		}
	
		case Order::Payed:
		{
			status = Taked;
			break;
		}

		case Order::Taked:
		{
			status = OnTheWay;
			break;
		}

		case Order::OnTheWay:
		{
			status = Cancelled;
			break;
		}

		default:
			break;
	}
}

Order::Order(string FIO, string number, Dish dish)
{
	this->ClientFIO = FIO;
	this->PhoneNumber = number;
	Dishs.push_back(make_pair(dish, 1));
}

Order::Order()
{
	this->ClientFIO = "";
	this->PhoneNumber = "";
}


string Order::GetClientFIO()
{
	return this->ClientFIO;
}

string Order::GetPhoneNumber()
{
	return this->PhoneNumber;
}


void Order::AddDish(Dish dish)
{
	for (auto i = Dishs.begin(); i != Dishs.end(); i++)
	{
		ThisDishs = i;
		if (dish.GetName() == ThisDishs->first.GetName())
		{
			ThisDishs->second++;
		}
		else
		{
			Dishs.push_back(make_pair(dish, 1));
			return;
		}
	}
}

void Order::DeleteDish(Dish dish)
{
	for (auto i = Dishs.begin(); i != Dishs.end(); i++)
	{
		ThisDishs = i;
		if (dish.GetName() == ThisDishs->first.GetName())
		{
			if (ThisDishs->second <= 0)
			{
				Dishs.erase(ThisDishs);
			}
		}
	}
}

double Order::CalculatedPrice(Dish dish)
{
	double totalPrice = 0;
	for (auto i = Dishs.begin(); i != Dishs.end(); i++)
	{
		ThisDishs = i;
		if (dish.GetName() == ThisDishs->first.GetName())
		{
			double Price = ThisDishs->first.GetPricePorcion();
			Price *= ThisDishs->second;
			totalPrice += Price;
		}
	}
	return totalPrice;
}
