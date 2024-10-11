#include <stdio.h>
#include <string.h>

#define DIGIT_MAKSIMAL 40

void subtract_large_numbers(char minuend[], char subtrahend[]) {
    int minuend_arr[DIGIT_MAKSIMAL] = {0};
    int subtrahend_arr[DIGIT_MAKSIMAL] = {0};
    int borrow_arr[DIGIT_MAKSIMAL] = {0};
    int minuend_len = strlen(minuend);
    int subtrahend_len = strlen(subtrahend);

    for (int i = 0; i < minuend_len; i++) {
        minuend_arr[i] = minuend[minuend_len - 1 - i] - '0';
    }
    for (int i = 0; i < subtrahend_len; i++) {
        subtrahend_arr[i] = subtrahend[subtrahend_len - 1 - i] - '0';
    }

    for (int i = 0; i < DIGIT_MAKSIMAL; i++) {
        while (subtrahend_arr[i] > 0) {
            if (minuend_arr[i] == 0) {
                minuend_arr[i] = 9;
                borrow_arr[i]++;
                if (i < DIGIT_MAKSIMAL - 1) minuend_arr[i + 1]--;
            } else {
                minuend_arr[i]--;
            }
            subtrahend_arr[i]--;
        }
    }

    printf("Result: ");
    int started = 0;
    for (int i = DIGIT_MAKSIMAL - 1; i >= 0; i--) {
        if (minuend_arr[i] != 0 || borrow_arr[i] != 0 || started) {
            printf("%d", minuend_arr[i] + borrow_arr[i]);
            started = 1;
        }
    }
    if (!started) printf("0");
    printf("\n");
}

int main() {
    
    // Test cases
    char test_cases[4][2][DIGIT_MAKSIMAL] = {
        {"0", "0"},
        {"1", "0"},
        {"1000000", "1"},
        {"0", "1"}
    };

    for (int i = 0; i < 4; i++) {
        printf("\nTest Case %d: %s - %s\n", i + 1, test_cases[i][0], test_cases[i][1]);
        subtract_large_numbers(test_cases[i][0], test_cases[i][1]);
    }

    return 0;
}
