#pragma once

struct StackElement;

struct Stack;

void push(Stack* stack, int value);

int pop(Stack* stack);

bool isEmpty(Stack* stack);

void printStack(Stack* stack);

void deleteStack(Stack* stack);

void doubleElement(Stack* stack);

Stack* createStack();

bool test();