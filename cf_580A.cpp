#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=1;
    int count=1;
    for(int i=0;i<n-1;i++){
        if(arr[i]<=arr[i+1]){
            count++;
            if(count>max){
                max=count;
            }
        } else{
            count=1;
        }
    }
    cout<<max<<endl;
    return 0;
}