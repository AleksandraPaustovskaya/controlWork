#include "stack.h"
#include <stdio.h>

struct StackElement
{
	int value;
	StackElement *next;
};

struct Stack
{
	StackElement *first = nullptr;
};

void push(Stack *stack, int value)
{
	stack->first = new StackElement {value, stack->first};
}

int pop(Stack* stack)
{
	int value = stack->first->value;
	StackElement* NewFirstElement = stack->first->next;
	delete stack->first;
	stack->first = NewFirstElement;
	return value;
}

bool isEmpty(Stack* stack)
{
		return stack->first == nullptr;
}

void printStack(Stack* stack)
{
	StackElement* printerElement = stack->first;
	while ((printerElement != nullptr))
	{
		printf("%d\n", printerElement->value);
		printerElement = printerElement->next;
	}
}

void deleteStack(Stack* stack)
{
	while (!isEmpty(stack))
	{
		pop(stack);
	}
	delete stack;
}

void doubleElement(Stack* stack)
{
	if (!isEmpty(stack))
	{
		int value = pop(stack);
		push(stack, value);
		push(stack, value);
	}
	else
	{
		printf("Элемент не найден\n");
	}
}

Stack *createStack()
{
	return new Stack;
}

bool test()
{
	Stack* test = createStack();
	if (test->first != nullptr)
	{
		return false;
	}
	push(test, 12);
	push(test, 123);
	push(test, -5);
	if (pop(test) != -5)
	{
		return false;
	}
	if (pop(test) != 123)
	{
		return false;
	}

	doubleElement(test);

	if ((pop(test) != 12) && (pop(test) != 12))
	{
		return false;
	}
	
	deleteStack(test);

	return true;
}