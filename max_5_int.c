//小明有 5 张数字卡片，上面分别为数字 1， 2， 3， 6， 9。小明想用这 5 张数字卡片组成一个最大的 5 位
//数，这个五位数是_______。
//编程：任意输入5个数字，将它们组合为最大的5位数输出。

#include<stdio.h>
int main()
{
	int i, k, temp, arr[5];
	printf("�������\n");
	for(i=0; i<5 ;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0; i<5 ;i++)
	{
		for(k=0; k<i ;k++)
		{
			if(arr[i]>arr[k])
			{
				temp = arr[i];
				arr[i] = arr[k];
				arr[k] = temp;
			}
		}
	}
	printf("��ɵ����������");
	for(i=0; i<5 ;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
}
