#include <stdio.h>

int main() {
    char arr[] = "Hello"; // character array
    int i;

    printf("Characters and their addresses:\n");
    for (i = 0; arr[i] != '\0'; i++) {
        printf("arr[%d] = %c Address = %p\n", i, arr[i], &arr[i]);
    }

    return 0;

}
