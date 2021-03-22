#include "QuickSort.h"
#include <stdio.h>
#include <stdlib.h>


int main()
{
	printf("Enter number of subjects: ");
	int countSubjects = 0;
	scanf("%i", &countSubjects);
	printf("Enter number of subjects for Vasya: ");
	int countVasyaSubjects = 0;
	scanf("%i", &countVasyaSubjects);
	printf("Enter number of subjects for Petya: ");
	int countPetyaSubjects = 0;
	scanf("%i", &countPetyaSubjects);

	printf("Enter Vasya's subjects:");
	Pair subjects[100] = { 0 };
	for (int i = 0; i < countVasyaSubjects; i++)
	{
		scanf("%i %i", &subjects[i].subject, &subjects[i].value);
	}
	printf("Enter Petya's subjects:");
	for (int i = countVasyaSubjects; i < countVasyaSubjects + countPetyaSubjects; i++)
	{
		scanf("%i %i", &subjects[i].subject, &subjects[i].value);
	}
	quickSort(subjects, 0, countVasyaSubjects + countPetyaSubjects - 1);
	bool isSubjectUsed[200] = { false };
	printf("The result:\n");
	for (int i = countVasyaSubjects + countPetyaSubjects - 1; i >= 0; i--)
	{
		if (!isSubjectUsed[subjects[i].subject])
		{
			printf("%i -- %i\n", subjects[i].subject, subjects[i].value);
			isSubjectUsed[subjects[i].subject] = true;
		}
	}
}