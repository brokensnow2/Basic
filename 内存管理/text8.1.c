#include <stdio.h>

extern int giants;

int main()
{
	//没有include,只是一起编译
	printf("%d\n",giants);
}

/*
打开CMD：
PS D:\Basic> cd .\内存管理\                       
PS D:\Basic\内存管理> g++ -c text8.1.c text8.1_2.c
PS D:\Basic\内存管理> g++ .\text8.1.o .\text8.1_2.o -o main
PS D:\Basic\内存管理> .\main.exe    
5


--PS是PowerShell
*/