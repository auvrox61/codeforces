#include<iostream>
using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    char arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int j=0;j<t;j++){
        for(int i=1;i<n;i++){
            if(arr[i-1]=='B'&&arr[i]=='G'){
                arr[i-1]='G';
                arr[i]='B';
                i++;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}