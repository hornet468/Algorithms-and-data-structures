#include <stdio.h>
#include "stack.h"

int main() 
{
    Struct s1;
    s1.top = -1;  

    push(&s1, 10);
    push(&s1, 1);
    push(&s1, 11);
    pop(&s1);

    if (s1.top != -1) {  
        printf("Top element is %d\n", peek(&s1));  
    } else {
        printf("Stack is empty\n");
    }

    return 0;
}