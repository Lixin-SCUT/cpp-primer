#include <iostream>
#include<vector>
#include<string>
#include<initializer_list>
using namespace std;
string make_plural(size_t ctr, const string &word, const string &ending = "s");

int main() {
	cout << "两单词的单数形式：" << make_plural(1, "success", "es") << "  " << make_plural(1, "failure") << endl;
	cout << "两单词的复数形式：" << make_plural(2, "success", "es") << "  " << make_plural(2, "failure") << endl;
};

string make_plural(size_t ctr, const string &word, const string &ending) {
	return (ctr > 1) ? word + ending : word;
}



