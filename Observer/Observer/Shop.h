#pragma once
#include <iostream>
#include <string>
#include "Observer.h"

class Shop : Observer
{
public:
	Shop(const std::string& n): name(n) {};
	~Shop() = default;

	void update(float p) override;

private:
	std::string name;
	float price;
};

