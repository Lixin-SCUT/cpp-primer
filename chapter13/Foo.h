#pragma once
#ifndef FOO_H
#define FOO_H
#include<vector>
#include<algorithm>
class Foo{
public:
	Foo(std::vector<int> vi) :data(vi) {};
	Foo sorted() && ;
	Foo sorted()const &;
	std::vector<int> data;
};

Foo Foo::sorted() && {
	std::sort(data.begin(), data.end());
	return *this;
}

Foo Foo::sorted()const & {
	Foo ret(*this);
	sort(ret.data.begin(), ret.data.end());
	return ret;
}
//Foo Foo::sorted()const & {
//
//	return Foo(*this).sorted();
//}
//Foo Foo::sorted()const & {
//	Foo ret(*this);
//	return ret.sorted();
//}
#endif // !FOO_H
