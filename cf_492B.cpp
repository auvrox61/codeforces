#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,l;
    cin>>n>>l;
    vector<int>lantPos;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        lantPos.push_back(x);
    }
    int maxGap=0;
    sort(lantPos.begin(),lantPos.end());
    for(int i=0;i<lantPos.size()-1;i++){
        maxGap=max(maxGap,lantPos[i+1]-lantPos[i]);
    }
    double ans=(double)maxGap/2.0;
    ans=max(ans,(double)lantPos[0]);
    ans=max(ans,(double)(l-lantPos[n-1]));
    cout<<fixed<<setprecision(10)<<ans<<endl;
    return 0;
}