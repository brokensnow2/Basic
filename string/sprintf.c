#include<stdio.h>
int main(){
    char dst[100] = { 0 };
	int a = 10;
	char src[] = "hello world";
	printf("a = %d, src = %s", a, src);
	printf("\n");

	int len = sprintf(dst, "a = %d,src = %s", a, src); //将双引号中的变为字符串放到dst中
	printf("dst = \" %s\"\n", dst);
    int len2 = strlen(dst);
	printf("len = %d\n,len2 = %d", len,len2);
}