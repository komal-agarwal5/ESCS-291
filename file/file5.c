#include <stdio.h>  
int main(){  
   FILE *fi;  
   char c[100]; 
   fi = fopen("file5.txt", "r");  
   while(fscanf(fi, "%s", c)!=EOF){  
   printf("%s ",c);
   printf("\n");  
   }  
   printf("\n");
   fclose(fi);  
return 0;
} 
