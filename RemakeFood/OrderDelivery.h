#pragma once
#include "Order.h"

class OrderDelivery : public Order
{
public:
	OrderDelivery(string FIO, string number, string adress);
	void RemakeStatus(status newStatus);

protected:
	string AdressDelivery;

};