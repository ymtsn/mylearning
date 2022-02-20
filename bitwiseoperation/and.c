#include <stdio.h>

int main()
{
	unsigned char num = 0xDB;/* 11011011 */
	num = num & 0x6D;/* 01101101 */
	printf("%#X",num);/* 01001001 */
}
