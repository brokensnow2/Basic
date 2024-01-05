#include<stdio.h>
int main(){
    char dst[100] = { 0 };
	int a = 10;
	char src[] = "hello world";
	printf("a = %d, src = %s", a, src);
	printf("\n");
	 //将双引号中的变为字符串放到dst中
	int len = sprintf(dst, "a = %d,src = %s", a, src);
	printf("dst = \" %s\"\n", dst);
    int len2 = strlen(dst);
	printf("len = %d\nlen2 = %d", len,len2);
}