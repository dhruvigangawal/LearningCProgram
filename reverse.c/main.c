#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,a[50],n,c,m,l;
    printf("Enter the number of array elements:\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    m=0;
    l=n-1;
    while(m<l)
    {
        c=a[m];
        a[m]=a[l];
        a[l]=c;
        m++;
        l--;
    }

    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n A[0] is %d", a[0]);
    return 0;
}
