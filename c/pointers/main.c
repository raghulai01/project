#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=15,b=30;
    printf("Value of A               : %d\n",a);
    printf("Address Of The A          : %p\n", a);
    printf("------------------------\n");
    printf("VAlue Of B               : %d\n",b);
    printf("Address Of The B          : %p\n", b);
    printf("------------------------\n");
    int *p=&a;
    printf("Value Of P               : %p\n",p);
    printf("Address Of The P          : %p\n", p);
    printf("Stored Address Of The *p  : %d\n", *p);
    printf("------------------------\n");
    int **s=&p;
    printf("Value Of S               : %p\n",s);
    printf("Address Of The S          : %p\n", s);
    printf("Stored Address Of The **S : %d\n", **s);
    printf("------------------------\n");
     int ***k=&s;
    printf("Value Of K               : %d\n",k);
    printf("Address Of The K          : %d\n", k);
    printf("Stored Address Of The ***K: %d\n", ***k);
    printf("------------------------\n");
    void *v=&a;
    printf("Value Of K               : %d\n",v);
    printf("Address Of The K          : %d\n", &v);
    printf("Stored Address Of The ***K: %d\n", *(int*)v);
    return 0;
}
