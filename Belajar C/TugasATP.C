#include <stdio.h>
#include <ctype.h>

int main() {
    char unit, SuhuAwal;
    float temp, convert;

    printf("\nSuhu dalam : (C) atau (F) atau (R) atau (K)?: ");
    scanf(" %c", &unit);

    unit = toupper(unit);

    printf("Convert to (C) or (F) or (R) or (K)?: ");
    scanf(" %c", &SuhuAwal);

    SuhuAwal = toupper(SuhuAwal);

    printf("Enter the temperature value: ");
    scanf("%f", &temp);

    if (unit == 'C') {
        if (SuhuAwal == 'F') {
            convert = (temp * 9 / 5) + 32;
        } else if (SuhuAwal == 'R') {
            convert = temp * 4 / 5;
        } else if (SuhuAwal == 'K') {
            convert = temp + 273;
        } else {
            printf("\nInvalid target unit.");
            return 1;
        }
    } else if (unit == 'F') {
        if (SuhuAwal == 'C') {
            convert = (temp - 32) * 5 / 9;
        } else if (SuhuAwal == 'R') {
            convert = (temp - 32) * 4 / 9;
        } else if (SuhuAwal == 'K') {
            convert = (temp - 32) * 5 / 9 + 273;
        } else {
            printf("\nInvalid target unit.");
            return 1;
        }
    } else if (unit == 'R') {
        if (SuhuAwal == 'C') {
            convert = temp * 5 / 4;
        } else if (SuhuAwal == 'F') {
            convert = temp * 9 / 4 + 32; 
        } else if (SuhuAwal == 'K') {
            convert = temp * 5 / 4 + 273;
        } else {
            printf("\nInvalid target unit.");
            return 1;
        }
    } else if (unit == 'K') {
        if (SuhuAwal == 'C') {
            convert = temp - 273;
        } else if (SuhuAwal == 'F') {
            convert = (temp - 273) * 9 / 5 + 32;
        } else if (SuhuAwal == 'R') {
            convert = (temp - 273) * 4 / 5;
        } else {
            printf("\nInvalid target unit.");
            return 1;
        }
    } else {
        printf("\nInvalid original unit.");
        return 1;
    }

    printf("\nThe converted temperature is: %.2f %c\n", convert, SuhuAwal);

    return 0;
}
