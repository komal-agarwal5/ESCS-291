#include<stdio.h>
struct data
{
	char name[20];
	int roll;
	char code1[20];
	char code2[20];
	char code3[20];
	int marks1,marks2,marks3;
	float avg;	
}st[100];
void main()
{
	int i,j,n,sum=0;
	printf("Enter number of students : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\nEnter course name : ");
		scanf("%s",st[i].name);
		printf("Enter roll : ");
		scanf("%d",&st[i].roll);
		sum=0;
		printf("Enter subject code1 and marks : ");
		scanf("%s%d",st[i].code1,&st[i].marks1);
		printf("Enter subject code2 and marks : ");
		scanf("%s%d",st[i].code2,&st[i].marks2);
		printf("Enter subject code3 and marks : ");
		scanf("%s%d",st[i].code3,&st[i].marks3);
		sum+=st[i].marks1+st[i].marks2+st[i].marks3;
		st[i].avg=sum/3;
	}
	for(i=1;i<=n;i++)
	{
		printf("\nCourse Name : %s",st[i].name);
		printf("\nRoll : %d",st[i].roll);
		printf("\nSubject code1 and marks : %s  %d",st[i].code1,st[i].marks1);
		printf("\nSubject code2 and marks : %s  %d",st[i].code2,st[i].marks2);
		printf("\nSubject code3 and marks : %s  %d",st[i].code3,st[i].marks3);
		printf("\nAverage marks : %f\n",st[i].avg);
	}
}
