#include<bits/stdc++.h>
using namespace std;

int main(){
    int s,n;
    cin>>s>>n;
    vector<pair<int,int>>dragonFight;
    bool defeat=false;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        dragonFight.push_back({x,y});
        sort(dragonFight.begin(),dragonFight.end());
    }
    for(int i=0;i<n;i++){
        if(s>dragonFight[i].first){
            s+=dragonFight[i].second;
        } else{
            defeat=true;
            break;
        }
    }
    if(defeat){
        cout<<"NO"<<endl;
    } else{
        cout<<"YES"<<endl;
    }
    return 0;
}