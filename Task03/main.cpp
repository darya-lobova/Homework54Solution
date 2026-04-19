#include "logic.h"

int main() {
	int array[DEFAULT_SIZE];
	int number;
	int length;

	cout << "Input number: ";
	cin >> number;

	cout << "Input size of array: ";
	cin >> length;

	cout << "Input elements of array: ";
	for (int i = 0; i < length; i++)
	{
		cin >> array[i];
	}

	bool result = binary_search(array, length, number);

	string msg = result ? "Yes" : "No";

	cout << msg;

	return 0;
}