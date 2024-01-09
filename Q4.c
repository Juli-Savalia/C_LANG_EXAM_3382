//wap to find cube of 1d array using pointer

#include<stdio.h>

void main()
{
	int n,i;
	
	printf("Enter the size of an array:-");
	scanf("%d",&n);
	
	int a[n],b[n];
	int *ptr;
	
	for(i=1;i<=n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	 
	 printf("Cube of 1d array:-\n");
	
	for(i=1;i<=n;i++)
	{
		b[i] = a[i]*a[i]*a[i];
		ptr = &b[i];
		printf("%d ",*ptr);
	}
	
}

//output
//Enter the size of an array:-3
//a[1] = 2
//a[2] = 3
//a[3] = 5
//Cube of 1d array:-
//8 27 125
//--------------------------------
//Process exited after 2.926 seconds with return value 3
//Press any key to continue . . .














