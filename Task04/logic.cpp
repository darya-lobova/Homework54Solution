#include "logic.h"

int find_squares(int length, int width) {

	if (length <= 0 || width <= 0) {
		return -1;
	 }

	if (length % width == 0) {
		return width;
	}

	return find_squares(length, length % width);
}