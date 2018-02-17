#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,i;double sum=0,sum1=0,sum2=0;
    scanf("%d",&n);
    int arr[n];
    for(i = 0; i< n; i++){
       scanf("%d",&arr[i]);
       if(arr[i]>0)
           sum++;
        else if(arr[i]<0)
            sum1++;
        else
            sum2++;
    }
    printf("%.6f\n%.6f\n%.6f",(sum/n),(sum1/n),(sum2/n));
    return 0;
}
