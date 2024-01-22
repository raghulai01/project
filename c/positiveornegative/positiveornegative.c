#include <stdio.h>
int positiveornegative()
{
    int a;
    printf("enter the value A :");
    scanf("%d",&a);
    if (a>0)
    {
        printf("the value is positive number");
    }
    else   
     {
        printf("the value is negative number");
    }
    return 0;
}