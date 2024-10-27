#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
scanf("%d",&num);
while(num<100||num>999)
{
    printf("-1");
   
    return 1;
}
int a=num/100,b=num%100/10,c=num%10;
printf("%d",100*c+10*b+a);
return 0;
}