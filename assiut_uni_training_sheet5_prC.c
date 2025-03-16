#include<stdio.h>

int oddchecker(int N){
    if(N%2!=0){
        return 1;
    } else{
        return 0;
    }
}

int bin(int N){
    int rnum=0;
    int onum;
    int digit;
    if(N==0){
        printf("0\n");
        return;
    } else{
        bin(N/2);
        onum=N%2;
    }
    while(onum>0){
        digit=onum%10;
        rnum=rnum*10+digit;
        onum/=10;
    }
    if(onum==rnum){
        return 1;
    } else{
        return 0;
    }
}

int main(){
    int N;
    scanf("%d",&N);
    if(oddchecker&&bin){
        printf("YES\n");
    } else{
        printf("NO\n");
    }
    return 0;
}