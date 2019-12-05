#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::istream;
using std::ostream;
struct Sales_Data;
istream& read(istream &is, Sales_Data& data);

struct Sales_Data {
	public:
		string ISBN;
		int units_sold = 0;
		double price = 0.00;
		double ave = 0.00;


		//Sales_Data() = default;
		//Sales_Data(string &s,int &i,double &p,double &a):ISBN(s),units_sold(i),price(p),ave(a){}
		Sales_Data(string s, int i, double p, double a) :ISBN(s), units_sold(i), price(p), ave(a) {}
		Sales_Data(string &s) :ISBN(s) {}
		Sales_Data(istream &is) { read(is, *this); }
		Sales_Data():units_sold(0), price(0.00), ave(0.00) {}

		Sales_Data& operator+=(const Sales_Data& rhs);

		string isbn() const{
			return ISBN;
		}

		bool equal_isbn(Sales_Data exam)const {
			return ((*this).ISBN == exam.ISBN);
		}

		Sales_Data& combine(Sales_Data& data) {
			if ((*this).equal_isbn(data)) {
				Sales_Data sum;
				sum.units_sold = (*this).units_sold + data.units_sold;
				sum.ave = ((*this).units_sold*(*this).price + data.units_sold*data.price) / sum.units_sold;
				sum.price = sum.ave;
				return sum;
			}
			else
			{
				std::cerr << "Data must have same ISBN" << std::endl;
			}
		}
};


istream& read(istream &is, Sales_Data& data) {
	is >> data.ISBN >> data.units_sold >> data.price;
	data.ave = data.price*data.units_sold / data.units_sold;
	return is;
}

ostream& print(ostream &os, const Sales_Data& data) {
	os << data.ISBN << ' ' << data.price << ' ' << data.units_sold << ' ' << data.ave << ' ';
	return os;
}


Sales_Data& add(Sales_Data& data1, Sales_Data& data2) {
	if (data1.equal_isbn(data2)) {
		Sales_Data sum;
		sum.units_sold = data1.units_sold + data2.units_sold;
		sum.ave = (data1.units_sold*data1.price + data2.units_sold*data2.price) / sum.units_sold;
		sum.price = sum.ave;
		return sum;
	}
	else
	{
		std::cerr << "Data must have same ISBN" << std::endl;
	}
}

bool compareISBN(const Sales_Data &lhs, const Sales_Data &rhs) {
	return lhs.isbn() < rhs.isbn();
}

namespace std {
	template<>
	struct hash<Sales_Data>
	{
		typedef size_t result_type;
		typedef Sales_Data argument_type;
		size_t operator()(const Sales_Data &s)const;
	};
	size_t hash<Sales_Data>::operator()(const Sales_Data &s)const {
		return hash<string>()(s.ISBN) ^ hash<unsigned>()(s.units_sold) ^ hash<double>()(s.ave);

	}
}

class out_of_stock :public std::runtime_error {
public:
	explicit out_of_stock(const std::string &s) :std::runtime_error(s) {}
};

class isbn_mismatch :public std::logic_error {
public:
	explicit isbn_mismatch(const std::string &s): std::logic_error(s){}
	isbn_mismatch(const std::string &s, const std::string &lhs, const std::string &rhs) :std::logic_error(s), left(lhs), right(rhs) {}
	const std::string left, right;
};
Sales_Data& Sales_Data::operator+=(const Sales_Data& rhs) {
	if (isbn() != rhs.isbn())
		throw isbn_mismatch("wrong isbns", isbn(), rhs.isbn());
	units_sold += rhs.units_sold;
	ave += rhs.ave;
	return *this;
}
#endif // !SALES_DATA_H
#pragma once