#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        
        int turn = 1;
        while (1) {
            if (turn) { 
                if (c > 0) {
                    if (b > 0) {
                        b--; 
                    } else {
                        printf("Gellyfish\n");
                        break;
                    }
                }
            } else { 
                if (d > 0) {
                    if (a > 0) {
                        a--; 
                    } else {
                        printf("Flower\n");
                        break;
                    }
                }
            }
            if (b <= 0) {
                printf("Gellyfish\n");
                break;
            } else if (a <= 0) {
                printf("Flower\n");
                break;
            }
            turn = 1 - turn;
        }
    }
    return 0;
}
