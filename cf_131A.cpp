#include<bits/stdc++.h>
using namespace std;

int main(){
    string word;
    cin >> word;

    vector<char> letters;
    for(int i = 0; i < word.length(); i++){
        letters.push_back(word[i]);
    }

    for(int i = 1; i < letters.size(); i++){
        if(islower(letters[i])){
            for(char c : letters){
                cout << c;
            }
            return 0;
        }
    }

    for(int i = 0; i < letters.size(); i++){
        if(isupper(letters[i])){
            letters[i] = tolower(letters[i]);
        } else {
            letters[i] = toupper(letters[i]);
        }
    }

    for(char c : letters){
        cout << c;
    }

    return 0;
}
