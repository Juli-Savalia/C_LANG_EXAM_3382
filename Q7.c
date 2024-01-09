//question7

#include<stdio.h>

void main()
{
	int i,j,K=11;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",K);
			K++;
		}
		printf("\n");
	}
}

//output

//11
//12 13
//14 15 16
//17 18 19 20
//21 22 23 24 25
