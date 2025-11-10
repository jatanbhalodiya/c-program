#include <stdio.h>
void sep(int n) {
    if (n == 0) return;
    int d = n % 10;
    sep(n / 10);
    printf("%d ", d);
}
int main() {
    int n;
    scanf("%d", &n);
    sep(n);
    return 0;
}
