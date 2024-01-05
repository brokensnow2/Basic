#include<stdio.h>
char *str = "hello";
void main(){

    char str1[10];
    char a = 'a';
    /*输入参数是已经定义好的“字符数组名”, 是个地址常量，不用加&, 
    因为在C语言中数组名就代表该数组的起始地址
    str+1就是从首地址的下一个地址(首字母的下一个字母)开始读到\0
    所以打印ello
    */
    printf("%s\n",str+1);
    printf("the char is %c\n",a);

    /**
     * 基本ASCII码
     * 前128个称为基本ASCII码，从二进制角度来看，
     * 它们的最高位bit[7]=0，
     * 只使用了低7位bit[6,0]来进行编码
     * 0~31 之间的ASCII码是控制字符，常用于控制像打印机一样的外围设备
     * 扩展ASCII码
     * 后128个称为扩展ASCII码。
     * 许多基于x86的系统都支持使用扩展（或“高”）ASCII。
     * 扩展ASCII码允许将每个字符的第8位用于确定附加的128个特殊符号字符、外来语字母和图形符号。
     */
    printf("the char's ASCII is %d\n",a); //小写字母a的ASCII码是97。
    printf("input char\n");

    /*
    当程序调用getchar()时，程序就等着用户按键。用户输入的字符被存放在键盘缓冲区中，直到用户按回车为止(回车字符也放在缓冲区中)。
    当用户键入回车之后，getchar()才开始从输入流中每次读入一个字符，getchar()函数的返回值是用户输入的第一个字符的ASCII码,
    如出错返回EOF。如用户在按回车之前输入了不止一个字符，其他字符会保留在键盘缓存区中,，
    待后续getchar()调用读取。也就是说，后续的getchar()调用不会等待用户按键，而直接读取缓冲区中的字符，
    直到缓冲区中的字符读完为后，才等待用户按键。
    */
   
    a = getchar();
    putchar(a);
    printf("\n");
    //如果第一次在a = getchar();输入了多个字符，其他字符会留在缓冲区
    //导致scanf("%s",str1);直接取出缓冲区数据
    printf("input str:\n");
    scanf("%s",str1);
    printf("%s\n",str1);

}