#include <stdio.h>
#include <stdlib.h>

int main()
{
     int n,i,c,j,a[50];
    printf("Enter n:\n");
    scanf("%d",&n);

    printf("The array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {

            if(a[i]>a[j])
            {
                c=a[i];
                a[i]=a[j];
                a[j]=c;
            }
        }

    }
    printf("the sorted array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
