#include <stdio.h>
#include <stdlib.h>
int main()

{

	int a=0;

	printf("Ask the value for a :" );
	scanf("%d",&a);

	switch(a)
	{
		case 1: 
				printf("the value is :%d\n",a+1);

		break;

		case 2: 
		printf("the value is :%d\n",a+2);

		break;

		case 3: 
		printf("the value is :%d\n",a+3);

		break;
	}

	return 0;
}