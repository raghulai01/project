#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=10;
    int b=5;
    int c;
    additonprogram(a,b);
    subtractionprogram(a,b);
    multiplicationprogram(a,b);
    divisionprogram(a,b);
    moduleprogram(a,b);
    incrementprogram(a);
    decrementprogram(b);
    assignmentprogram();
    logicalprogram();
    return 0;
}
int additonprogram(int a,int b)
{
   int c=a+b;
   printf("addition.\n value is :%d\n\n",c);

}int subtractionprogram(int a,int b)
{
   int c=a-b;
   printf("subraction.\n value is :%d\n\n ",c);

}
int multiplicationprogram(int a,int b)
{
   int c=a*b;
   printf("multiplication.\n value is :%d\n\n ",c);

}
int divisionprogram(int a,int b)
{
   float c= (float)a/b;
   printf("division.\n value is :%d\n\n ",c);

}
int moduleprogram(int a,int b)
{
   int c=a%b;
   printf("modulus.\n value is :%d\n\n ",c);
}
int incrementprogram(int a)
{
   a++;
   printf("increment.\n value is :%d\n\n ",a);
}
int decrementprogram(int b)
{
   b--;
   printf("decrement.\n value is :%d\n\n ",b);
}

  int assignmentprogram()
{

    int a,b,c,d,e,f,g;
    a=10;
    b=20;
    d=14;
    e=10;
    f=12;
    g=16;
    c=a;
    d+=a;
    e-=b;
    f*=c;
    g/=d;
    printf("Assignmentoperator.\n\n *the value of c:%d\n\n *the value of d:%d\n\n *the value of e:%d\n\n *the value of f:%d\n\n *the value of g:%d\n\n",c,d,e,f,g);
}
int logicalprogram()
{
    int a,b,c,d,e,f;
    a=20;
    b=30;
    c=40;
    d=a<b&&b<a;
    e=b<a||a<b;
    f=a<b!=b<a;
    printf("logicaloperator.\n\n ~the value d:%d\n\n ~the value of e:%d\n\n~the value of f:%d\n\n",d,e,f);
}
int compareisonprogram()
{
    int a=10;
    int b=20;

}
