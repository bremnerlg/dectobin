#include <stdlib.h>
#include <string.h>
#include "bit_ops.h"

/* Implement a string that tracks it's own length and has
 * functions for safe initialization, deconstruction,
 * and appending.					*/
string *str_init(char *a)
{
	if (a == NULLPTR)
		return NULLPTR;
	int alen;

	for (alen = 0; a[alen]; ++alen)
		;

	string *str = (string*)malloc(sizeof(string));	
	str->s = (char*)malloc(sizeof(char) * alen);
	str->len = alen;
	strcpy(str->s, a);
	return str;
}
	
/* deconstruct the string structure and ensure all heap is deallocated */
void str_free(string *str)
{
	if (str == NULL)
		return;

	free(str->s);
	free(str);
}	

int str_append(string *s1, string *s2)
{
	if (s1 == NULL || s2 == NULL)
		return -ENULLPTR;
	int i, n;

	
	s1->len += s2->len;
	s1->s = (char*)realloc(s1->s, (sizeof(char) * s1->len));

	for (i = s2->len, n = 0; i < s1->len; i++, n++) 
		s1[i] = s2[n];
		
	return 0;
}


