#include <stdio.h>

int main(int argc, char *argv[])
{
	unsigned char	targetchar;
	unsigned char	bits;

	if (argc != 2)
		return (0);
	while (*argv[1])
	{
		targetchar = *(argv[1])++;
		bits = 0b10000000;
		while (bits)
		{
			if (targetchar & bits)
				printf("%d",1);
			else
				printf("%d",0);
			bits = bits >> 1;
		}
		printf("\n");
	}
}
