#include <stdio.h>
/*
回调函数是一种特殊的函数，它作为参数传递给另一个函数,后者将回调前者。
1.回调函数是一种常见的编程技术，它可以在异步操作完成后调用一个预定义的函数来处理结果。
回调函数通常用于处理事件、执行异步操作或响应用户输入等场景
2.回调函数还可以实现代码的复用，因为它们可以被多个地方调用。
*/

/*
回调函数的使用场景包括：
事件处理：回调函数可以用于处理各种事件，例如鼠标点击、键盘输入、网络请求等。
异步操作：回调函数可以用于异步操作，例如读取文件、发送邮件、下载文件等。
数据处理：回调函数可以用于处理数据，例如对数组进行排序、过滤、映射等。
插件开发：回调函数可以用于开发插件，例如 WordPress 插件、jQuery 插件等
*/

//这里举出“实现代码的复用”这个功能：查找任意类型链表的值
//核心是void*

//声明一个函数指针
//返回的是int 
//注意int* compare()是指返回的是int*
//所以函数名要打括号表示这是函数指针
int (*compare)(void const*,void const*);
//实现一个
int compareAchieve(void const* node,void const* value)
{
	if(node == value)
    {
        return 0;
    }
    else if(node < value)
    {
        return -1
    }
    else
    {
        return 1;
    }
}
//将实际函数赋给函数指针
compare = compareAchieve;


Node * search_list(Node *node,void const* value,int (*compare)(void const*,void const*))
{
	while(node != NULL)
    {
        if (compare(&node->value,value) == 0)
        {
			break;
        }
        node = node -> link;
    }
    return node;
}

int main()
{

}