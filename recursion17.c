#include <stdio.h>
void count(int a[], int n, int *p, int *neg, int *z) {
    if (n == 0) return;
    if (a[n - 1] > 0) (*p)++;
    else if (a[n - 1] < 0) (*neg)++;
    else (*z)++;
    count(a, n - 1, p, neg, z);
}
int main() {
    int a[200], p = 0, neg = 0, z = 0;
    for (int i = 0; i < 200; i++) scanf("%d", &a[i]);
    count(a, 200, &p, &neg, &z);
    printf("+ve=%d -ve=%d zero=%d", p, neg, z);
    return 0;
}
