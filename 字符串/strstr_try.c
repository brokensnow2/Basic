#include <stdio.h>
#include <string.h>
 
 
int main()
{
   const char haystack[20] = "RUNOOB111";
   const char needle[10] = "NOOB";
   char *ret;
   //查找第一次出现子字符串的位置 
   ret = strstr(haystack, needle);  
 
   printf("substr is %s\n", ret);
   
   return(0);
}