#include <iostream>
#include "Sales_item.h"
using namespace std;

int main() {
	Sales_item item_s;
	Sales_item item_t;
	while (cin >> item_t) {
		item_s += item_t;
		cout << item_s << endl;
	}

}
