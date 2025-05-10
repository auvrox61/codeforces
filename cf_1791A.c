#include<stdio.h>
#include<string.h>

int main(){
    int t;
    scanf("%d",&t);
    char c;
    while(t--){
        scanf(" %c",&c);
        if(c=='c'||c=='o'||c=='d'||c=='e'||c=='f'||c=='r'||c=='s'){
            printf("YES\n");
        } else{
            printf("NO\n");
        }
    }
    return 0;
}