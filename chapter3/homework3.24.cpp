#include <iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	vector<int> v_i;
	int i;
	while (cin >> i)
		v_i.push_back(i);
	for(auto ib=v_i.begin() ; ib!= v_i.end()-1; ++ib)
		cout << *ib + *(ib+1) << ' ';
	cout << endl;
	for (auto ib = v_i.begin(),ie = v_i.end(); ie - ib>0; ++ib)
		cout << *ib + *(--ie) << ' ';

	cout << endl;
	for (int x = 0; x < v_i.size() - 1; ++x)
		cout << v_i[x] + v_i[x + 1] << ' ';
	cout << endl;
	for (int x = 0, l = v_i.size(); x < (v_i.size() + 1) / 2; ++x)
		cout << v_i[x] + v_i[l - 1 - x] << ' ';
};
