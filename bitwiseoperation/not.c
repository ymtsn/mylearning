#include <stdio.h>

int main()
{
	unsigned char num = 0x9B;/* 10011011 */
	num = ~num;/* 01100100 */
	printf("%#X",num);
}
