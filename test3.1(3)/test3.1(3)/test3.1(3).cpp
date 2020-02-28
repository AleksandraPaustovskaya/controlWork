//Реализовать сортировку Шелла.

#include <stdio.h>

 void shellsort(int countingArray[], int size)
{
	int step = size / 2;
	while (step > 0)
	{
		for (int i = 0; i < size - step; i++)
		{
			for (int j = i + step; j < size; j = j + step)
				if (countingArray[i] > countingArray[j])
				{
					int swap = countingArray[i];
					countingArray[i] = countingArray[j];
					countingArray[j] = swap;
				}
		}
		step = step / 2;
	}
}


int main()
{

	printf("Enter size of array, please\n");
	int size = 0;
	scanf("%d", &size);

	if (size <= 0)
	{
		printf("Incorrect value!!!");
		return -1;
	}

	printf("Enter array, please\n");
	int number[100]{};
	for (int i = 0; i < size; i++)
	{
		scanf("%d", &number[i]);
	}

	shellsort(number, size);
	
	for (int i = 0; i < size; i++)
	{
		printf("in main = %d\n", number[i]);
	}
	return 0;
}