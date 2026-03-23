/* A program that performs bit operations and prints the before
 * and after of the operation				*/

#include "bit_ops.h"
/* bit_ops.h:
 * Includes facilities for string management and easy appending
 * so programmer musn't rely purely on finicky char arrays only
 * for appending bit symbols.					*/

int ipow(int base, int n)
{
	int p, i;
	p = 1;

	for (i = 1; i <= n; ++i)
		p *= base;	

	return p;
}


void printfbin(int8_t b)
{
	int8_t r1, r2;
	r1 = r2 = b;
	for (int i = (sizeof(b) - 1); i >= 0; --i) {
		r2 %= ipow(2, i);
		if (r2 == r1)
			putchar(BIT_OFF);
		else {
			r1 = r2;
			putchar(BIT_ON);
		}
	} 
	putchar('\n');
}

int main()
{
	string *test = str_init("Hello World!");
	printf("string library test: %s\n", test->s);
	printf("test->len: %d\n", test->len);
}	
			
						
