#pragma once
class Observer
{
public:
	Observer(void) = default;
	~Observer(void) = default;

	virtual void update(float price) = 0;
};

