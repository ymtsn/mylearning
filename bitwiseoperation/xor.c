#include <stdio.h>

int main()
{
	unsigned char num = 0x9B;/* 10011011 */
	num = num ^ 0x56;/* 01010110 */
	printf("%#X", num);/* 11001101 */
}
