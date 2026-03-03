#include"util.h"
int main() {
	int array[DEFAULT_SIZE];
	int length;
	int number;
	int n;
	do {
		system("cls");
		cout << "Input the size of array: ";
		cin >> length;
	} while (length <= 0);

	cout << "Input number n: ";
	cin >> n;

	user_init(array, length);
	print("\n nambers less n is ");
	print(to_string(count_elements_less_than_n(array, length,n)) + ".\n");

	return 0;
}