#include <stdio.h>
#include <string.h>

//可用来查找子串
int main()
{
   const char haystack[20] = "RUNOOB111";
   const char needle[10] = "NOOB";
   char *ret;
   //strstr返回子串第一次出现的指针
   ret = strstr(haystack, needle); 
   //查找第一次出现子字符串的下标 
   printf("indes is %d\n",ret-haystack);
   printf("substr is %s\n", ret);
   
   return(0);
}