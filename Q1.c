#include<stdio.h>

void main()
{
	int choice,a,b;
	
	printf("Enter the value of a :-");
	scanf("%d",&a);
	printf("Enter the value of b :-");
	scanf("%d",&b);
	
	printf("Enter 1 for Addition \n");
	printf("Enter 2 for Substraction \n");
	printf("Enter 3 for multiplication \n");
	printf("Enter 4 for division \n");
	printf("Enter 5 for module \n");
	printf("Enter your choice :-");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("your addition of a and b is :- \t %d",a+b);
			break;
		
		case 2:
			printf("your substraction of a and b is :- \t %d",a-b);
			break;
			
		case 3:
			printf("your multiplication of a and b is :- \t %d",a*b);
			break;
			
		case 4:
			printf("your division of a and b is :- \t %d",a/b);
			break;
		
		case 5:
			printf("your modulous of a and b is :- \t",a%b);
			break;
			
		default:
			printf("Invalid choice");
	}
}


//output
//
//Enter the value of a :-20
//Enter the value of b :-30
//Enter 1 for Addition
//Enter 2 for Substraction
//Enter 3 for multiplication
//Enter 4 for division
//Enter 5 for module
//Enter your choice :-3
//your multiplication of a and b is :-     600
//--------------------------------
//Process exited after 8.962 seconds with return value 42
//Press any key to continue . . .

