#pragma once
#include <iostream>
#include <string>
#include "Observer.h"

class Shop : Observer
{
public:
	Shop(std::string n): name(n) {};
	~Shop() {};

	void update(float p);

private:
	std::string name;
	float price;
};

