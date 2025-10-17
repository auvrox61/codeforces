#include<iostream>
#include<cctype>
using namespace std;

int main(){
    int n;
    cin >> n;
    char arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        arr[i] = toupper(arr[i]);
    }

    if(n < 26){
        cout << "NO" << endl;
    } else {
        bool unique[26] = {0};
        for(int i = 0; i < n; i++){
            if(arr[i] >= 'A' && arr[i] <= 'Z'){
                unique[arr[i] - 'A'] = 1;
            }
        }

        for(int i = 0; i < 26; i++){
            if(!unique[i]){
                cout << "NO" << endl;
                return 0;
            }
        }
        cout << "YES" << endl;
    }

    return 0;
}
