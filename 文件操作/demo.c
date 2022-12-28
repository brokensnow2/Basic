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
        while ((i=fgetc(file)) != EOF)
        {
            printf("%c",i);
        }
        
    }
    
    fclose(file);
}