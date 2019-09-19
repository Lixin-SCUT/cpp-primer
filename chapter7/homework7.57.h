#pragma once
#include<string>
class Account
{
	static constexpr int period = 30;
	double daily_tbl[period];
	std::string owner;
	double amount;
	static double interestRate;
	static double initRate();
public:
	static double rate() { return interestRate; }
	static void rate(double);
};
