#include <stdio.h>
#include<string.h>
#include<stdlib.h>
struct student{
    char name[50];
    int roll;
    int marks;
}s[100];
void main(){
    int i,n;
    printf("Enter number of students:");
    scanf("%d",&n);
    printf("Enter information of students:-\n\n");
    for(i=0; i<n; ++i){
        s[i].roll = i+1;
        printf("Enter roll number:");
        scanf("%d",&s[i].roll);
        printf("Enter name:");
        scanf("%s",s[i].name);
        fflush(stdin);  
        printf("Enter marks:");
        scanf("%d",&s[i].marks);
        printf("\n");
    }