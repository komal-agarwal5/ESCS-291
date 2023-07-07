#include<stdio.h>
typedef struct date
{
	int day;
	char month[20];
	int year;
}dates;
void disp(int x,char *y,int z)
{
 	printf("%d %s,%d\n",x,y,z);
}
int main()
{
	dates d1;
	printf("Enter the day:\n");
	scanf("%d",&d1.day);
	printf("Enter the month:\n");
	scanf("%s",d1.month);
	printf("Enter the year:\n");
	scanf("%d",&d1.year);
	disp(d1.day,d1.month,d1.year);
	return 0;
}
