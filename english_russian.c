//ä¸€ä¸ªæ—…è¡Œç¤¾æœ‰ 72 äººï¼Œå…¶ä¸­ä¼šè‹±è¯­çš„æœ‰ 48 äººï¼Œä¼šä¿„è¯­çš„æœ‰ 36 äººï¼Œä¸¤æ ·éƒ½ä¸ä¼šçš„æœ‰ 8 äººï¼Œä¸¤æ ·éƒ½ä¼šçš„æœ‰
//_______ä¸ªã€‚
//ç¼–ç¨‹ï¼šè¾“å…¥æ—…è¡Œç¤¾æœ‰72äºº
//     è¾“å…¥ä¼šè‹±è¯­48äºº
//     è¾“å…¥ä¼šä¿„è¯­36äºº
//     è¾“å…¥ä¸¤æ ·éƒ½ä¸ä¼šæœ‰8äºº
//     è¾“å‡ºä¸¤æ ·éƒ½ä¼šçš„æœ‰   äºº 
//     è¾“å‡ºï¼šè¾“å…¥æ•°æ®é”™è¯¯ï¼Œæ— æ³•è®¡ç®—

#include<stdio.h>
int main()
{
	int english, russian, traveler, bothcannot, bothcan;
	printf("ÊäÈëÂÃĞĞÉçµÄÈËÊı\n");
	while((scanf("%d",&traveler))!=1||traveler < 0)
	{
		while(getchar()!='\n')
			continue;
		printf("ÊäÈë´íÎó£¬ÇëÖØĞÂÊäÈë£¡\n");
	}
	printf("ÊäÈë»áÓ¢ÓïµÄÈËÊı\n");
	while((scanf("%d",&english))!=1||english < 0)
	{
		while(getchar()!='\n')
			continue;
		printf("ÊäÈë´íÎó£¬ÇëÖØĞÂÊäÈë£¡\n");
	}
	printf("ÊäÈë»á¶íÓïµÄÈËÊı\n");
	while((scanf("%d",&russian))!=1||russian < 0)
	{
		while(getchar()!='\n')
			continue;
		printf("ÊäÈë´íÎó£¬ÇëÖØĞÂÊäÈë£¡\n");
	}
	printf("ÊäÈëÁ½ÖÖÓïÑÔ¶¼²»»áµÄÈËÊı\n");
	while((scanf("%d",&bothcannot))!=1||bothcannot < 0||bothcannot > traveler)
	{
		while(getchar()!='\n')
			continue;
		printf("ÊäÈë´íÎó£¬ÇëÖØĞÂÊäÈë£¡\n");
	}
	bothcan = (english + russian) - (traveler - bothcannot);
	if(bothcan < 0)
	{
		printf("ÊäÈëÊı¾İ´íÎóÎŞ·¨¼ÆËã\n");
	}
	else
		printf("Á½ÖÖÓïÑÔ¶¼»áµÄÈËÓĞ%d¸ö\n",bothcan); 
	return 0;
}
