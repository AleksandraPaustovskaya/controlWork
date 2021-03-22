#pragma once

typedef struct Pair
{
	int subject;
	int value;
} Pair;

// Сортировка массива
void quickSort(Pair array[], const int left, const int right);
