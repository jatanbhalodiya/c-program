#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200];
    int i, a=0, e=0, i_v=0, o=0, u=0;

    printf("Enter a string: ");
    gets(str);
    for(i = 0; str[i] != '\0'; i++) {
        switch(tolower(str[i])) {
            case 'a': a++; break;
            case 'e': e++; break;
            case 'i': i_v++; break;
            case 'o': o++; break;
            case 'u': u++; break;
        }
    }

    printf("Vowel frequencies:\n");
    printf("A: %d\nE: %d\nI: %d\nO: %d\nU: %d\n", a, e, i_v, o, u);
    return 0;
}
