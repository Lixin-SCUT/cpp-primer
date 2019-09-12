#include <iostream>
#include<vector>
#include<string>
#include<initializer_list>
using namespace std;
void print(vector<int> v, int index);

int main() {
	vector<int> ia = { 1,2,3,4,5,6,7,8,9,0 };
	print(ia, 0);
};
void print(vector<int> v,int index){
	if (index < v.size())
		cout << v[index] << endl,print(v,++index);
}



