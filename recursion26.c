#include <stdio.h>
int cubeSum(int n) {
    if (n == 0) return 0;
    int d = n % 10;
    return d * d * d + cubeSum(n / 10);
}
int main() {
    int n;
    scanf("%d", &n);
    if (n == cubeSum(n)) printf("Armstrong");
    else printf("Not Armstrong");
    return 0;
}
