#include "logic.h"

int main() {

	int length;
	int width;

	cout << "Input size of your area: ";
	cin >> length >> width;

	int square = find_squares(length, width);

	cout << "You can divide your area into squares equal to " << square << " square meters each.";

	return 0;
}