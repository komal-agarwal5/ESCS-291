#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
FILE *fi;
char a[100], c;
fi = fopen("file2.txt","r"); 
if(fi == NULL)
   {
      printf("Error!");   
      exit(1);             
   }
else{
   printf("contents of the file: ");
   while (c!= EOF){
   c=fgetc(fi);
   printf("%c",c);
}
   fclose(fi);
return 0;
}
}
