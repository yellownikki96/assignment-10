#include <stdio.h>
#include <stdlib.h>

 struct time
 {
     int hour,minute,second;
 };
 
 void  main()
 {
     struct time time1,time2;
     int second1,second2,diff;
     printf("enter 1st time in hours , minutes and seconds\n ");
     scanf("%d%d%d",&time1.hour,&time1.minute,&time1.second);
     
     printf("enter 2nd time in hours , minutes and seconds\n ");
     scanf("%d%d%d",&time2.hour,&time2.minute,&time2.second);
     
     if(time1.hour<0 || time1.minute<0 || time1.second<0 ||time2.hour<0 || time2.minute<0 || time2.second<0 )
     {
         printf("invalid input");
         exit(0);
     }
     
     second1=time1.hour*3600+time1.minute*60+time1.second;
     second2=time2.hour*3600+time2.minute*60+time2.second;
     diff=abs(second1-second2);
     printf("time difference is : %d hours , %d minutes, %d seconds ",diff/3600,(diff%3600)/60,(diff%3600)%60);
 }
 
