#include "ConcreteSubject.h"

void ConcreteSubject::change_price(float price)
{
	this->price = price;
	notify(price);
}
