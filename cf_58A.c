#include<stdio.h>
#include<string.h>

void validChat(char str[],int len){
    int count=0;
    char cmp[]="hello";
    int j=0;
    for(int i=0;i<len&&j<5;i++){
        if(str[i]==cmp[j]){
            count++;
            j++;
        }
    }
    if(count==5){
        printf("YES\n");
    } else{
        printf("NO\n");
    }
}

int main(){
    char str[101];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    int len=strlen(str);
    validChat(str,len);
    return 0;
}