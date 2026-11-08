1. Problem Statement

The goal of this assignment is to write a C program that converts a decimal integer to another base from 2 to 16.

The program uses special characters instead of letters for values 10 to 15:

10 = !

11 = @

12 = #

13 = $

14 = %

15 = ^

For base 8, the output starts with 0. For base 16, the output starts with 0x.

The program also displays an error message if the base is less than 2 or greater than 16.

2. Describe the Solution

I created a function called to_base_n() that takes two arguments: a decimal number and a target base.

First, the program asks the user to enter a decimal integer and a base.

The function checks if the base is valid using an if statement.

I used a do-while loop to divide the number by the base and get the remainder using the % operator.

The remainders are stored in a character array. Then, a for loop prints the characters in reverse order to show the converted number.

Example outputs:

Decimal 30 to base 8: 036

Decimal 30 to base 16: 0x1%

Decimal 47 to base 16: 0x2^

3. Pros and Cons of My Solution

Pros:

The code is simple and easy to understand.

It supports bases from 2 to 16.

It uses loops and functions learned in Module 2.

It checks for invalid bases.

It uses the required special characters.

Cons:

It only supports non-negative integers.

It does not support decimal numbers such as 2.5.

It converts one number at a time.

It uses an extra array to store the converted digits.