#include <stdio.h>
#

int main() {
    int num, originalNum, remainder, n;
    float result;

    printf("Armstrong numbers between 1 and 1000 are:\n");

    for (num = 1; num <= 1000; num++) {
        originalNum = num;
        n = 0;
        result = 0.0;

        // Count the number of digits
        int temp = originalNum;
        while (temp != 0) {
            temp /= 10;
            ++n;
        }

        temp = originalNum;

        // Calculate the sum of nth powers of its digits
        while (temp != 0) {
            remainder = temp % 10;
            result += pow(remainder, n);
            temp /= 10;
        }

        if ((int)result == num) {
            printf("%d\n", num);
        }
    }
}

