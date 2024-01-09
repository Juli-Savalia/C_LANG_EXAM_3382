//Print reverse 1d elements and sum of elements in a array using function

#include<stdio.h>

int sum_reverse(int n)
{
	int i,sum,reverse;
	int a[n];
	
	for(i=1;i<=n;i++)
	{
		sum = sum + i;
	}
	printf("Sum of your all elements in a array is :- %d \n",sum);
	
	for(i=1;i<=n;i++)
	{
		reverse = a[i];
	}
	printf("Reverse of your all elements in a 1d array is :- %d \n",reverse);
}


void main()
{
	int n,i;
	printf("Enter the size of an array:-");
	scanf("%d",&n);

	int a[n];
	printf("Enter the elements of an array :-\n");
	
	for(i=1;i<=n;i++)
	{
		printf("a[%d] =",i);
		scanf("%d",&a[i]);
	}
	
	sum_reverse(n);
}



