#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int count1 = 0, count2 = 0, count3 = 0, count4 = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] == 1) count1++;
        else if(arr[i] == 2) count2++;
        else if(arr[i] == 3) count3++;
        else if(arr[i] == 4) count4++;
    }

    int taxis = 0;

    taxis += count4;

    if(count3 <= count1){
        taxis += count3;
        count1 -= count3;
    } else {
        taxis += count3;
        count1 = 0;
    }

    taxis += count2 / 2;
    count2 = count2 % 2; 

    if(count2 == 1){
        taxis++;
        count1 -= min(2, count1);
    }

    if(count1 > 0){
        taxis += (count1 + 3) / 4;
    }

    cout << taxis << endl;
    return 0;
}
