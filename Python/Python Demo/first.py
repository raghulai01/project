'''#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter how many tables you want: ");
scanf("%d",&a);
printf("Multiplication table upto %d\n",a);
for(b=1;b<=a;b++)
{
for(c=1;c<=20;c++)
printf("%d*%d=%d\n",b,c,b*c);
printf("***************\n");
}
return 0;
}'''

a=input("Enter which tables you want:")
input("Multiplication table of "+a+"is",a)
#for i in range (1,11):
 #   print ( a "x" i "=" a*i\n)

