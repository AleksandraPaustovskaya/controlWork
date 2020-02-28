//Написать программу, которая в диалоговом режиме позволяет осуществлять следующие операции :
//0 - выйти
//1 - добавить число на вершину стека
//2 - удалить число с вершины стека
//3 - дублировать число на вершине стека, то есть положить на стек его копию
//4 - распечатать стек

#include <stdio.h>
#include <locale.h>
#include "stack.h"
#include "test2.2.h"



int main()
{
	if (!test())
	{
		return -1;
	}
	setlocale(LC_ALL, "Rus");
	Stack* stack = createStack();
	
	while (true)
	{
		printf("\nЗдравствуйте, введите номер команды, для выполнения:\n");
		printf("0 - выйти\n");
		printf("1 - добавить число на вершину стека\n");
		printf("2 - удалить число с вершины стека\n");
		printf("3 - дублировать число на вершине стека, то есть положить на стек его копию\n");
		printf("4 - распечатать стек\n\n");
		int comand = 0;
		scanf("%d", &comand);
		if (comand == 0)
		{
			//0 - выйти
			break;
		}
		else if (comand == 1)
		{
			//1 - добавить число на вершину стека 
			printf("Введите значение\n");
			int value;
			scanf("%d", &value);

			push(stack, value);
		}
		else if (comand == 2)
		{
			//2 - удалить число с вершины стека
			pop(stack);
			printf("Элемент удален\n");
		}
		else if (comand == 3)
		{
			//3 - дублировать число на вершине стека, то есть положить на стек его копию
			doubleElement(stack);
		}
		else if (comand == 4)
		{
			//4 - распечатать стек
			if (!isEmpty(stack))
			{
				printf("\nstack:\n");
				printStack(stack);
			}
			else
			{
				printf("Элемент не найден\n");
			}
		}
		else
		{
			printf("Неверная команда\n");
		}
	}
	deleteStack(stack);
	return 0;
}