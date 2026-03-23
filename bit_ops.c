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


void printfubin(uint8_t b)
{
	uint8_t r1, r2;

	string *bits = str_init(BYTE_LITERAL);
//	printf("string *bits: %s\n", bits->s);
	r1 = r2 = b;
	for (int i = 1; i <= BYTE_LEN; ++i) {
		r2 %= ipow(2, (BYTE_LEN - i));
//		printf("r2 %= %d: %d\n", ipow(2, (BYTE_LEN - i)), r2);
		if (r2 < r1)
			bits->s[i - 1] = BIT_ON;
		r1 = r2;
	}
	printf("%s\n", bits->s);
}

int main(int argc, char **argv)
{
	
	char *s = &argv[1][0];
//	printf("*s: %s\n", s);
	int x = atoi(s);
	printf("%d in binary: ", x);
	
	printfubin(x);

}
