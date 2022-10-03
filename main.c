#include <stdio.h>

int main() {
    char* arr[3] = {"test", "foo", "bar"};
    for (int i = 0; i < 3; i++) {
        printf("%s \n", arr[i]);
    }
    return 0;
}


