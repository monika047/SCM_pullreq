#include<stdio.h>
void main()
{
	int num;
	for (num=1;num<=10;num++)
	{
		if(num==5)
		{
			continue;
		}
		if(num==8){break;}
		printf("%d\t",num);
	}
}
