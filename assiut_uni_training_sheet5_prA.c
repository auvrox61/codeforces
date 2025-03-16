#include<stdio.h>

int sum(int X,int Y){
    return X+Y;
}

int main(){
    int X,Y;
    scanf("%d %d",&X,&Y);
    int result=sum(X,Y);
    printf("%d",result);
    return 0;
}