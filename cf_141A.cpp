#include<bits/stdc++.h>
using namespace std;

void checkValidity(string a,string b,string c){
    int aLen=a.size();
    int bLen=b.size();
    int cLen=c.size();
    if(cLen!=aLen+bLen){
        cout<<"NO"<<endl;
        return;
    }
    vector<int>freqA(26,0);
    vector<int>freqB(26,0);
    vector<int>freqC(26,0);
    for(int i=0;i<aLen;i++){
        char cha=a[i];
        freqA[cha-'A']++;
    }
    for(int i=0;i<bLen;i++){
        char cha=b[i];
        freqB[cha-'A']++;
    }
    for(int i=0;i<cLen;i++){
        char cha=c[i];
        freqC[cha-'A']++;
    }
    bool allFreqPassed=true;
    for(int i=0;i<26;i++){
        if(freqC[i]!=freqA[i]+freqB[i]){
            allFreqPassed=false;
            break;
        }
    }
    if(allFreqPassed){
        cout<<"YES"<<endl;
    } else{
        cout<<"NO"<<endl;
    }
}

int main(){
    string guestName;
    string hostName;
    string piledName;
    cin>>guestName>>hostName>>piledName;
    checkValidity(guestName,hostName,piledName);
    return 0;
}