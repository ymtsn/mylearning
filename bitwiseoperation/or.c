#include <stdio.h>

int main (){
	unsigned char num = 0x49;/* 01001001 */
	num = num | 0x92; /* 10010010 */
	printf("%#X\n",num);/* 11011011 */
}
