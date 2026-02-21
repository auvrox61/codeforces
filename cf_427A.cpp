#include<bits/stdc++.h>
using namespace std;

int main(){
    int police=0;
    int crime=0;
    int n;
    cin>>n;
    vector<int>events;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        events.push_back(x);
        if(x!=-1){
            police+=x;
        } else{
            if(police>0){
                police--;
            } else{
                crime++;
            }
        }
    }
    cout<<crime<<endl;
    return 0;
}