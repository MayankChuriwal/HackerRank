#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    char time[10];
    int t,t1,hour,m1,m2,s1,s2;
    scanf("%s",time);
        t=time[0]-'0';
        //printf("%d",t);
        t1=time[1]-'0';
        m1=time[3]-'0';
        m2=time[4]-'0';
        s1=time[6]-'0';
        s2=time[7]-'0';
    if(time[8]=='P'){
        //printf("%d",t1);
        hour=(t*10)+t1+12;
        t=hour/10;
        t1=hour%10;
        //printf("%d",hour);
        if(hour==24){
            t=1;
            t1=2;}
        else if(hour<10)
        {
            t=0;
            t1=hour;

            return 0;
        }
        printf("%d%d:%d%d:%d%d",t,t1,m1,m2,s1,s2);
    }

    else{
        if(t==1 && t1==2)
        {
            t=0;
            t1=0;
        }
        hour=(t*10)+t1;
    printf("%d%d:%d%d:%d%d",t,t1,m1,m2,s1,s2);
    }
}
