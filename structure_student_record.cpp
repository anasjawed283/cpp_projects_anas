// to take records of multiple things of multiple students//
//print total and average 
#include<stdio.h>
#include<stdlib.h>

struct student
{
int rollno,tot;
char name[25];
int mark[3];
float avg;
};

void main()
{
	struct student s[5];  //take record of 5 students//
	int i,n=5,j;
	
	printf("Students Records");
	//take input from user
	for(i=0;i<n;i++)
	{
		printf("\nEnter Student Roll Number: ");
		scanf("%d",&s[i].rollno);
		printf("\nEnter Student name: ");
		scanf("%s",s[i].name);
		printf("\nEnter Student 3 subject's marks: ");
		for(j=0;j<3;j++)
		{
			scanf("%d",&s[i].mark[j]);
		}
	}
	//calculation
	for(i=0;i<n;i++)
	{
		s[i].tot=0;

		for(j=0;j<3;j++)
		{
			s[i].tot = s[i].tot+ s[i].mark[j];
			s[i].avg=(s[i].tot/3);
		}
	}
	//Display result
	for(i=0;i<n;i++)
	{
		printf("\t*Students Records*\n");
		printf("\n==================================\n");
		printf("\nStudent's Roll no is %d", s[i].rollno);
		printf("\nStudent's Name %s", s[i].name);
		printf("\nStudent's Total Marks %d", s[i].tot);
		printf("\nstudents average is %0.0f",s[i].avg);
	}

}
