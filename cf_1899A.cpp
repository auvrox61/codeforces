#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    vector<int>integers;
    for(int i=0;i<t;i++){
        int x;
        cin>>x;
        integers.push_back(x);
    }
    for(int k=0;k<integers.size();k++){
        if(integers[k]%3==0){
            cout<<"Second"<<endl;
        } else{
            cout<<"First"<<endl;
        }
    }
    return 0;
}