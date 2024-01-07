#include <stdio.h>
#include <stdlib.h>
#include "node.h"
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

//不同的Node的compareAchieve不同
//实现一个
int compareAchieve(void const* nodeValue,void const* value)
{
	if(*(int *)nodeValue == *(int *)value)
    {
        return 0;
    }
    else if(*(int *)nodeValue < *(int *)value)
    {
        return -1;
    }
    else
    {
        return 1;
    }
}

//通用
Node* search_list(Node *node,void const* value,int (*compare)(void const*,void const*))
{
	while(node != NULL)
    {
        if (compare(&node->value,value) == 0)
        {
			break;
        }
        node = node -> next;
    }
    return node;
}

int main()
{
	Node *list = (Node*)malloc(sizeof(Node));
    list->value = 10;
    Node *list1 = (Node*)malloc(sizeof(Node));
    list1->value = 5;
    list->next = list1;
    list1->next = NULL;

    //Node* node = search_list(list,5,compareAchieve);
    //先开辟再用
    Node* node = (Node*)malloc(sizeof(Node));
    const int a = 5;
    node = search_list(list,&a,compareAchieve);
    if(node != NULL)
    	printf("node value is %d\n",node->value);
}