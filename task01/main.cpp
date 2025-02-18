#include "util.h"
#include "sort.h"
#include <ctime>

#define SIZE 10


int main() {
	
	int array[SIZE];
	init(array, SIZE, -10, 10);
	cout << "Before array: " << convert(array, SIZE) << endl;

	//bubble_sort(array, SIZE);
	selected_sort(array, SIZE);

	cout << "After array: " << convert(array, SIZE) << endl;


	return 0;
}
