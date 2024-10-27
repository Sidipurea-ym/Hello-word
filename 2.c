#include<stdio.h>
#include<stdlib.h>
int main()
{
    float a;
    scanf("%f",&a);
    int b=100*a;
    if(b%100>50)
    {
        printf("%d\n",(int)a+1);
    
    }
    else
    {
        printf("%d\n", (int)a);
    }
return 0;
}