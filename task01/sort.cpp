#include "util.h"
#include "sort.h"
//O(N^2)
//best-O(N)
void bubble_sort(int* array, int size) {
	int count = 0;
	for (int g = 0; g < size - 1; g++)
	{
		bool flag = true;
		for (int i = 0; i < size - 1 - g; i++)
		{
			if (array[i] > array[i + 1]) {
				int t = array[i];
				array[i] = array[i + 1];
				array[i + 1] = t;
				flag = false;
			}
			count++;
		}
		if (flag)
		{
			break;
		}

	}

}


void selected_sort(int* array, int size) {
	int index = 0;

	for (int j = 0; j < size - 1; j++)
	{
		int index = j;

		for (int i = 1; i < size; i++)
		{

			if (array[i] > array[index]) 
			{
				index = i;
			}


		}
		int t = array[j];
		array[j] = array[index];
		array[index] = t;
	}

}
