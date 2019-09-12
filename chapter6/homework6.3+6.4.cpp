#include <iostream>
#include<vector>
#include<string>
using namespace std;
int factorial(int fact);

int main() {
	int i;
	while (cin) {
		cout << "please input one number:";
		cin >> i;
		cout << factorial(i) << endl;
	}
};

int factorial(int fact) {
	int sum=1;
	while (fact)
		sum *= fact--;
	return sum;
}

