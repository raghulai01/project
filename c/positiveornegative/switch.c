#include<stdio.h>
int switch1()
{
    int e;
    int a;
    int b;
    int c;
    int d;
    int f;
    int g;
    printf("enter how many value");
    scanf("%d",&e);
    if (e==2)
    {
    printf( "enter the value 1");
    scanf("%d",&a);

    printf( "enter the value 2");
    scanf("%d",&b);

    printf( "enter the operator");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
        g=a+b;
        printf("the added value 1 and 2 is :%d",g);
        break;
        case 2:
        g=a-b;
        printf("the subtract value 1 and 2 is :%d",g);
        break;
        case 3:
        g=a*b;
        printf("the multiplication value 1 and 2 is :%d",g);
        case 4:
        g=a/b;
        printf("the division value 1 and 2 is :%d",g);
        break;
        case 5:
        g=a%b;
        printf("the modulus value 1 and 2 is :%d",g);
        break;
        }
    }
    else
    {

    printf( "enter the value 1");
    scanf("%d",&a);

    printf( "enter the value 2");
    scanf("%d",&b);

    printf( "enter the operator");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
        g=a+b;
        printf("the added value 1 and 2 is :%d",g);
        break;
        case 2:
        g=a-b;
        printf("the subtract value 1 and 2 is :%d",g);
        break;
        case 3:
        g=a*b;
        printf("the multiplication value 1 and 2 is :%d",g);
        case 4:
        g=a/b;
        printf("the division value 1 and 2 is :%d",g);
        break;
        case 5:
        g=a%b;
        printf("the modulus value 1 and 2 is :%d",g);
        break;
    }
    }
    return 0;
}