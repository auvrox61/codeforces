#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int entry,exit;
    int cr=0;
    int max=0;
    for(int i=0;i<n;i++){
        scanf("%d %d",&exit,&entry);
        cr-=exit;
        cr+=entry;
        if(cr>max){
            max=cr;
        }
    }
    printf("%d",max);
    return 0;
}