#include"logic.h"

int count_elements_less_than_n(int array[DEFAULT_SIZE], int length,int n) {
	int count = 0;
	for (int i = 0; i < length; i++)
	{
		if (array[i] < n) {
			count++;
		}
	}
	return count;
}