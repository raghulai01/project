#include <stdio.h>
int oddoreven()
{
    int a;
    printf("\nenter the value A \n:");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("the value is even number");
    }
    else   
     {
        printf("the value is odd number");
    }
    return 0;
}
