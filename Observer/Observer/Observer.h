#pragma once
class Observer
{
public:
	Observer(void) = default;
	~Observer(void) = default;

	virtual void update(const float& price) = 0;
};

