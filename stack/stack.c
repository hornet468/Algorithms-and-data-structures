#include <stdio.h>
#include "stack.h"

void push(Struct *s, int value)
{
    if (s->top == MAX - 1)
    {
        printf("Failed to push");
        return;
    }
    s->top++;
    s->stack[s->top] = value;
    
}

int pop(Struct *s)
{
    if(s->top == -1) {
        printf("Array is waste");
        return -1;
    }
    int value = s->stack[s->top];
    s->top--;
    return value;
}

int peek(Struct *s) {
    if(s->top == -1) {
        printf("Array is waste");
        return -1;
    }
    return s->stack[s->top];
}

int empty(Struct *s)
{
    return s->top == -1;
}