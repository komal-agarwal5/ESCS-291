#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c;
	float d=0.0,r1=0.0,r2=0.0;
	printf("Enter values of a,b and c of the quadratic equation\n");
	scanf("%d%d%d",&a,&b,&c);
	d=pow(b,2)-(4.0*a*c);
	r1=(-b+sqrt(d))/(2.0*a);
	r2=(-b-sqrt(d))/(2.0*a);
	if(d==0)
	{
		printf("Roots are real and equal:\n%f and %f\n",r1,r2);
	}
	else if(d>0)
	{
		printf("Roots are real and distinct:\n%f and %f\n",r1,r2);
	}
	else
	{
		printf("Roots are imaginary:\n%f and %f\n",r1,r2);
	}
}
