#pragma once
#include "Subject.h"

class DummyProduct : public Subject
{
public:
	DummyProduct(void) {};
	~DummyProduct(void) {};

	void change_price(float price);
};

