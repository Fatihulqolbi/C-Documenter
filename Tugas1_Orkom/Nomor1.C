#include <stdio.h>

void single_digit_adder(int addend, int accumulator) {
    int carry = 0;
    printf("Initial State - Addend: %d, Accumulator: %d, Carry: %d\n", addend, accumulator, carry);
    
    while (1) {
        if (addend == 0) {
            printf("Final State - Addend: %d, Accumulator: %d, Carry: %d\n", addend, accumulator, carry);
            break;
        }
        addend -= 1;
        accumulator += 1;

        // Check if accumulator overflows from 9 to 0
        if (accumulator == 10) {
            accumulator = 0;
            carry += 1;
        }

        printf("Cycle - Addend: %d, Accumulator: %d, Carry: %d\n", addend, accumulator, carry);
    }
}

int main() {
    // Test cases
    int test_cases[7][2] = {
        {0, 0},
        {0, 1},
        {1, 0},
        {1, 2},
        {5, 5},
        {9, 1},
        {9, 9}
    };

    for (int i = 0; i < 7; i++) {
        printf("\nTest Case %d: %d + %d\n", i + 1, test_cases[i][0], test_cases[i][1]);
        single_digit_adder(test_cases[i][0], test_cases[i][1]);
    }

    return 0;
}
