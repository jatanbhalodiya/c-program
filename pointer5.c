#include <stdio.h>
#include <string.h>

int main() {
    char name[100], *words[20];
    int i = 0, count = 0;
    char *token;

    printf("Enter full name: ");
    gets(name);

    token = strtok(name, " ");
    while(token != NULL) {
        words[count++] = token;
        token = strtok(NULL, " ");
    }

    printf("Abbreviated name: ");
    for(i = 0; i < count - 1; i++)
        printf("%c. ", words[i][0]);
    printf("%s", words[count - 1]);

    return 0;
}
