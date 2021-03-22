#include "QuickSort.h"

void swap(Pair* a, Pair* b)
{
	const Pair temp = *a;
	*a = *b;
	*b = temp;
}

void quickSort(Pair array[], const int left, const int right)
{
	if (right == left)
	{
		return;
	}
	const int mid = (left + right) / 2;
	const int pivot = array[mid].value;
	int i = left;
	int j = right;
	while (i <= j)
	{
		while (array[i].value < pivot)
		{
			i++;
		}
		while (array[j].value > pivot)
		{
			j--;
		}
		if (i <= j)
		{
			swap(&array[i], &array[j]);
			i++;
			j--;
		}
	}
	if (j > left)
	{
		quickSort(array, left, j);
	}
	if (i < right)
	{
		quickSort(array, i, right);
	}
}