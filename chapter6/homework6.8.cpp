#include "chapter6.h"

int factorial(int fact) {
	int sum = 1;
	while (fact)
		sum *= fact--;
	return sum;
}