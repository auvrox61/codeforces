#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        bool found=false;
        int n,k;
        cin>>n>>k;
        vector<int>nums;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            nums.push_back(x);
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==k){
                found=true;
                cout<<"YES"<<endl;
                break;
            }
        }
        if(!found){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}