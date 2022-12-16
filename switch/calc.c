#include<stdio.h>
int main(){
    int a,b;
    char c;
    a = (int)getchar();
    while(getchar()!='\n');//清除回车
    c = getchar();
    while(getchar()!='\n');
    b = (int)getchar();
    while(getchar()!='\n');
    int ans;
    switch (c)
    {
    case '+':
        ans = a + b;
        break;
    case '-':
        ans = a - b;
        break;
    case '*':
        ans = a * b;
        break;
    case '/':
        ans = a / b;
        break;
    default:
        break;
    }
    printf("%d",ans);
}