#include <iostream>
#include "Sales_item.h"
using namespace std;

int main() {
	Sales_item item_last, item_curr;
	int sum = 1;
	if(cin >> item_curr) {
		item_last = item_curr;
		while (cin >> item_curr) {
			if (item_curr.isbn == item_last.isbn) {
				item_last += item_curr;
				++sum;
			}
			else
			{
				cout << item_last << sum << endl;
				item_last = item_curr;
				sum = 1;
			}
		}
		cout << item_last << endl;
	}
}
