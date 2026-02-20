/*
WAP: Get 'n' bits of a given number

--------------------------------------------
Concept Understanding:

We are given:
    - A number (num)
    - A value n

Goal:
    Extract the lower 'n' bits from the number.

--------------------------------------------
Binary Thinking:

Example:
    num = 29
    Binary = 11101

If n = 3
We want last 3 bits:

    11101
      101  → Result = 5

--------------------------------------------
Core Idea:

To get last n bits:
    1) Create a mask with n 1's.
    2) AND the number with the mask.

--------------------------------------------
How to Create Mask?

If n = 3

Mask should be:
    00000111  → (binary)
    Decimal = 7

Formula:
    mask = (1 << n) - 1

Why?

Step 1:
    1 << n
    If n = 3:
        1 << 3 = 00001000

Step 2:
    Subtract 1:
        00001000
      - 00000001
      = 00000111  → mask ready

--------------------------------------------
Final Operation:

result = num & mask

This keeps only the last n bits
and clears all higher bits.

--------------------------------------------
Algorithm:

1) Read number (num)
2) Read n
3) mask = (1 << n) - 1
4) result = num & mask
5) Print result

--------------------------------------------
Time Complexity:
O(1) → constant time

--------------------------------------------
Edge Case:

If n >= number of bits in int (e.g., 32),
mask becomes all 1s → result = num

--------------------------------------------
*/
#include <stdio.h>

int main() {
    int num;int bits;
    printf("Enter the number\n");
    scanf("%d",&num);
    printf("Enter the number of bits\n");
    scanf("%d",&bits);
    num=num&((1<<bits)-1);
    printf("The Number of  the selected bits is %d",num);
    return 0;
}
