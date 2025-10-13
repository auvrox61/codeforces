#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n,k;
    while(t--){
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int swapped=0;
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                swapped=1;
                break;
            }
        }
        if(k>1){
            cout<<"YES"<<endl;
        } else{
            if(swapped==0){
                cout<<"YES"<<endl;
            } else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}