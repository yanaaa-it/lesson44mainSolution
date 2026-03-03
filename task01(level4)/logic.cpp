#include"logic.h"
int count_positive_numbers(int array[DEFAULT_SIZE], int length) {
	int count = 0;
	for (int i = 0; i < length; i++)
	{
		if (array[i] >= 0) {
			count++;
		}
	}
	return count;
}
bool is_mostly_positive(int array[DEFAULT_SIZE], int length) {
	int positive = count_positive_numbers(array, length);
	return positive>length/2?true:false;
}