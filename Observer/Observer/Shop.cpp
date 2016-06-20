#include "Shop.h"

void Shop::update(const float& p)
{
	this->price = p;
	std::cout << "Price at " << name << " is now " << price << "\n";
}
