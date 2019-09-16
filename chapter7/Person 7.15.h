#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <iostream>

using std::string;
using std::istream;

class Person
{
public:
	Person()=default;
	Person(string& n, string&a) :name(n),address(a){};

	~Person();
	string name;
	string address;

	string name() const {
		return name;
	}

	string address() const {
		return address;
	}

private:

};

Person::Person()
{
}

Person::~Person()
{
}
#endif // !PERSON_H
#pragma once
