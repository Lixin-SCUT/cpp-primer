#include <iostream>
#include<vector>
#include<string>
#include<list>
#include<algorithm>
#include<numeric>
#include<functional>
#include<iterator>
#include<fstream>

using namespace std;



int main()
{
	vector<int> vi{ 1,2,3,4,5,6,7,8,9,0 };
	for (auto i = vi.rbegin(); i < vi.rend(); ++i)
		cout << *i << endl;
}



















