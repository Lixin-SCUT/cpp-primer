#include <iostream>
#include<vector>
#include<string>
#include "Sales_data.h"

using namespace std;

int main() {
	Sales_Data total;
	if (read(cin, total)) {
		Sales_Data trans;
		while (read(cin, trans)) {
			if (total.equal_isbn(trans))
				total.combine(trans);
			else {
				print(cout, total);
				total = trans;
			}
		}
		print(cout, total);
	}
	else {
		cerr << "No data?!" << endl;
		return -1;
	}
	return 0;
}



