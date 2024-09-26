// 文件：main.c
#include <stdio.h>
#include "example.h"

int main() {
    //include的作用
    printf("Global Variable: %d\n", globalVariable);
    exampleFunction();

    return 0;
}
