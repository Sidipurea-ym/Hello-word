#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int a,b,c;
    char op;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%s", &op);
    if (op == '+') 
    {
        c = a + b;
    } 
    else if (op == '-') 
    {
        c = a - b;
    }
    else if (op == '*') 
    {
        c = a * b;
    }
    else if (op == '/') 
    {
        if (b != 0) 
        {
            c = a / b;
        } 
        else 
        {
            printf("Error: Division by zero\n");
            return 1;
        }
    } 
    else 
    {
        printf("Error: Invalid operator\n");
        return 1;
    }
    printf("Result: %d\n", c);

    return 0;
}