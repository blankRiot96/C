/* Fibonacci series
0, 1, 1, 2, 3, 5, 8... 
Next num = sum of previous two num*/
#include <stdio.h>

int main() {
    int a = 0;
    int b = 1;

    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("0, 1");
    for (int i = 0; i < n - 2; i++) {
        int c = a + b; 
        a = b;
        b = c;

        printf(", %d", c);
    }
    return 0;
}
