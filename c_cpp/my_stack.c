
#include<stdio.h>
#include"include/my_stack.h"
#define _MY_STACK_H 3

int SqStack[_MY_STACK_H];
int top=0;

void stack_push(int x)
{
	SqStack[top++]=x;
}

int stack_pop()
{
	int e;
	top--;
	e=SqStack[top];
	return e;
}


int stack_capacity()
{
	return _MY_STACK_H;
	
}


int stack_size()
{
	return top;
}

int stack_is_empty()
{
	if(top==0)
		return 1;
	else
		return 0;

}

int stack_is_full()
{
	if(top==_MY_STACK_H)
		return 1;
	else 
		return 0;
}



