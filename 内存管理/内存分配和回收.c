#include <stdlib.h> //malloc,free
#include <stdio.h>
#include <string.h>

int* getArray()
{
	int n;
	int *array;
	printf("请输入要申请数组的大小:\n");
	scanf("%d", &n);

	array = (int *)malloc(n * sizeof (int));
	if (array == NULL)
	{
		printf("申请空间失败!\n");
		return NULL;
	}
	//将申请到空间清0
	//这些操作等同于calloc函数，
	//calloc会分配空间并且会把空间的值初始化置0
	//memset(array, 0, sizeof(int)*n);
	return array;
}

int main()
{
	int count, *array;
	array = getArray();
	printf("%d",sizeof(array));
	for (count = 0; count < sizeof(array)/sizeof(array[0]); count++) /*给数组赋值*/
		array[count] = count;
    for (count = 0; count < sizeof(array)/sizeof(array[0]); count++) /*打印数组元素*/
		printf("%2d", array[count]);
	printf("Do you want to expand array?");
	char *a;
	scanf("%c",a);
	if(*a == 'y')
	{
		realloc(array,2*sizeof(array)/sizeof(array[0]));
		printf("OK!\n");
	}
	free(array);
	//释放野指针报错
	//free(array);
    array = NULL;
	free(array);//空指针可以多次释放
	return 0;
}