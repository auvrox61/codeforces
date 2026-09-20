#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n;
    int arr[n];
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<=n;j++){
                if(j-arr[j]==i-arr[i]){
                    swap(arr[i],arr[j]);
                } 
            }
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" "<<endl;
        }
    }
    return 0;
}