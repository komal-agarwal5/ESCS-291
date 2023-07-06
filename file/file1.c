#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
FILE *fi;
char a[100];
fi = fopen("file1.txt","a+"); 
if(fi == NULL)
   {
      printf("Error!");   
      exit(1);             
   }
else{
   printf("Enter text: ");
   fgets(a, 100, stdin);
   fprintf(fi,"%s",a);
   fclose(fi);
}
return 0;
}
