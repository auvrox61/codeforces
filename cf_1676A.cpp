#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums;
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    for(int i=0;i<nums.size();i++){
        int a=nums[i]/1000;
        int b=nums[i]%1000;
        int sumA=0;
        int sumB=0;
        while(a>0){
            sumA+=(a%10);
            a/=10;
        }
        while(b>0){
            sumB+=(b%10);
            b/=10;
        }
        if(sumA==sumB){
            cout<<"YES"<<endl;
        } else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}