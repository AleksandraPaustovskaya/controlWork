#pragma once

typedef struct Pair
{
	int subject;
	int value;
} Pair;

// ���������� �������
void quickSort(Pair array[], const int left, const int right);
