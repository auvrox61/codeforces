#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums;
    for(int i=0;i<3;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    sort(nums.begin(),nums.end());
    int sum=0;
    sum+=nums.at(1)-nums.at(0);
    sum+=nums.at(2)-nums.at(1);
    cout<<sum<<endl;
    return 0;
}