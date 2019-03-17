#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a;
    int n;

    printf("enter a number : \n");
    scanf("%d",&a);

    n = log10(a) + 1;

    printf("total number of digits : %d \n",n);

    a=n*a;

    printf("the value of number = %d \n",a);

    return 0;

}




