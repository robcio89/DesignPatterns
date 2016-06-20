#include "Subject.h"
#include <algorithm>

void Subject::attach(Shop *obsever)
{
	observers.push_back(obsever);
}

void Subject::detach(Shop *obsever)
{
	observers.erase(std::remove(observers.begin(), observers.end(), obsever), observers.end());
}

void Subject::notify(const float& price)
{
	for (const auto& i : observers)
	{
		i->update(price);
	}
}

