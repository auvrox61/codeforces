#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int x=240;
    int sum=0;
    int count=0;
    for(int i=1;i<=n;i++){
        sum+=5*i;
        if(sum<=x-k){
            count++;
        } else{
            break;
        }
    }
    cout<<count<<endl;
    return 0;
}