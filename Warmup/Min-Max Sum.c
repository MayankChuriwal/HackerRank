#include <math.h>
#include<stdio.h>
int main(){
    long int arr[5];int i;long int max,min,sum1=0,sum=0;
    for (i=0;i<5;i++)
        {
        scanf("%ld",&arr[i]);
        if(i==0)
            {
            max=arr[0];
            min=arr[0];
        }
        if(arr[i]>max)
            max=arr[i];
        if(arr[i]<min)
            min=arr[i];
    }
    for(i=0;i<5;i++)
        {
        sum=sum+arr[i];
    }
    printf("%ld %ld",sum-max,sum-min);
}
