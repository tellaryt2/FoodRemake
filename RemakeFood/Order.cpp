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
	// если блюдо уже есть в данном списке, вторую часть pair увеличить
	//если не блюда add(dish,1)
}

void Order::DeleteDish(Dish dish)
{
	//если pair 0 или 0 < , то удалить блюдо
}

double Order::CalculatedPrice(Dish dish)
{
	/* price = dish.GetPricePorcion() * Dishs(dish, GetCountPorcies() ) */

	//dish - размер порции и цена
	// for () total += list[i].price * list[i].double
	return 0.0;
}
