//sum of elements in a array using function

#include<stdio.h>

int sum(int n)
{
	int i,sum;
	for(i=1;i<=n;i++)
	{
		sum = sum + i ;
	}
	
	printf(" Sum of your all elements in a array is :- %d",sum);
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
	
	sum(n);
}

//output
//Enter the size of an array:-4
//Enter the elements of an array :-
//a[1] =3
//a[2] =4
//a[3] =2
//a[4] =5
// Sum of your all elements in a array is :- 14
//--------------------------------
//Process exited after 4.587 seconds with return value 45
//Press any key to continue . . .
//





