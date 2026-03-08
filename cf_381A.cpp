#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>cards;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        cards.push_back(x);
    }
    int serejaPoints=0;
    int dimaPoints=0;
    for(int i=0;i<cards.size();i++){
        for(int j=cards.size()-1;j>=0;j--){
            while(i<j){
                int larger=max(cards[i],cards[j]);
                serejaPoints+=larger;
                int smaller=min(cards[i],cards[j]);
                dimaPoints+=smaller;
            }
        }
    }
    cout<<serejaPoints<<" "<<dimaPoints<<endl;
    return 0;
}