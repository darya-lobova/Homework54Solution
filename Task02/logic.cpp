#include "logic.h"

int find_tribonacci_number(int index) {

	//fool-proof
	if (index <= 0) {
		return -1;
	}

	//basic case
	if (index == 1 || index == 2) {
		return 0;
	}
	if (index == 3) {
		return 1;
	}

	//recursion case
	return find_tribonacci_number(index - 1) +
		find_tribonacci_number(index - 2) +
		find_tribonacci_number(index - 3);


	//cycle case
//	int first = 0, second = 0, third = 1;
//	for (int i = 3; i < index; i++) {
//		int next = first + second + third;
//		first = second;
//		second = third;
//		third = next;
//	}
//	return third;
//
//}
}