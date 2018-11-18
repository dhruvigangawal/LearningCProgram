#include <stdio.h>
#include <stdlib.h>
int main()

{
	int person=1,age=-1;

	if(person==0)
	{
		printf("go to room 2\n");

	}

	else if(person==1)
	{
		if(age>=18)
		{
			printf("go to room 1\n");
		}

		else if(age<18 && age > 0)
		{
			printf("go to play area\n");
		}
		else
		{
			printf("Stupid say the proper age\n");
		}


	}
	else
	{
		  printf("bye bye\n");
	}

	return 0;
}