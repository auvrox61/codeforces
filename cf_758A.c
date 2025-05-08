#include<stdio.h>
#include<limits.h>

int findMax(int arr[],int n,int max){
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int main(){
    int n;
    int max=INT_MIN;
    int result;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max_scanned=findMax(arr,n,max);
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=max_scanned-arr[i];
    }
    printf("%d\n",sum);
    return 0;
}