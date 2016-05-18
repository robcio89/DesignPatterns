#include "ConcreteSubject.h"

void ConcreteSubject::change_price(float price)
{
	notify(price);
}
