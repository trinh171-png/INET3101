
#include <stdio.h>

// Function to convert a decimal number to another base
void to_base_n(unsigned int number, int base)
{
    // Custom characters for base 2 to 16
    char digits[] = "0123456789!@#$%^";

    // Check if the base is valid
    if (base < 2 || base > 16)
    {
        printf("Error: Base must be between 2 and 16.\n");
        return;
    }

    // Add prefix for octal and hexadecimal
    if (base == 8)
    {
        printf("0");
    }
    else if (base == 16)
    {
        printf("0x");
    }

    // Store the converted digits
    char result[50];
    int i = 0;

    // Convert the number using division and remainder
    do
    {
        int remainder = number % base;
        result[i] = digits[remainder];
        number = number / base;
        i++;
    }
    while (number > 0);

    // Print the digits in reverse order
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%c", result[j]);
    }

    printf("\n");
}

int main(void)
{
    unsigned int number;
    int base;

    // Get the decimal number
    printf("Enter a decimal number: ");
    scanf("%u", &number);

    // Get the target base
    printf("Enter a base (2-16): ");
    scanf("%d", &base);

    // Convert and print the result
    to_base_n(number, base);

    return 0;
}



