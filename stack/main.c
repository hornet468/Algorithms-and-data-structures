#include <stdio.h>
#include "stack.h"

int main() 
{
    Struct s1;
    s1.top =  -1;

    push(&s1, 10);
    push(&s1, 1);
    push(&s1, 11);
}