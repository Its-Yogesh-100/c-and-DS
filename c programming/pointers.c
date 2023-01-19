#include<stdio.h>


int main()
{
    int a[4]={10,20,30,40};
    

    int *(p[4])={a,a+1,a+2,a+3};


    printf("%d",*p[0]);

    


}