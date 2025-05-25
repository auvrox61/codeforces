#include<stdio.h>

void oddDiv(long long int arr[], long long int t) {
    for(long long int i = 0; i < t; i++) {
        long long int n = arr[i];
        while(n % 2 == 0) {
            n /= 2;
        }
        if(n > 1) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
}

int main() {
    long long int t;
    scanf("%lld", &t);
    long long int arr[t];
    for(long long int i = 0; i < t; i++) {
        scanf("%lld", &arr[i]);
    }
    oddDiv(arr, t);
    return 0;
}
