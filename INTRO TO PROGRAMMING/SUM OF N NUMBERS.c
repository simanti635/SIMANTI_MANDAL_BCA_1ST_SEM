#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum =sum+i;
    }

    printf("THE SUM OF NUMBER BEFORE %d is: %d\n", n, sum);

    return 0;
}
