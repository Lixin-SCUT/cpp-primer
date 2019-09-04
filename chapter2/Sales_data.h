#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::istream;

struct Sales_Data {
	public:
		string ISBN;
		int units_sold = 0;
		double price = 0.00;
		double ave = 0.00;

		int input_data(istream &in) {
			in >> ISBN >> units_sold >> price;
			ave = price*ave / ave;
		}
		
		Sales_Data& add_data(Sales_Data& data1,Sales_Data& data2) {
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

		bool equal_isbn(Sales_Data exam)const {
			return ((*this).ISBN == exam.ISBN);
		}




};
#endif // !SALES_DATA_H
#pragma once
