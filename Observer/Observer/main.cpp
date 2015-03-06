#include <iostream>
#include "DummyProduct.h"

using namespace std;

int main()
{
	cout << "Hello!\n" << endl;
	cout << "------------------------------------------" << endl;
	DummyProduct prod;

	Shop shop1("Shop1");
	Shop shop2("Shop2");

	prod.attach(&shop1);
	prod.attach(&shop2);

	prod.change_price(23.05f);

	prod.detach(&shop2);

	prod.change_price(66.05f);
	cout << "------------------------------------------" << endl;
	return 0;
}