#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,arr[6],temp;
    printf("Enter the number of Array Element : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter Value of array Element %d : ",i+1);
        scanf("%d",&arr[i]);}
    for(int j=0;j<n-1;j++){
        for(int k=0;k<(n-1);k++){
            if(arr[k] > arr[k+1]){
                temp = arr[k];
                arr[k]= arr[k+1];
                arr[k+1] = temp;}}}
    printf("Sorted Array is ...");
    printf("\n");
    for(int l=0;l<n;l++){
        printf("%d",arr[l]);}
    return 0;
}
