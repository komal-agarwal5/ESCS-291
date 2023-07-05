#include <stdio.h>  
void main()  
{  
    FILE *fp;  
    int id;  
    char name[50];  
    float salary;  
    fp = fopen("file4.txt", "w+");
    if (fp == NULL)  
    {  
        printf("File does not exists \n");  
        return;  
    }  
    printf("Enter the id\n");  
    scanf("%d", &id);  
    fprintf(fp, "Id= %d\n", id);  
    printf("Enter the name \n");  
    scanf("%s", name);  
    fprintf(fp, "Name= %s\n", name);  
    printf("Enter the salary\n");  
    scanf("%f", &salary);  
    fprintf(fp, "Salary= %.2f\n", salary);  
    fclose(fp);  
}
