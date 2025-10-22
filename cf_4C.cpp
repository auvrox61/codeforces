#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

int main(){
    int n;
    cin>>n;
    unordered_map<string,int>db;
    while(n--){
        string word;
        cin>>word;
        db[word]++;
        if(db[word]==1){
            cout<<"OK"<<endl;
        } else if(db[word]>1){
            cout<<word<<db[word]-1<<endl;
        }
    }
    return 0;
}