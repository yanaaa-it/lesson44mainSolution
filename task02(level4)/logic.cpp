#include"logic.h"

int cout_odd_numbers(int array[DEFAULT_SIZE], int length) {
	int count = 0;
	for (int i = 0; i < length; i++)
	{
		if (array[i] % 2 == 1) {
			count++;
		}
	}
	return count;
}
bool is_smaller_positive(int array[DEFAULT_SIZE], int length) {
	int odd = cout_odd_numbers(array, length);
	return odd <= length / 2 ? true : false;
}