#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[100]; 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int reqMon=(sum/2)+1; 
    
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]<arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    
    int currMon=0;
    int min_count=0; 
    for(int i=0;i<n;i++){
        currMon+=arr[i];
        min_count++;
        if(currMon>sum-currMon){
            break;
        }
    }
    
    cout<<min_count<<endl;
    return 0;
}