#include <stdio.h>
#include <stdlib.h>
int main()
{
     int n,i,a[50];
    printf("Enter n:\n");
    scanf("%d",&n);

    printf("The array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
 int large =a[0];
    for(i=0;i<n;i++)
    {

        if(a[i]<large)
        {
            large=a[i];
        }

    }
    printf("the smallest array element is:%d\n",large);

    return 0;
}
