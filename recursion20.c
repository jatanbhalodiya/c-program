#include <stdio.h>
int sum3(int n) {
    if (n > 100) return 0;
    if (n % 3 == 0) return n + sum3(n + 1);
    else return sum3(n + 1);
}
int main() {
    printf("Sum=%d", sum3(1));
    return 0;
}
