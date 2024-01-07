#include<stdio.h>
#include<string.h>
struct student
{
    char name[21];
    int age;
    int score;
    char address[51];
}stu1,stu2,stu3;//直接生成三个结构体

//或者
typedef struct teacher
{
    char name[21];
    int age;
    int score;
    char address[51];
}Teacher;//将类型重命名为Teacher


int main(){
/*     
    struct student aaa;
    //aaa.name = "zhangsan"不行，name是const ptr,不能改变name指向
    strcpy(aaa.name,"zhangsan");
    aaa.age = 20;
    aaa.score = 80;
    strcpy(aaa.address,"beijing"); 
*/

	//没用typedef的要这么写类型：struct student 标识符
    struct student bbb = {"lisi", 19, 85, "shanghai"};
    printf("teacher bbb age is %d\n",bbb.age);
    //用typedef的可以这么类型 Teacher 标识符
    Teacher ccc = {"zhangshang", 30, 85, "shanghai"};
    printf("teacher ccc age is %d\n",ccc.age);

    scanf("%s%d%d%s",stu1.name,&stu1.age,&stu1.score,stu1.address);
    printf("%s,%d,%d,%s\n",stu1.name,stu1.age,stu1.score,stu1.address);
}