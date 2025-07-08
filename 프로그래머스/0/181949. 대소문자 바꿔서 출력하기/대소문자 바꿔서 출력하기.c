#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define LEN_INPUT 10

int main(void) {
    char s1[LEN_INPUT];
    scanf("%s", s1);

    for (int i = 0; s1[i] != '\0'; i++) {
        if (isupper(s1[i])) {
            s1[i] = tolower(s1[i]);
        } else if (islower(s1[i])) {
            s1[i] = toupper(s1[i]);
        }
    }

    printf("%s\n", s1);
    return 0;
}
