#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>points;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        points.push_back(x);
    }
    int min=points[0];
    int max=points[0];
    int amazingPerfs=0;
    for(int i=1;i<points.size();i++){
        if(points[i]>max){
            max=points[i];
            amazingPerfs++;
        } else if(points[i]<min){
            min=points[i];
            amazingPerfs++;
        }
    }
    cout<<amazingPerfs<<endl;
    return 0;
}