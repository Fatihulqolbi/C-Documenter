#include <stdio.h>
#include <string.h>

#define DIGIT_MAKSIMUM 40

void add_large_numbers(char addend[], char accumulator[]) {
    int addend_arr[DIGIT_MAKSIMUM] = {0};
    int accumulator_arr[DIGIT_MAKSIMUM] = {0};
    int carry_arr[DIGIT_MAKSIMUM] = {0};
    int addend_len = strlen(addend);
    int accumulator_len = strlen(accumulator);

    // Convert input strings into integer arrays (reversed)
    for (int i = 0; i < addend_len; i++) {
        addend_arr[i] = addend[addend_len - 1 - i] - '0';
    }
    for (int i = 0; i < accumulator_len; i++) {
        accumulator_arr[i] = accumulator[accumulator_len - 1 - i] - '0';
    }

    // Addition logic with carry propagation
    for (int i = 0; i < DIGIT_MAKSIMUM; i++) {
        while (addend_arr[i] > 0) {
            addend_arr[i]--;
            accumulator_arr[i]++;
            
            if (accumulator_arr[i] == 10) {
                accumulator_arr[i] = 0;
                carry_arr[i]++;
            }
        }
    }

    // Display final results
    printf("Result: ");
    int started = 0;
    for (int i = DIGIT_MAKSIMUM - 1; i >= 0; i--) {
        if (accumulator_arr[i] != 0 || carry_arr[i] != 0 || started) {
            printf("%d", accumulator_arr[i] + carry_arr[i]);
            started = 1;
        }
    }
    if (!started) printf("0");
    printf("\n");
}

int main() {
    // Test cases
    char test_cases[6][2][DIGIT_MAKSIMUM] = {
        {"0", "0"},
        {"0", "1"},
        {"1", "0"},
        {"1", "2"},
        {"99", "1"},
        {"999999", "1"}
    };

    for (int i = 0; i < 6; i++) {
        printf("\nTest Case %d: %s + %s\n", i + 1, test_cases[i][0], test_cases[i][1]);
        add_large_numbers(test_cases[i][0], test_cases[i][1]);
    }

    return 0;
}
