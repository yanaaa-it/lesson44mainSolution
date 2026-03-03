#include"logic.h"

int count_multiples(int array[DEFAULT_SIZE], int length, int n) {
	int count = 0;
	for (int i = 0; i < length; i++)
	{
		if (array[i] % n==0) {
			count++;
		}
	}
	return count;
}