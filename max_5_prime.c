//小明有 5 张数字卡片，上面分别为数字 1， 2， 3， 6， 9。小明想用这 5 张数字卡片组成一个最大的 5 位
//素数，这个五位数是_______。
//编程：任意输入5个数字，将它们组合为最大的5位素数输出。如果不存在5位素数，则输出ERROR。
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int judgeprime(int m)
{
	int a,b;
	int judge = 1;
	for(a=2; a<=sqrt(m); a++)
	{
		for(b=2; b<m; b++)
		{
			if(a*b==m)
			{
				judge = 0;
				break;
			}
		}
		if(judge==0)
			break;
	}
	return judge;
}
int main()
{
	int i,j,k;
	int x[5];
	int max = 0;
	int temp;
	printf("Input 5 numbers : \n");
	for(i=0; i<5; i++)
	{
		scanf("%d",&x[i]);
	}
	for(i=0;i<5;i++) 
	{
		for(j=0; j<i; j++)
		{
      		if( x[j] < x[i]) 
			{
      			temp = x[i];
  	   			x[i] = x[j];
  	    		x[j] = temp;
  	    	}
      	}
    }
    while(1)
    {
    	if(judgeprime(x[0]*pow(10,4)+x[1]*pow(10,3)+x[2]*pow(10,2)+x[3]*pow(10,1)+x[4]*pow(10,0)))
    	{
    		max = x[0]*pow(10,4)+x[1]*pow(10,3)+x[2]*pow(10,2)+x[3]*pow(10,1)+x[4]*pow(10,0);
    		break;
    	}
    	else if(judgeprime(x[0]*pow(10,4)+x[1]*pow(10,3)+x[2]*pow(10,2)+x[4]*pow(10,1)+x[3]*pow(10,0)))
    	{
    		max = x[0]*pow(10,4)+x[1]*pow(10,3)+x[2]*pow(10,2)+x[4]*pow(10,1)+x[3]*pow(10,0);
    		break;
    	}
    	//......此处省略余下119种情况，没想到好算法 
	}
	if(max)
		printf("error!\n");
	else
		printf("%d\n",max); 
	system("pause");
	return 0;
}
