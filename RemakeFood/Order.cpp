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
