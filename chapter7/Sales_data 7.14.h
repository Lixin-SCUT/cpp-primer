#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::istream;
using std::ostream;

struct Sales_Data {
	public:
		string ISBN;
		int units_sold = 0;
		double price = 0.00;
		double ave = 0.00;

		Sales_Data() = default;
		Sales_Data(string &s,int &i,double &p,double &a):ISBN(s),units_sold(i),price(p),ave(a){}
		Sales_Data(string &s) :ISBN(s) {}
		Sales_Data(istream &is) { read(is, *this); }
		Sales_Data():units_sold(0), price(0.00), ave(0.00) {}

		string isbn() {
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



#endif // !SALES_DATA_H
#pragma once