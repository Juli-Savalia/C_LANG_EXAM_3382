#include<stdio.h>
#include<string.h>

void main()
{
	char emp1[20],emp2[20],emp3[20],des1[20],des2[20],des3[20];
	FILE *data;
	
	data = fopen("data.txt","a");
	
	if(data == NULL)
	{
		printf("cant open your file successfully...\n");
	}
	else
	{
		printf("Your file is opened successfully...\n");
		
		printf("Enter the name of Emp 1:- ");
		gets(emp1);
		printf("Designation of Emp1:- ");
		gets(des1);
		printf("Enter the name of Emp 2:- ");
		gets(emp2);
		printf("Designation of Emp 2:-  ");
		gets(des2);
		printf("Enter the name of Emp 3:- ");
		gets(emp3);
		printf("Designation of Emp 3:-  ");
		gets(des3);
		
		printf("-----Employee's Name-------\n\n\n");
		
		printf("Name of Emp 1 :-  %s \n",emp1);
		printf("Designation of Emp 1 :-  %s \n",des1);
		printf("Name of Emp 2 :-  %s \n",emp2);
		printf("Designation of Emp 2:-  %s \n",des2);
		printf("Name of Emp 3 :-  %s \n",emp3);
		printf("Designation of Emp 3 :-  %s \n",des3);
		
		fprintf(data,"Name of Emp 1 :- %s  \n",emp1);
		fprintf(data,"Designation of Emp 1 :-  %s  \n",des1);
		fprintf(data,"Name of Emp 2 :-  %s  \n",emp2);
		fprintf(data,"Designation of Emp 2:-  %s  \n",des2);
		fprintf(data,"Name of Emp 3 :-  %s  \n",emp3);
		fprintf(data,"Designation of Emp 3 :- %s  \n",des3);
		
	}
}


//Your file is opened successfully...
//Enter the name of Emp 1:- JULI
//Designation of Emp1:- MANAGER
//Enter the name of Emp 2:- KANNUPRIYA
//Designation of Emp 2:-  MANAGER
//Enter the name of Emp 3:- KRISHNA
//Designation of Emp 3:-  CEO
//-----Employee's Name-------
//
//
//Name of Emp 1 :-  JULI
//Designation of Emp 1 :-  MANAGER
//Name of Emp 2 :-  KANNUPRIYA
//Designation of Emp 2:-  MANAGER
//Name of Emp 3 :-  KRISHNA
//Designation of Emp 3 :-  CEO
//
//--------------------------------
//Process exited after 26.84 seconds with return value 30
//Press any key to continue . . .


