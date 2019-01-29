#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n,arr[8],i,m,max;
    printf("Enter Number of elements of Array : ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("Enter value of Array Element %d : ",i+1);
        scanf("%d",&arr[i]);}
    for(int j=0;j<n;j++){
        i=0;
        for(int k=0;k<n;k++){
            m= abs(arr[j] - arr[k]);
            if(m <= 1){
                i++;}}
         a[j] = i;}
    max = a[0];
    for(int i=1;i<n;i++){
        if(a[i] > max){
            max = a[i];}}
    printf("%d",max);
    return 0;
}
