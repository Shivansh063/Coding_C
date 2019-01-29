#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    int a[10];
    int arr[n];

    for(int k=0;k<n;k++){
        scanf("%d",&a[k]);}
    for(int h=0;h<n;h++){
        int i=0;
        if((h-m) < 0){
            i = n + (h-m);
            arr[i] = a[h];
            }
        else{
            i = h-m;
            arr[i] = a[h];
        }
    }
    for(int j=0;j<n;j++){
        printf("%d ",arr[j]);
    }



return(0);}
