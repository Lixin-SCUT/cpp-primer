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

		string isbn() {
			return ISBN;
		}

		void read(istream &in, Sales_Data& data) {
			in >> data.ISBN >> data.units_sold >> data.price;
			data.ave = data.price*data.units_sold / data.units_sold;
		}
		
		Sales_Data& add(Sales_Data& data1,Sales_Data& data2) {
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

		void print(ostream &os,Sales_Data& data) {
			os << data.ISBN <<' '<< data.price << ' ' << data.units_sold << ' ' << data.ave << ' ';
		}

		bool equal_isbn(Sales_Data exam)const {
			return ((*this).ISBN == exam.ISBN);
		}




};
#endif // !SALES_DATA_H
#pragma once
