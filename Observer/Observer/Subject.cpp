#include "Subject.h"
#include <algorithm>

void Subject::attach(Shop *shop)
{
	shops.push_back(shop);
}

void Subject::detach(Shop *shop)
{
	shops.erase(std::remove(shops.begin(), shops.end(), shop), shops.end());
}

void Subject::notify(float price)
{
	for (const auto& i : shops)
	{
		i->update(price);
	}
}

