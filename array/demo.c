#include <stdio.h>

int  main()
{
	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int i = 0;
	int n = 9;
	
	for (i = 0; i < n; i++)
	{
		//printf("%d, ", a[i]);
		printf("%d, ", *(a+i));
	}
	printf("\n");

	int *p = a+1; //如果p指向a数组的第二个元素的地址
	for (i = 0; i < n-1; i++)
	{
		p[i] = 2 * i;
	}

	for (i = 0; i < n; i++)// 非法访问内存
	{
		printf("%d, ", *(p + i));
	}
	printf("\n");


	return 0;
}