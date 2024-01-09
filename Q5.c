#include<stdio.h>

struct book{
	char title[20];
	char name[20];
	int price;
};

void main()
{
	struct book b1;
	int n,i;
	
	printf("Enter no. of books details you want :-");
	scanf("%d",&n);
	
	int b[n];
	
	for(i=1;i<=n;i++)
	{
		printf("Enter the Author name :-");
		scanf("%s",&b1.name);
		printf("Enter the Title of a book :-");
		scanf("%s",&b1.title);
		printf("Enter the price of a book:-");
		scanf("%d",&b1.price);
	}
	
	printf("\n\n---------------------Details---------------\n\n\n");

	for(i=1;i<=n;i++)
	{
		printf("Author name :- %s \n",b1.name);
		printf("Title of a book :- %s \n",b1.title);
		printf("price of a book:- %d \n",b1.price);
	}
}


//output
//
//Enter no. of books details you want :-2
//Enter the Author name :-abc
//Enter the Title of a book :-ikigai
//Enter the price of a book:-550
//Enter the Author name :-xyz
//Enter the Title of a book :-some epic shits
//Enter the price of a book:-550
//
//---------------------Details---------------
//
//
//Author name :- xyz
//Title of a book :- some
//price of a book:- 550
//Author name :- xyz
//Title of a book :- some
//price of a book:- 550
//
//--------------------------------
//Process exited after 19.15 seconds with return value 2
//Press any key to continue . . .
//


