#include <stdio.h>
#include <string.h>

int main() {
    char str[210];
    scanf("%s", str);
    int len = strlen(str);

    for (int i = 0; i < len; ) {
        if (str[i] == '.') {
            printf("0");
            i++;
        } else if (str[i] == '-' && str[i+1] == '.') {
            printf("1");
            i += 2;
        } else if (str[i] == '-' && str[i+1] == '-') {
            printf("2");
            i += 2;
        }
    }

    printf("\n");
    return 0;
}
