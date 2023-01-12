#include<stdio.h>

void swap(int*,int*);

void swap(int *a,int *b){


    int temp;
    temp=*a;
    *a=*b;
   *b=temp;
}
int main()
{


int a=0,b=1;
    swap(&a,&b);

    printf("%d %d",a,b);
 
}
