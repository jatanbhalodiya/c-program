#include <stdio.h>
float sum(float a[], int n) {
    if (n == 0) return 0;
    return a[n - 1] + sum(a, n - 1);
}
int main() {
    float a[10];
    for (int i = 0; i < 10; i++) scanf("%f", &a[i]);
    float s = sum(a, 10);
    printf("Sum=%.2f Mean=%.2f", s, s / 10);
    return 0;
}
