#include "logic.h"

bool binary_search(int array[],int number, int left, int right) {


	//fool-proof
	if (right < left ) {
		return false;
	}

	int middle = left + (right - left) / 2;

	//base case
	if (array[middle] == number) {
		return true;
	}

	//recursion case
	return array[middle] > number ? binary_search(array, number, left, middle - 1)
		: binary_search(array, number, middle + 1, right);
}
