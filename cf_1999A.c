#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int sum=0;
        int dig1=arr[i]%10;
        int dig2=arr[i]/10;
        sum+=dig1+dig2;
        printf("%d\n",sum);
    }
    return 0;
}