#include <stdio.h>
#include <stdlib.h>
int main()
{
	int integerType;
	char charType;
	float floatType;
    
	printf("Size of int is : %ld\n",sizeof(integerType));

	printf("Size of char is :%ld\n",sizeof(charType));

	printf("Size of float is :%ld\n",sizeof(floatType));

	return 0;
}