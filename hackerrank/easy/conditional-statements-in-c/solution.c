#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    const char *names[] = {"", "one", "two", "three", "four",
                           "five", "six", "seven", "eight", "nine"};

    if (n >= 1 && n <= 9) {
        printf("%s", names[n]);
    } else {
        printf("Greater than 9");
    }

    return 0;
}
