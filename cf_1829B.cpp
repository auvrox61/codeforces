#include <iostream>
using namespace std;

int blankSpace(int n, int arr[]) {
    int maxZero = 0;
    int curr = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            curr++;
            maxZero = max(maxZero, curr);
        } else {
            curr = 0;
        }
    }
    return maxZero;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        cout << blankSpace(n, arr) << endl;
    }

    return 0;
}
