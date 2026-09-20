#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int prev,current;
    int count=0;
    for(int i=0;i<2*n;i++){
        scanf("%d",&prev);
        scanf("%d",&current);
        if(prev!=current){
            count++;
        } 
    }
    printf("%d\n",count);
    return 0;
}