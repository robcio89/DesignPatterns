#pragma once
#include "Subject.h"

class ConcreteSubject : public Subject
{
public:
	ConcreteSubject(void) = default;
	~ConcreteSubject(void) = default;

	void change_price(float price);
};

