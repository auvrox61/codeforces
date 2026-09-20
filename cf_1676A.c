//codeforces problem 1676A

#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char arr[7];
        int sum1=0;
        int sum2=0;
        scanf("%s",arr);
        for(int i=0;i<3;i++){
            sum1+=arr[i];
        }
        for(int i=3;i<6;i++){
            sum2+=arr[i];
        }
        if(sum1==sum2){
            printf("YES\n");
        } else{
            printf("NO\n");
        }
    }
    return 0;
}