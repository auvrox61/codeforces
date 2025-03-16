#include<stdio.h>

int gcd(int A,int B){
    if(B==0){
        return A;
    } else{
        return gcd(B,A%B);
    }
}

int main(){
    int A,B;
    scanf("%d %d",&A,&B);
    int result=gcd(A,B);
    printf("%d",result);
    return 0;
}