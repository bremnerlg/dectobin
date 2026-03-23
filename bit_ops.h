#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include <strings.h>
#include <stdlib.h>

/* A program that performs bit operations and prints the before
 * and after of the operation				*/
#define NULLPTR 0
#define ENULLPTR 1
#define	BIT_OFF	'0'
#define BIT_ON '1'
#define BYTE_LEN 8

typedef struct string {
	char* s;
	int len;
} string;

string *str_init(char *a);
int str_append(string *s1, string *s2);

int ipow(int base, int n);
void printfbin(int8_t b);
			
						
