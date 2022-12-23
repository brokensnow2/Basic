#include<stdio.h>
#include<string.h>
struct student
{
    char name[21];
    int age;
    int score;
    char address[51];
}stu1,stu2,stu3;

int main(){
/*     
    struct student aaa;
    strcpy(aaa.name,"zhangsan");
    aaa.age = 20;
    aaa.score = 80;
    strcpy(aaa.address,"beijing"); 
*/
    struct student bbb = {"lisi", 19, 85, "shanghai"};
    scanf("%s%d%d%s",stu1.name,&stu1.age,&stu1.score,stu1.address);
    printf("%s,%d,%d,%s\n",stu1.name,stu1.age,stu1.score,stu1.address);
}