#pragma once
#include <vector>
#include "Shop.h"

//This class keeps track of all the observers and provides 
//the facility to add or remove the observers. Also it is 
//the class that is responsible for updating the observers 
//when any change occurs. In our solution, we have ASubject 
//implemented for the same purpose. 

class Subject
{
public:
	Subject() {};
	virtual ~Subject() {};

	void attach(Shop *obsever);
	void detach(Shop *obsever);
	void notify(const float& price);

private:
	std::vector<Shop*> observers;
};

