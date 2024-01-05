#include<stdio.h>
int main(){
    char i;
    FILE* file = fopen("./1.txt","r");
    if (file == NULL)
    {
        printf("打开失败\n");
        return -1;
    }
    else
    {
        printf("ok,ptr:%p\n",file);
        /**
         * 检测到文件结尾返回EOF end 0f file 
         * 像getchar，scanf，fgetc等
         * EOF通常定义在stdio.h 
         */
        while ((i=fgetc(file)) != EOF)//右键转到定义
        {
            printf("%c",i);
        }
        
    }
    
    fclose(file);
}