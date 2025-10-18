#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int p;
    cin>>p;
    int arr1[p];
    for(int i=0;i<p;i++){
        cin>>arr1[i];
    }
    int q;
    cin>>q;
    int arr2[q];
    for(int i=0;i<q;i++){
        cin>>arr2[i];
    }
    int passed[n+1]={0};
    for(int i=0;i<p;i++){
        if(arr1[i]>=1&&arr1[i]<=n){
            passed[arr1[i]]=1;
        }
    }
    for(int i=0;i<q;i++){
        if(arr2[i]>=1&&arr2[i]<=n){
            passed[arr2[i]]=1;
        }
    }
    for(int i=1;i<=n;i++){
        if(!passed[i]){
            cout<<"Oh, my keyboard!"<<endl;
            return 0;
        }
    }
    cout<<"I become the guy."<<endl;
    return 0;
}