#include "stdio.h"
#include "stdlib.h"
int main (int argc, char *argv[])
{
	if(argc != 2)
	{
		return -1;
	}
	int inputNum = atoi(argv[1]);
	if(inputNum == 0)
	{
		return -1;
	}

	if(inputNum % 3 == 0)
	{
		if(inputNum %5 == 0)
		{
			printf("FizzBuzz\n");
		}
		else
		{
			printf("Fizz\n");
		}
	}
	else if(inputNum % 5 == 0)
	{
		printf("Buzz");
	}
	else
	{
		printf("%d", inputNum);
	}
	return 0;
}
