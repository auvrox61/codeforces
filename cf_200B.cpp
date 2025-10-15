#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    float avg;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        avg=(float(sum)/n);
    }
    cout<<avg<<endl;
    return 0;
}