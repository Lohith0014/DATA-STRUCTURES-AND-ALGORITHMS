#include<stdio.h>
struct student{
    char name[20];
    int age;
    int cgpa;
};

int main(){
    int n,i;
    printf("ENTER THE NO.OF RECORDS: ");
    scanf("%d", &n);
    struct student data[n];
    for (i=0;i<n;i++){
        printf("__________________________________\n");
        printf("ENTER THE DATA FOR STUDENT %d \n",i+1);
        printf("ENTER NAME OF THE STUDENT: ");
        scanf("%s", &data[i].name);
        printf("ENTER AGE: ");
        scanf("%d", &data[i].age);
        printf("ENTER CGPA: ");
        scanf("%d", &data[i].cgpa);
    }
    
    printf("__________________________________\n");
    printf("NAME \t AGE \t CGPA \t\n");
    for(i=0;i<n;i++){
        printf("%s \t %d \t %d \t\n", data[i].name,data[i].age,data[i].cgpa);
    }
}
