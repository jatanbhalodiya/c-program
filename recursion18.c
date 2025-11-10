#include <stdio.h>
void count(char s[], int n, int *b, int *g) {
    if (n == 0) return;
    if (s[n - 1] == 'B' || s[n - 1] == 'b') (*b)++;
    else if (s[n - 1] == 'G' || s[n - 1] == 'g') (*g)++;
    count(s, n - 1, b, g);
}
int main() {
    char s[50];
    printf("Enter sex codes (B/G) for 50 students:\n");
    for (int i = 0; i < 50; i++) scanf(" %c", &s[i]);
    int b = 0, g = 0;
    count(s, 50, &b, &g);
    printf("Boys=%d Girls=%d", b, g);
    return 0;
}
