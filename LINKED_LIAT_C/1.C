#include<stdio.h>

int main()
{
    struct my
    {
        int data;
        int *p;
        float h;
        /* data */
    };
    

    struct my p;
    
    p.data=75;
    
    printf("%d",p.data);


}