#include<stdio.h>
struct student
{
    char name[30];
    int mark[5];
};
int main(){
    struct student std;
    printf("Enter the name of the student: ");
    gets(std.name);
    printf("Enter the marks of 5 subjects: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&std.mark[i]);
    }
    float sum=0,avg;
    for (int i = 0; i < 5; i++)
    {
        sum+=std.mark[i];
    }
    avg=sum/5;
    printf("\nName:-%s\nSum of the marks=%.2f\nAverage marks=%.2f\n",std.name,sum,avg);
    return 0;
}