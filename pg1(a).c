// Online C compiler to run C program online
#include <stdio.h>


int main() {
    int n=5;
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
          int temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    // Write C code here
    printf("Try programiz.pro");

    return 0;
}
