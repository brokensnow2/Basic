#include <stdio.h>
#include <string.h>
 
int main()
{
    int len1,len2;
    char a[] = "25,142,330,Smith,J,239-4123";
    //C 库函数 size_t strspn(const char *str1, const char *str2) 
    //检索字符串 str1 中第一个不在字符串 str2 中出现的字符下标。
    len1 = strspn(a,"0123456789");
    len2 = strspn(a,",0123456789");
    printf("len1 is %d\n",len1);
    printf("len2 is %d\n",len2);
    //strcspn刚好相反
    int len3 = strcspn(a,",1234567890");
    printf("len3 is %d\n",len3);
}