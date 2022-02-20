#include <stdio.h>

/* mask2.c:9:12: warning:
& has lower precedence than ==; == will be evaluated first */

int main(){
	unsigned char target = 0x9B;/* 10011011 */

	/* 0xc0 11000000 */

	/* bad usage */
	if(target & 0xc0 == 0x80)
	{
		printf("bad usage\n");
	}

	if((target & 0xc0) == 0x80)
	{
		printf("first-seccond bitpattern is 01\n");
	}

}
