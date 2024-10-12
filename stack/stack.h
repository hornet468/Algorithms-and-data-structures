#ifndef STACK_H
#define STACK_H

#define MAX 10

typedef struct 
{
    int stack[MAX];
    int top;
} Struct;

void push(Struct *s, int value);
int pop(Struct *s);
int peek(Struct *s);
int empty(Struct *s);

#endif
