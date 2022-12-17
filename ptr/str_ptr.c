#include <stdio.h>

int main()
{
	char str[] = "hello world";
	char *p = str;
	*p = 'm';
	p++;
	*p = 'i';
	printf("%s\n", str);

	p = "mike jiang";
	printf("%s\n", p);

	char *q = "test";
	printf("%s\n", q);

	return 0;
    /*
    ans:
    millo world
    mike jiang
    test
    */
}