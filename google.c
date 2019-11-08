//f(n)函数的定义为0~n中包含的1的个数
//f(13)是0~13中包含1的有 1，10，11，12，13，所以f(13)=6
//f(1) = 1。
//求另一个f(n)=n的n值
#include <stdio.h>
 
int f(int n)
{
	int num =0;
	
	int tmp,rem,base;
	base =1;
	tmp = n;
	
	while(tmp)
	{
		rem = tmp%10;
		tmp = tmp/10;
		if(rem == 0)
		{
			num+=base*tmp;
		}
		else if(rem == 1)
		{
			num  = num + (n - (int)(n/base)*base +1 + tmp*base);
		}
		else
			num += (tmp+1)*base;
		base *= 10;
	}
	
	return num;
}

int main()
{
	int k;
	for(k=2; f(k)!=k; k++)
		continue;
	printf("%d",k);
	return 0;
}
