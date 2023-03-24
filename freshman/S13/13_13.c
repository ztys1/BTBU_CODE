/*
走进世博园某信息通信馆，参观者将获得前所未有的尖端互动体验，
一场充满创想和喜悦的信息通信互动体验秀将以全新形式呈现，
从观众踏入展馆的第一步起，就将与手持终端密不可分，
人类未来梦想的惊喜从参观者的掌上展开。

在等候区的梦想花园中，参观者便开始了他们奇妙的体验之旅，
等待中的游客可利用手机等终端参与互动小游戏，与梦想剧场内的虚拟人物Kr. Kong
进行猜数比赛。当屏幕出现一个整数X（1<=X<=1000）时，
若你能比Kr. Kong更快的发出对应X的最接近它的素数答案，
你将会获得一个意想不到的礼物。
例如：当屏幕出现22时，你的回答应是23；
当屏幕出现8时，你的回答应是7；
若X本身是素数，则回答X;
若最接近X的素数有两个时，则回答大于它的素数。

翻译：找最接近输入的素数
*/
#include <stdio.h>
int isprime(int a)
{
	int i;
	for (i=2;i<a;i++)
	{
		if (a%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int r;
	scanf("%d",&r);
	int p,j;
	if (r==1) printf("2\n");
	if (r>1)
	{
		for (p=r,j=r;;p--,j++)
	   {
		if (isprime(p)==1&&isprime(j)==1)
		{
			printf("%d\n",j);
			break;
		}
		else if (isprime(p)==1&&isprime(j)==0)
		{
			printf("%d\n",p);
			break;
		}
		else if (isprime(p)==0&&isprime(j)==1)
		{
			printf("%d\n",j);
			break;
		}
	  }
	}
	return 0;
}

