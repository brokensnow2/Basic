#include <stdio.h>
#include <stdarg.h>
/**
stdarg.h提供了类似参数宏的功能，但必须按下列步骤进行
1.通过一个使用省略号的函数原型，省略号要在最后且至少要一个形参
2.在函数定义中创建一个va_list类型变量
3.用宏把该变量初始化为一个参数列表
4.用宏访问列表
5.用宏完成清理
*/

//省略号前一个形参起着特殊作用叫做ParmN,它的值是省略号参数的数量
void func1(int n,...)
{
	va_list ap;
    //宏函数，初始化工作
    va_start(ap,n);
    //第一次调用返回参数列表的第一项，第二次调用返回参数列表的第二项
    //第二个参数指定了返回值类型
    int arg1 = va_arg(ap,int);
    int arg2 = va_arg(ap,int);
    printf("arg1 is %d\narg2 is %d\n",arg1,arg2);
    //清理工作
	va_end(ap);
}

int main()
{
	func1(2,1,3);
}
