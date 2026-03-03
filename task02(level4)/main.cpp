#include"util.h"
int main() {
	int array[DEFAULT_SIZE];
	int length;
	int number;

	do {
		system("cls");
		cout << "Input the size of array: ";
		cin >> length;
	} while (length <= 0);

	user_init(array, length);
	print("\n result: ");

	bool smaller = is_smaller_positive(array, length);
	string msg = smaller ? "smaller part odd" : "smaller part not odd";

	print(msg + ".\n");

	return 0;
}