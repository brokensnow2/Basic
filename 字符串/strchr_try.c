#include <stdio.h>
#include <string.h>
 
//可用来查找字符出现了几次
int main()
{
    int n = 0;
    char *haystack = "RUNOOBR00RR1R11";
    const char needle = 'R';
    //strchr() 用于查找字符串中的一个字符，并返回该字符在字符串中第一次出现的位置。
    char *ret = strchr(haystack,needle);
    printf("ret is %s\n",ret);
    while (ret!=NULL)
    {
        n++;
        haystack = ret + 1;
        printf("substr is %s\n",haystack);
        ret = strchr(haystack,needle);
    }
    printf("R has %d", n);
}