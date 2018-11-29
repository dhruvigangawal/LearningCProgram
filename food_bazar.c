#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char *argv[])
{
	// printf("%d\n",argc);
    char foodnames[100];
	float quantity=0;
    if (argc==3)
    {
    	strcpy(foodnames,argv[1]);
    	quantity = atof(argv[2]);

    }

    else
    {

     printf("enter the name of food:");
     scanf("%s",foodnames);
     
     printf("enter the quantity of food %s ate: ",foodnames);
     scanf("%f",&quantity);

    }

     // printf("%s\n",foodnames);
     // printf("%f\n",quantity);

     if (strcmp(foodnames,"roti")==0)
     {
     	if (quantity >= 3)

     	{
     		printf("unsafe\n");
     	}
     	else if (quantity > 0)
     	{
     		printf("safe\n");
     	}
     	else
     	{
     		printf("rerun the code give correct input\n");

     	}
     }

     else if(strcmp(foodnames,"rice")==0)
     {
     	if (quantity >= 2)
     	{
     		printf("unsafe\n");
     	}
     	else if (quantity > 0)
     	{
     		printf("safe\n");
     	}
     	else
     	{
     		printf("rerun the code give correct input\n");

     	}
     }

      else if(strcmp(foodnames,"maggi")==0)
     {
     	if (quantity >= 2)
     	{
     		printf("unsafe\n");
     	}
     	else if (quantity > 0)
     	{
     		printf("safe\n");
     	}
     	else
     	{
     		printf("rerun the code give correct input\n");

     	}
     }

      else if(strcmp(foodnames,"pizza")==0)
     {
     	if (quantity >= 0.5)
     	{
     		printf("unsafe\n");
     	}
     	else if (quantity > 0)
     	{
     		printf("safe\n");
     	}
     	else
     	{
     		printf("rerun the code give correct input\n");

     	}
     }

      else if(strcmp(foodnames,"burger")==0)
     {
     	if (quantity >= 0.75)
     	{
     		printf("unsafe\n");
     	} 
     	else if (quantity > 0)
     	{
     		printf("safe\n");
     	}
     	else
     	{
     		printf("rerun the code give correct input\n");

     	}
     }

     else
     	printf("rerun the code give correct input\n");
     
     



	return 0;
}




 