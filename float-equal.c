<<<<<<< HEAD
//ÊµÏÖ´úÂëÅĞ¶Ï2¸öfloat±äÁ¿ÏàµÈ
//Îó²î¾«È·µ½Ê±Ğ¡Êıµãºó5Î»
#include <stdio.h>
int main()
{
    float Z1 = 1.78;
    float Z2 = 1.779999;
    printf("Z1 is %f\n", Z1);
    printf("Z2 is %f\n", Z2);
    Z1 = (int)(100*Z1+0.0005) * 0.01; // Ğ¡ÊıµãµÚÁùÎ»ËÄÉáÎåÈë 
    Z2 = (int)(100*Z2+0.0005) * 0.01;
    printf("Remain 5 places after decimal point. Z1 is %.5f\n", Z1);
    printf("Remain 5 places after decimal point. Z2 is %.5f\n", Z2);
    if(Z1==Z2)
    	printf("The two numbers are equal.\n");
    else
    	printf("The two numbers are not equal.\n");
    return 0;
}
=======
//å®ç°ä»£ç åˆ¤æ–­2ä¸ªfloatå˜é‡ç›¸ç­‰
//è¯¯å·®ç²¾ç¡®åˆ°æ—¶å°æ•°ç‚¹å5ä½
#include <stdio.h>
int main()
{
    float m = 1.78;
    float x = 1.779999, y = 2;
    float z = m / y, z1 = x / y;
    if (z == z1) {
        z = (m + x) / y;
    }
    printf("Z is %f\n", z);
    printf("Z1 is %f\n", z1);
    return 0;
}
>>>>>>> upstream/master
