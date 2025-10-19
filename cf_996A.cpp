#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int rem=n;
    int step=0;
    while(rem!=0){
        if(rem>=100){
            rem-=100;
            step++;
        } else if(rem>=20&&rem<100){
            rem-=20;
            step++;
        } else if(rem>=10&&rem<20){
            rem-=10;
            step++;
        } else if(rem>=5&&rem<10){
            rem-=5;
            step++;
        } else if(rem>=1&&rem<5){
            rem-=1;
            step++;
        }
    }
    cout<<step<<endl;
    return 0;
}