#include <iostream>
#include <memory>
#include "ConcreteSubject.h"

int main()
{
	std::cout << "Hello!\n" << std::endl;
	std::cout << "------------------------------------------" << std::endl;
	ConcreteSubject prod;

	std::unique_ptr<Shop> shop1 = std::make_unique<Shop>("Shop1");
	std::unique_ptr<Shop> shop2 = std::make_unique<Shop>("Shop2");

	prod.attach(shop1.get());
	prod.attach(shop2.get());

	prod.change_price(23.05f);

	prod.detach(shop2.get());
	std::cout << "------------------------------------------" << std::endl;
	prod.change_price(66.05f);
	std::cout << "------------------------------------------" << std::endl;
	prod.change_price(99);

	std::cout << std::endl;
	return 0;
}