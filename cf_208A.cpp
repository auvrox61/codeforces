#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    string word;
    for (int i = 0; i < s.size(); ) {
        if (s.substr(i, 3) == "WUB") {
            if (!word.empty()) cout << word << " ", word.clear();
            i += 3;
        } else {
            word += s[i];
            i++;
        }
    }
    cout << word;
    return 0;
}
