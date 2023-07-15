#include<stdio.h>
#include<math.h>
void main()
{
     float p,r,t,n,si=0.0,ci=0.0,a=0.0;
     printf("Enter principal,rate,time period and number of times compounded\n");
     scanf("%f%f%f%f",&p,&r,&t,&n);
     si=(p*r*t)/100.0;
     a=p*pow((1+((r/100)/n)),(n*t));
     ci=a-p;
     printf("Principal amount is : Rs %f\n",p);
     printf("Rate of interest is : %f\n",r);
     printf("Time period is : %f\n",t);
     printf("Number of times compounded is : %f\n",n);
     printf("Simple interest is : Rs %f\n",si);
     printf("Compound interest is : Rs %f\n",ci);
}
