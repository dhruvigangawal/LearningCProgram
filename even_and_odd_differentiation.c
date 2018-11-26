#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,sum=0;

	printf("enter the 6 digit number : ");
	scanf("%d",&a);
    
    
    if((a%10)%2==0)
    {
    	sum=(a%10)*4+sum;
    }
    else
    {
    	sum=sum-(a%10);
    }

    a=a/10;

    if((a%10)%2==0)
    {
        sum=(a%10)*4+sum;
    }
    else
    {
        sum=sum-(a%10);
    }

    a=a/10;

    if((a%10)%2==0)
    {
        sum=(a%10)*4+sum;
    }
    else
    {
        sum=sum-(a%10);
    }

    a=a/10;

    if((a%10)%2==0)
    {
        sum=(a%10)*4+sum;
    }
    else
    {
        sum=sum-(a%10);
    }

    a=a/10;

    if((a%10)%2==0)
    {
        sum=(a%10)*4+sum;
    }
    else
    {
        sum=sum-(a%10);
    }

    a=a/10;
    if((a%10)%2==0)
    {
        sum=(a%10)*4+sum;
    }
    else
    {
        sum=sum-(a%10);
    }

    printf("the sum of the numbers = %d\n",sum);

    return 0;
}