#include <stdio.h>
#include <stdlib.h>

int main(int argc,  char **argv)
{
	int i;
	int add = 0;
	char ***tmp;

	if (argc == 1)
	{
		printf("%d", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			tmp = &argv[i];
			if (sizeof(tmp) > 1)
			{
				printf("Error\n");
				break;
			}
			else
			{
				add += atoi(argv[i]);
				printf("%d\n", add);
			}
		}
	}
	return (0);
}
