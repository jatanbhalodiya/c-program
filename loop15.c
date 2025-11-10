#include <stdio.h>

int main() {
    int n, i;
    float num, sum = 0, mean;

    printf("Enter number of values: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("Enter value %d: ", i);
        scanf("%f", &num);
        sum += num;
    }

    mean = sum / n;

    printf("\nSum = %.2f", sum);
    printf("\nMean = %.2f\n", mean);

    return 0;
}

