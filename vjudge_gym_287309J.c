#include<stdio.h>

int isPrime(int N){
    if(N<2){
        return 0;
    }
    else{
        for(int i=2;i*i<=N;i++){
            if(N%i==0){
                return 0;
            }
            else{
                return 1;
            }
        }
    }
}

void printPrime(int N){
    for(int i=1;i<=N;i++){
        if(isPrime(i)){
            printf("%d ",i);
        }
    }
}

int main(){
    int N;
    scanf("%d",&N);
    printPrime(N);
    return 0;
}