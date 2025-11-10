#include <stdio.h>
float sum(float a[], int n) {
    if (n == 0) return 0;
    return a[n - 1] + sum(a, n - 1);
}
int main() {
    int n; scanf("%d", &n);
    float a[n];
    for (int i = 0; i < n; i++) scanf("%f", &a[i]);
    float s = sum(a, n);
    printf("Sum=%.2f Mean=%.2f", s, s / n);
    return 0;
}
