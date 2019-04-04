#include <stdio.h>
#include <stdlib.h>

int main()
{
     int j,count=0,n,c;

    printf("Enter a positive number :\n");
    scanf("%d",&n);

    for( c=2 ; c<= n-1 ; c++)
    {
        if(n%c ==0)
        {
            printf("%d is not a prime number \n",n);
            break;
        }
    }
    if(c == n)
    {
        printf("%d is a prime number\n",n);
    }

     else if(n==1)
    {
        printf("%d is neither a prime number nor a composite number\n",n);
    }
    int flag=0;
    for(c=1;c<=n;c++)
    {
        flag = 0;
        count=0;
        for(j=1;j<=c;j++)
        {
            if(c%j==0)
            {
                count++;
            }
            if(count>2)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("%d\n",c);
        }
    }
    return 0;
}
