#include <iostream>
#include<vector>
#include<string>
#include<list>
#include<algorithm>
#include<numeric>
using namespace std;


int main()
{
	int i=10;
	auto decline = [&i] () mutable {return (--i) > 0 ?false:true; };
	while (!decline())
		cout << i << endl;
	cout << i << endl;
}















