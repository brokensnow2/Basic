#include<stdio.h>
enum Color{
    red,blue,green
}color; 
int main(){
    int a;
    scanf("%d",&a);
    switch (a)
    {
    case red:
        printf("red\n");
        break;
    case blue:
        printf("blue\n");
        break;
    case green:
        printf("green");
        break;
    default:
        break;
    }
}