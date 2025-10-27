#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxPos = 0, minPos = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > arr[maxPos]) maxPos = i;     
        if (arr[i] <= arr[minPos]) minPos = i;      
    }

    int swaps = maxPos + (n - 1 - minPos);

    if (minPos < maxPos) swaps--;

    cout << swaps << endl;

    return 0;
}
