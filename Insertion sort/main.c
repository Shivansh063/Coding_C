#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, arr[10],temp,loc;
    printf("Enter Number of Ements in Array : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        {printf("Enter Array Element %d : ",i+1);
         scanf("%d",&arr[i]);}
    for(int k=1;k<n;k++){
        for(int j=0;j<k;j++){
            if(arr[k] < arr[j]){
                    loc = j;
                    temp = arr[k];
                    for(int p=k;p>loc;p--){
                        arr[p] = arr[p-1];
                            }
                    arr[loc] = temp;
                             }}}
    printf("Sorted Array is ..");
    printf("\n");
    for(int x=0;x<n;x++)
        {printf("%d",arr[x]);
        }

    return 0;
}
