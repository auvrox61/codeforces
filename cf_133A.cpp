#include<iostream>
#include<string>
using namespace std;

int main(){
    string n;
    cin>>n;
    int incl=0;
    for(int i=0;i<n.length();i++){
        if(n[i]=='H'||n[i]=='Q'||n[i]=='9'){
            incl=1;
            break;
        } else{
            incl=0;
        }
    }
    if(incl==1){
        cout<<"YES"<<endl;
    } else if(incl==0){
        cout<<"NO"<<endl;
    }
    return 0;
}