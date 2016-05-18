#pragma once
#include "Subject.h"

class ConcreteSubject : public Subject
{
public:
	ConcreteSubject(void) {};
	~ConcreteSubject(void) {};

	void change_price(float price);
};

