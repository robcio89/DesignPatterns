#pragma once
class Observer
{
public:
	Observer(void);
	~Observer(void);

	virtual void update(float price) = 0;
};

