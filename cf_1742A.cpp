#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        vector<int>nums;
        int a,b,c;
        cin>>a>>b>>c;
        nums.push_back(a);
        nums.push_back(b);
        nums.push_back(c);
        int i=0;
        if(nums[i]+nums[i+2]==nums[i+1]||nums[i]-nums[i+2]==nums[i+1]||nums[i+2]-nums[i]==nums[i+1]){
            cout<<"YES"<<endl;
        } else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}