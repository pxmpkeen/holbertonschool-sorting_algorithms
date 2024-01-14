#include "sort.h"

/**
 * buubke_sort - implementation of bubble sorting
 * @array: array to sort
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	char flag;
	size_t i;
	int temp;

	if (size < 2)
		return;
	while (true)
	{
		flag = 0, i = 0;
		while (i < size)
		{
			if (i + 1 <= size - 1 && array[i] > array[i + 1])
			{
				flag = 1;
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
			i++;
		}
		if (flag == 0)
			return;
	}
}
