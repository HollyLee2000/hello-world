//ʵ�ִ����ж�2��float�������
//��ȷ��ʱС�����5λ
#include <stdio.h>
int main()
{
    float Z1 = 1.78;
    float Z2 = 1.779999;
    printf("Z1 is %f\n", Z1);
    printf("Z2 is %f\n", Z2);
    Z1 = (int)(100*Z1+0.0005) * 0.01; // С�������λ�������� 
    Z2 = (int)(100*Z2+0.0005) * 0.01;
    printf("Remain 5 places after decimal point. Z1 is %.5f\n", Z1);
    printf("Remain 5 places after decimal point. Z2 is %.5f\n", Z2);
    if(Z1==Z2)
    	printf("The two numbers are equal.\n");
    else
    	printf("The two numbers are not equal.\n");
    return 0;
}
