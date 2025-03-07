#include<stdio.h>
#include<string.h>

int main(){
    int n;
    int count=0;
    scanf("%d",&n);
    getchar();
    char str[n+1];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    for(int i=0;i<n-1;i++){
        if(str[i]==str[i+1]){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}