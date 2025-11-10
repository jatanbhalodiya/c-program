#include <stdio.h>
void div5(int n) {
    if (n > 100) return;
    if (n % 5 == 0) printf("%d ", n);
    div5(n + 1);
}
int main() {
    div5(1);
    return 0;
}
