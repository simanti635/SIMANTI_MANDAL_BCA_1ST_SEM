#include <stdio.h>
#include <math.h>

int main() {
    int num;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is a perfect square
    int sqr = sqrt(num);
    if (sqr * sqr== num) {
        printf("%d is a perfect square.\n", num);
    } else {
        printf("%d is not a perfect square.\n", num);
    }

    return 0;
}

