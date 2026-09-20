#include<stdio.h>

void odd_1_out(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("%d\n",a^b^c);
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        odd_1_out();
    }
    return 0;
}