#include<bits/stdc++.h>
using namespace std;

int main(){
    string a,b,c;
    cin>>a>>b>>c;
    vector<char>container1;
    vector<char>container2;
    for(char ck:a){
        container1.push_back(ck);
    }
    for(char ch:b){
        container1.push_back(ch);
    }
    for(char cha:c){
        container2.push_back(cha);
    }
    if(container1.size()!=container2.size()){
        cout<<"No"<<endl;
    } else{
        map<char,int>freq1;
        map<char,int>freq2;
        for(char cm:container1){
            freq1[cm]++;
        }
        for(char cg:container2){
            freq2[cg]++;
        }
        if(freq1==freq2){
            cout<<"Yes"<<endl;
        } else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}