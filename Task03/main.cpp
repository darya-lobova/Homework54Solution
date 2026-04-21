#include "logic.h"

int main() {

	int number;
	int length = 5;
	int left = 0;
	int right = length - 1;

	cout << "Input number: ";
	cin >> number;

	int array[5] = { 6, 7, 8, 9, 10 };


	bool result = binary_search(array, number, left, right);

	string msg = result ? "Yes" : "No";

	cout << msg;

	return 0;
}