#include<stdio.h>

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int min_moves=(n>m)?m:n;
    if(min_moves%2==0){
        printf("Malvika\n");
    } else{
        printf("Akshat\n");
    }
    return 0;
}