#include <stdio.h>
#include <stdlib.h>
int main()

{

	int number,fixednumber;

	printf("take the number as input:");
	scanf("%d",&number);

	printf("take the fixed number as input:" );
	scanf("%d",&fixednumber);

	while(number!= fixednumber)
	{
		if(number > fixednumber)
		{
			number--;

		}
		else if(number < fixednumber)
		{
			number++;
		}
		
	}

	printf("%d\n",number);
	return 0;
}

// if (number == fixednumber)
// {
// 	printf("%s\n", );
// }

// else if(number > fixednumber)
// {
// 	while(number != fixednumber)
// 	{
// 		number--;
// 	}
// }

// else
// {
// 	while(number != fixednumber)
// 	{
// 		number ++;
// 	}
// }

// printf("%s\n", );