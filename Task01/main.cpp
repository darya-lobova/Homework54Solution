#include "logic.h"

int main() {

	int number;

	cout << "Input your number: ";
	cin >> number;

	bool result = is_power_of_four(number);

	string msg = result ? "IS" : "ISN'T";

	cout << number << " " << msg << " the power of four.";

	return 0;
}