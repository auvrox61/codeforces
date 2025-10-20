#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin>>n;
    string str[n];
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        if(str[i]=="Tetrahedron"){
            sum+=4;
        } else if(str[i]=="Cube"){
            sum+=6;
        } else if(str[i]=="Octahedron"){
            sum+=8;
        } else if(str[i]=="Dodecahedron"){
            sum+=12;
        } else if(str[i]=="Icosahedron"){
            sum+=20;
        }
    }
    cout<<sum<<endl;
    return 0;
}