#include <stdio.h>

int main(){
	unsigned char target = 0x9B;/* 10011011 */
	unsigned char masked;

	masked = target & 0xC0;/* 11000000 */

	if(masked == 0x80)
	{
		printf("first-seccond bitpattern is 01\n");
	}
}
