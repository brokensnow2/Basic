#include<stdio.h>
int main(){
    char a[100] = "adc*fvcv*ebcy*hghbdfg*casdert";
	char *s = strtok(a, "*");//将"*"分割的子串取出,将该字符改为\0 字符,当连续出现多个时只替换第一个为\0。
	while (s != NULL)
	{
		printf("%s\n", s);
		s = strtok(NULL, "*");
	}
}