#include "logic.h"


bool is_power_of_four(int number) {

	//basic case
	if (number == 1 || number == 4) {
		return true;
	}

	//fool-proof
	if (number <= 0 || number % 4 != 0) {
		return false;
	}

	//recursion case
	return is_power_of_four(number / 4);


	//cycle case
	/*while (number > 0) {
		number /= 4;
		return number % 4 == 0 ? true : false;
	}*/

}
