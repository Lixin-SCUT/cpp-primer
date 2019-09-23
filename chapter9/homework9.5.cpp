#include <iostream>
#include<vector>
#include<string>
using namespace std;

vector<int>::iterator& Search(vector<int>::iterator& beg, vector<int>::iterator& end, int i);

int main() {
	vector<int> v{ 1,2,3,4,5,6,7,8,9,10 };
	int i;
	cin >> i;
	auto it = Search(v.begin(), v.end(), i);
	if (it != v.end())
		cout << *it << endl;
	else
		cout << "i is not found" << endl;

}

vector<int>::iterator& Search(vector<int>::iterator& beg, vector<int>::iterator& end, int i) {
	while (beg != end)
		if (*beg == i) {
			return beg;
		}
		else
			++beg;
	return end;
}






