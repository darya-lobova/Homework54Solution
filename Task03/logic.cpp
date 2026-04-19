#include "logic.h"

bool binary_search(int array[], int length, int number) {

	//fool-proof
	if (length <= 0) {
		return false;
	}

	for (int i = 0; i < length; i++)
	{
		if (array[i] > array[i + 1]) {
			return false;
		}
	}

	//base case
	if (array[0] == number) {
		return true;
	}

	int left = 0;
	int right = length - 1;

	while (left <= right) {
		int mid = (left + right) / 2;

		if (array[mid] == number) {
			return true;
		}

		if (array[mid] < number) {
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}

	return false;
}