#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,r;
    cin>>k>>r;
    int shovelCount=0;
    for(int i=1;;i++){
        if((k*i)%10!=0&&(k*i)%10!=r){
            shovelCount++;
        } else{
            break;
        }
    }
    cout<<shovelCount+1<<endl;
    return 0;
}