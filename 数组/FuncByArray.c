#include<stdio.h>
void *fun(int *p)
{
    p = NULL;
    printf("%p\n",p);
}
void *swap(int *p, int *p2)
{
    int *temp = p;
    p = p2;
    p2 = temp;
}
int main(){
    int a[] = {1,2,3,4,5};
    int b[] = {6,7,8,9,10};
    int *p = a;
    printf("%p\n",p);
    fun(p);//将地址作为值传递，如果没有return，形参函数结束就销毁
    printf("%p\n",p);
    printf("a:  %p\n",a);
    printf("b:  %p\n",b);
    swap(a,b);
    printf("a:  %p\n",a);
    printf("b:  %p\n",b);
}