#include <iostream>
#include<vector>
#include<string>
using namespace std;

bool Search(vector<int>::iterator& beg, vector<int>::iterator& end, int i);

int main() {
	vector<int> v{ 1,2,3,4,5,6,7,8,9,10 };
	int i;
	cin >> i;
	cout << Search(v.begin(), v.end(), i) << endl;

}

bool Search(vector<int>::iterator& beg, vector<int>::iterator& end, int i) {
	while (beg != end)
		if (*beg == i) {
			return true;
		}
		else
			++beg;
	return false;
}






