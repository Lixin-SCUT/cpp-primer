#include <iostream>
#include<vector>
#include<string>
#include<initializer_list>
using namespace std;
int add_list(initializer_list<int> i);

int main(int argc,char* argv[]) {
	initializer_list<int> i{ 1,2,3,4,5,6,7 };
	cout << add_list(i) << endl;
};

int add_list(initializer_list<int> i) {
	int sum = 0;
	for (auto num : i)
		sum += num;
	return sum;
}

