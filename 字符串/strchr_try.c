#include <stdio.h>
#include <string.h>
 
 
int main()
{
    int n = 0;
    char *haystack = "RUNOOBR00RR1R11";
    const char needle = 'R';
    char *ret = strchr(haystack,needle);
    printf("%c\n",ret);
    while (ret!=NULL)
    {
        n++;
        //haystack = (haystack + (int)strlen(haystack) - (int)strlen(ret) + 1);
        haystack = ret + 1;
        printf("%s\n",haystack);
        ret = strchr(haystack,needle);
    }
    printf("R has %d", n);
}