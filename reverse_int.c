#include <stdio.h>

int getNum() {
    /* Get the number */
    printf("Enter a number: ");
    int num;
    scanf("%d", &num);
    return num;
}

int getNumberOfDigits(int num) {
    /* Get the number of digits that a number has */
    int digits = 0;
    while (num != 0) {
        num /= 10;
        digits++;
    }

    return digits;
}

int reverseNum(int num) {
    /* Return the reverse of a given number */
    int digits = getNumberOfDigits(num);
    int numPosition = 0;
    int reversedNum = 0;
    for (int i = digits; i > 0; i--) {
        // Get the current base number: 10, 100, 1000 etc. 
        int baseNum = 10 * (i - 1);
        // Now we get the number in its xth place: 300, 3000 etc.
        int zeroNum = num - baseNum;
        int digit = zeroNum / baseNum;

        /* Here, we finally add the reversed number by its reversed
         Zero number */
        reversedNum += digit * (10 * numPosition);

        // Update the current position we are iterating over
        numPosition++;
    }

    return reversedNum;
}


int main(void) {
    int num = getNum();
    int reversedNum = reverseNum(num);
    printf("%d %d\n", num, reversedNum);

    if (num == reversedNum){
        printf("The number is a palindrome");
    } else {
        printf("The number is not a palindrome");
    }
}
