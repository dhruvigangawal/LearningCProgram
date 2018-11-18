#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b,x,y,A=0;

	printf("Person1: enter the value of a,b\n");
	scanf("%d %d",&a,&b);

    printf("Person2: enter the value of x,y\n");
	scanf("%d %d",&x,&y);
    
    A=a*x+b*y;

    printf("%d(%d)+%d(%d) = %d\n",a,x,b,y,A);
    
    printf("Person3: enter the value of c,d\n");
    scanf("%d %d",&a,&b);
    
    A=a*x+b*y;

    printf("%d(%d)+%d(%d)=%d\n",a,x,b,y,A);

    printf("Person4: enter the value of e,f\n");
    scanf("%d %d",&a,&b);

    A=a*x+b*y;

    printf("%d(%d)+%d(%d)=%d\n",a,x,b,y,A);

    return 0;

}