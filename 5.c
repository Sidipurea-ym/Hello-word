#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(1000<=a&&a<2000)
{printf("%.2f",(float)0.9*a);}
else if(2000<=a&&a<3000)
{printf("%.2f",(float)0.85*a);}

else if(3000<=a&&a<4000)
{printf("%.2f",(float)0.8*a);}

else if(4000<=a)
{printf("%.2f",(float)0.75*a);}




return 0;
}