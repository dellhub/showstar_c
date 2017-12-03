#include <stdio.h>

#define stage 4

int print_star(int num)
{
	int i;
	for (i = 0; i < num; i++)
	{
		printf("*");
	}
}

int print_space(int num)
{
	int i;
	for (i = 0; i < num; i++)
	{
		printf(" ");
	}
}

int main()
{
	int i, j;
	int space, star;

	if (stage < 1)
		printf("Stage must be 1 or more.");
	else
	{
		space = stage - 1;
		star = 1;

		for (i = 0; i < stage; i++)
		{
			//print space and print star
			print_space(space);
			print_star(star);

			//new line
			printf("\n");

			//decrease space and increase star
			space = space - 1;
			star = star + 2;
		}
	}
	
	getchar();
	return 0;
}