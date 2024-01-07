#include<stdio.h>
void *fun(int *p)
{
    p = (int*)malloc(sizeof(int)*10);
    printf("Form parameter:%p\n",p);
}
void *fun1(int **p)
{
    *p = (int *)malloc(sizeof(int)*10);
    printf("Form parameter2:%p\n",*p);
}
int main(){
    int *p = NULL;
    fun(p);
    printf("argument:%p\n",p);
    fun1(&p);
    printf("argument:%p\n",p);
}