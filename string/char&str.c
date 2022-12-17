#include<stdio.h>
void main(){
    /*
    当程序调用getchar()时，程序就等着用户按键。用户输入的字符被存放在键盘缓冲区中，直到用户按回车为止(回车字符也放在缓冲区中)。
    当用户键入回车之后，getchar()才开始从输入流中每次读入一个字符，getchar()函数的返回值是用户输入的第一个字符的ASCII码,
    如出错返回EOF。如用户在按回车之前输入了不止一个字符，其他字符会保留在键盘缓存区中,，
    待后续getchar()调用读取。也就是说，后续的getchar()调用不会等待用户按键，而直接读取缓冲区中的字符，
    直到缓冲区中的字符读完为后，才等待用户按键。
    */
    char *str = "hello";
    char str1[10];
    char a = 'a';
    printf("%s\n",str+1);/*输入参数是已经定义好的“字符数组名”, 不用加&, 
                        因为在C语言中数组名就代表该数组的起始地址
                        str+1就是从首地址的下一个地址(首字母的下一个字母)开始读到\0
                        所以打印ello
                        */
    printf("%c\n",a);
    printf("input char\n");
    a = getchar();
    putchar(a);
    printf("\n");
    printf("input str:\n");
    scanf("%s",str1);
    printf("%s\n",str1);

}