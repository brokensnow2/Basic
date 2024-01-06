/**
 * 在标准的C语言中（C89/C90、C99、C11），
 * 没有直接支持类似C++中引用的特性。
 * 引用是C++中的一个特有特性，用于创建对象的别名，
 * 使得可以在不使用指针的情况下进行传递和修改对象。
 * 
 * 
 * 
 * 
 typedef struct LNode {
    int data;
} LNode;

int main() {
    LNode node1 = {10};
    
    // 使用指针
    LNode *p = &node1;  // p指向node1
    p->data = 20;       // 修改node1的data属性
    
    // 使用引用
    LNode &node = node1; // node是node1的引用
    node.data = 30;      // 修改node1的data属性
    
    return 0;
}
 * 
*/

/**
void Reverse(LNode *p) 和 void Reverse(LNode &node) 是函数声明，
其中参数类型分别为指针和引用，对应的区别如下：
指针参数 vs. 引用参数:
void Reverse(LNode *p) 接受一个指向 LNode 类型的指针作为参数。
void Reverse(LNode &node) 接受一个 LNode 类型的引用作为参数。
用法和语义:
在函数内部使用指针作为参数，你需要使用间接运算符 -> 来访问结构体的成员。
在函数内部使用引用作为参数，你可以直接访问结构体的成员，就像访问普通的结构体变量一样，不需要使用间接运算符。
 * 
*/

#include <stdio.h>

typedef struct LNode {
    int data;
} LNode;

// 使用指针作为参数
void ReverseUsingPointer(LNode *p) {
    p->data = 50;  // 修改指针所指向对象的data属性
}

/**
//使用引用作为参数;
//cpp行，c会报错，
//c语言会认为是取node地址，但没有名称，
//报错：存在正文时不允许未命名的原型参数
void ReverseUsingReference(LNode &node) {
    node.data = 60;  // 修改引用所指向对象的data属性
}
*/
int main() {
    LNode node1 = {10};
    
    // 使用指针作为参数
    ReverseUsingPointer(&node1);
    printf("Data after ReverseUsingPointer: %d\n", node1.data);  // Output: Data after ReverseUsingPointer: 50
    
    // 使用引用作为参数
    ReverseUsingReference(node1);
    printf("Data after ReverseUsingReference: %d\n", node1.data);  // Output: Data after ReverseUsingReference: 60
    
    return 0;
}

/**
 * C语言中函数参数传递只有值传递（pass-by-value）。
 * 这意味着在调用函数时，实参的值会被复制到函数的形参中，
 * 而对形参的修改不会影响到实参本身。
 * 
 * 
 * 
*/
