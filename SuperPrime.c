//超级素数：它本身，各位数字的和，各位数字的平方和，都是素数�?
//�?100~10000 内的所有超级素数，及它们的平均数�?
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int judgeprime(int m)
{
	int a, b;
	int judge = 1;
	for (a = 2; a <= sqrt(m); a++)
	{
		for (b = 2; b < m; b++)
		{
			if (a*b == m)
			{
				judge = 0;
				break;
			}
		}
		if (judge == 0)
			break;
	}
	return judge;
}
int sum(int m)
{
	int re = 0;
	re += m % 10;
	while (m >= 10)
	{
		m = (m - (m % 10)) / 10;
		re += m % 10;
	}
	return re;
}
int powsum(int m)
{
	int re = 0;
	re += pow(m % 10, 2);
	while (m >= 10)
	{
		m = (m - (m % 10)) / 10;
		re += pow(m % 10, 2);
	}
	return re;
}
int main()
{
	int j = 0;
	int i;
	int sumer = 0;
	printf("���������� : \n");
	for (i = 100; i <= 10000; i++)
	{
		if (judgeprime(i) && judgeprime(sum(i)) && judgeprime(powsum(i)))
		{
			printf("%d\n", i);
			sumer += i;
			j++;
		}	
	}
	printf("���ǵ�ƽ����Ϊ%d", sumer / j);
	system("pause");
	return 0;
}
