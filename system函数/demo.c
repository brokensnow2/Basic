#include<stdio.h>
#include<stdlib.h>
void main(){
    int a;
    a = system("calc");//成功返回0
    //system("E:/aaa/bbb.exe");
    //system("dir");
    printf("%d\n",a);
}
