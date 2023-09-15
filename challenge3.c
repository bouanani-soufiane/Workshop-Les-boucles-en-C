#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter un numbre: ");
    scanf("%d", &n);

    for (i = 3; i <= n; i++) {
        int check = 1;
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                check = 0;
                break;
            }
        }

        if (check) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
