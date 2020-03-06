#include "Stack.h"

int main()
{
	Stack stack;
	StackInit(&stack, 10);
	StackPush(&stack, 1);
	StackPush(&stack, 2);
	StackPush(&stack, 3);
	StackPush(&stack, 4);
	StackPush(&stack, 5);
	StackPush(&stack, 6);
	StackPush(&stack, 7);
	StackPush(&stack, 8);
	StackPush(&stack, 9);
	StackPush(&stack, 10);
	StackPrint(&stack);
	StackPop(&stack);
	StackPrint(&stack);
	printf("StackDataType = %d\n", StackTop(&stack));
	printf("StackSize = %d\n", StackSize(&stack));
	printf("StackEmpty = %d\n", StackEmpty(&stack));
	system("pause");
	return 0;
}