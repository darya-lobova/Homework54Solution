#include "logic.h"

int main() {

	int index;
	cout << "Input index: ";
	cin >> index;

	int number = find_tribonacci_number(index);

	cout << "Number with index " << index << " is " << number;

	return 0;
}