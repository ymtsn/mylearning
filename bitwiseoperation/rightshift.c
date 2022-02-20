#include <stdio.h>

int main ()
{
	unsigned char num = 0x9B;/* 10011011 */
	num = num >> 2;/* 00100110 */
	printf("%#X",num);
}
