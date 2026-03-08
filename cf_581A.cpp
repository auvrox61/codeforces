#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int diffColSockDays=0;
    int sameColSockDays=0;
    while(a!=0&&b!=0){
        a--;
        b--;
        diffColSockDays++;
    }
    if(a>0){
        sameColSockDays+=a/2;
    } else{
        sameColSockDays+=b/2;
    }
    cout<<diffColSockDays<<" "<<sameColSockDays<<endl;
    return 0;
}