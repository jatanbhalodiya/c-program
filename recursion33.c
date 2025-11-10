#include <stdio.h>
int isAuto(int n) {
    int sq = n * n;
    while (n > 0) {
        if (n % 10 != sq % 10) return 0;
        n /= 10;
        sq /= 10;
    }
    return 1;
}
int main() {
    int n;
    scanf("%d", &n);
    if (isAuto(n)) printf("Automorphic");
    else printf("Not Automorphic");
    return 0;
}
