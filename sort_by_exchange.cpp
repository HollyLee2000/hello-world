//交换排序
#include <stdio.h>
int main() 
{
	int x[3], i, j, temp;
  	while(1)
   	{
		scanf("%d %d %d", &x[0], &x[1], &x[2]);
    	for(i=0;i<3;i++) 
		{
			for(j = 0; j < i; j++)
			{
      			if( x[j] > x[i]) 
				{
  	    			temp = x[i];
  	    			x[i] = x[j];
  	    			x[j] = temp;
  	    		}
      		}
    	}
    	printf("%d %d %d\n", x[0], x[1], x[2]);
  	}
  	return 0;
}
