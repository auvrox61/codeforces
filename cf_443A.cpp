#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    int found[26]={0};
    int count=0;
    for(int i=0;i<str.length();i++){
        if(str[i]>='a'&&str[i]<='z'){
            found[str[i]-'a']=1;
        }
    }
    for(int i=0;i<26;i++){
        if(found[i]){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}