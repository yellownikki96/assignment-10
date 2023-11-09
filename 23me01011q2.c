#include<stdio.h>
struct time
{
    int hours;
    int min;
    int sec;
};
int main(){
    struct time time1,time2,temp;
    printf("Enter the first time in hours minutes and seconds format: ");
    scanf("%d%d%d",&time1.hours,&time1.min,&time1.sec);
    printf("Enter the second time in hours minutes and seconds format: ");
    scanf("%d%d%d",&time2.hours,&time2.min,&time2.sec);
    if ((time1.hours<time2.hours) || ((time1.hours==time2.hours)&&(time1.min<time2.min)) || ((time1.hours==time2.hours)&&(time1.min==time2.min)&&(time1.sec<time2.sec)))
    {
        temp=time1;
        time1=time2;
        time2=temp;
    }
    
    int t1=0,t2=0,t3=0;
    t3=time1.sec-time2.sec;
    if (t3<0)
    {
        t3+=60;
        time1.min--;
    }
    t2=time1.min-time2.min;
    if (t2<0)
    {
        t2+=60;
        time1.hours--;
    }
    t1=time1.hours-time2.hours;
    printf("The time differnce is %dhours %dminutes %dseconds",t1,t2,t3);
}
