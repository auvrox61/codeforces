#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<int>container;
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        container.push_back(x);
    }
    sort(container.begin(),container.end());
    int diff=INT_MAX;
    for(int i=0;i+n-1<m;i++){
        int min=container[i];
        int max=container[i+n-1];
        if(max-min<diff){
            diff=max-min;
        }
    }
    cout<<diff<<endl;
    return 0;
}