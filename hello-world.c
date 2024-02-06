#include <stdio.h>

int main() {
    char name[5];
    printf("What is your name?\n");
    scanf("%s", name);
    printf("Hello %s!", name);
    return 0;
}
