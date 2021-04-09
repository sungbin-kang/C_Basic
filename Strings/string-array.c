#include <stdio.h> // stdin, stdout
#include <string.h> // string

int main()
{
    char *history[100];

    printf("%lu\n", sizeof history/sizeof history[0]);
    // 100

    history[0] = "hello";
    printf("%s\n", history[0]);
    // hello
    printf("%lu\n", strlen(history[0]));
    // 5

    return 0;
}