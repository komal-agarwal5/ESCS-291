#include <stdio.h>  
void main(){  
   FILE *fp;  
  
   fp = fopen("file3.txt","w+");  
   fputs("This is a program for file handling\n", fp);  
   fseek( fp, 8, SEEK_SET );  
   fputs("It is a part of the second semester curriculum", fp);  
   fclose(fp);  
}
