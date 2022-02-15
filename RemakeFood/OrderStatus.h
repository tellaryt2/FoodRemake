#pragma once
#include <string>

using namespace std;

class OrderStatus
{
public:
	int GetStatus();
private:
	enum Status {Create = 1, Payed, Taked, Cancelled};
};