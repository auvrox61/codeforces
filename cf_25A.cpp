#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int even=0;
    int odd=0;
    int evens[n]={0};
    int odds[n]={0};
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            evens[i]=1;
            even++;
        } else{
            odds[i]=1;
            odd++;
        }
    }
    for(int i=0;i<n;i++){
        if(even==1){
            if(evens[i]==1){
                cout<<i+1<<endl;
            }
        }
        else if(odd==1){
            if(odds[i]==1){
                cout<<i+1<<endl;
            }
        }
    }
    return 0;
}