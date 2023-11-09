#include<stdio.h>
#include<string.h>
#include<conio.h>
struct st_rec
{
    char name[100];
    int roll;
    int age;
};
int main(){
    //Taking the record
    struct st_rec std[5];
    printf("Enter record\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the name of %d student: ",i+1);
        getchar();
        gets(std[i].name);
        std[i].roll=i+1;
        printf("Enter the age: ");
        scanf("%d",&std[i].age);
    }
    //Printing the record of second student
    printf("\nThe record of student with roll number 2 is:\n");
    printf("Name-%s\nAge-%d",std[1].name,std[1].age);
    
    return 0;
}
