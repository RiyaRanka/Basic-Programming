#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, j, len, count;
    printf("Enter a string: ");
    scanf("%s", str);
    len = strlen(str);
    for (i = 0; i < len; i++) {
        count = 0;
        for (j = 0; j < len; j++) {
            if (str[i] == str[j]) {
                count++;
            }
        }
        if (count == 1) {
            printf("The first non-repeating character in the string is '%c'", str[i]);
            return 0;
        }
    }
    printf("There are no non-repeating characters in the string.");
    return 0;
}
