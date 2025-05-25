//codeforces-problem 1512A
#include<stdio.h>

int main(){
    int t,n;
    scanf("%d",&t);
    int arr1[t];
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int arr2[n];
        for(int j=0;j<n;j++){
            scanf("%d",&arr2[j]);
        }
        for(int j=0;j<n;j++){
            int x=arr2[0];
            if(arr2[j]!=x){
                printf("%d\n",j+1);
            }
        }
    }
    return 0;
}