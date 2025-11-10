#include <stdio.h>
int isPrime(int n, int i) {
    if (i == 1) return 1;
    if (n % i == 0) return 0;
    return isPrime(n, i - 1);
}
int main() {
    int n;
    scanf("%d", &n);
    if (n > 1 && isPrime(n, n / 2)) printf("Prime");
    else printf("Not Prime");
    return 0;
}
