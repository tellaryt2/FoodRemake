#include "Order.h"

Order::Order(string FIO, string number, Dish dish)
{
	this->ClientFIO = FIO;
	this->PhoneNumber = number;
	Dishs.push_back(make_pair(dish, 1));
}

string Order::GetClientFIO()
{
	return this->ClientFIO;
}

string Order::GetPhoneNumber()
{
	return this->PhoneNumber;
}


Dish Order::AddDish(Dish dish)
{

	// ���� ����� ��� ���� � ������ ������, ������ ����� pair ���������
	//���� �� ����� add(dish,1)
}

void Order::DeleteDish(Dish dish)
{
	//���� pair 0 ��� 0 < , �� ������� �����
}

double Order::CalculatedPrice(Dish dish)
{
	/* price = dish.GetPricePorcion() * Dishs(dish, GetCountPorcies() ) */

	//dish - ������ ������ � ����
	// for () total += list[i].price * list[i].double
	return 0.0;
}
