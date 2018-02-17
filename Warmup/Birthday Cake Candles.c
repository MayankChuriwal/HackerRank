#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int age,arr[100000],i,max=0,c=0;
    scanf("%d",&age);
    for(i=0;i<age;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>max)
        {
            max=arr[i];
        }
        else if(arr[i]==max)
        {
            c++;
        }
    }
    printf("%d",c+1);

}
