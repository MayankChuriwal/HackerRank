#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int arr[3],arr1[3],i,c=0,c1=0;
       for(i=0;i<3;i++)
            scanf("%d",&arr[i]);
        for(i=0;i<3;i++)
            scanf("%d",&arr1[i]);
        for(i=0;i<3;i++)
            {
        if(arr[i]>arr1[i])
              c++;
         else if(arr1[i]>arr[i])
             c1++;
    }
    printf("%d %d",c,c1);
    return 0;
}

