#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n, sum=0,sum1=0,i,j,k;
    scanf("%d",&n);
    int a[n][n];
    for(i = 0;i < n; i++){
       for(int j = 0; j < n; j++){

          scanf("%d",&a[i][j]);
       }
    }
    for (i=0,j=0,k=n-1;i<n,j<n,k>=0;i++,j++,k--)
        {


        sum=sum+a[i][i];
        sum1=sum1+a[j][k];
    }
    printf("%d",abs(sum-sum1));
    return 0;
}
