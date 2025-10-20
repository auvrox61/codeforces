#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int max=INT32_MIN;
    int sum1=a+(b*c);
    int sum2=a*(b+c);
    int sum3=a*b*c;
    int sum4=(a+b)*c;
    int sum5=a+b+c;
    int sum6=(a*b)+c;
    if(sum1>max){
        max=sum1;
    } if(sum2>max){
        max=sum2;
    } if(sum3>max){
        max=sum3;
    } if(sum4>max){
        max=sum4;
    } if(sum5>max){
        max=sum5;
    } if(sum6>max){
        max=sum6;
    }
    cout<<max<<endl;
    return 0;
}