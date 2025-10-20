#include<iostream>
using namespace std;

int main(){
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int count=0;
    int found[d+1]={0};
    for(int i=k;i<=d;i+=k){
        found[i]=1;
    } for(int i=l;i<=d;i+=l){
        found[i]=1;
    } for(int i=m;i<=d;i+=m){
        found[i]=1;
    } for(int i=n;i<=d;i+=n){
        found[i]=1;
    }
    for(int i=1;i<=d;i++){
        if(found[i]){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}

    