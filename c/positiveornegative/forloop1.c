#include <stdio.h>

int forloop1()
{
int i,j, rows;

printf("enter rows:");
scanf("%d",&rows);

for(i=1;i<=rows;i++)
{
    for(j=1;j<=rows-i;j++)
    {
        printf(" ");
    }
    for(j=1;j<=rows;j++)
    {
        printf("*");
    }

    printf("\n");

}
 return 0;

}