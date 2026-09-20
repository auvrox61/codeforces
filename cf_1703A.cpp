#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<string>st;
    for(int i=0;i<n;i++){
        string x;
        cin>>x;
        for(char &c:x){
            c=tolower(c);
        }
        st.push_back(x);
        if(x=="yes"){
            cout<<"YES"<<endl;
        } else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}