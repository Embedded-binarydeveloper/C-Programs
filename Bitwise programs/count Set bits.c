/*
WAP: Count number of set bits in a given number and print its parity.

--------------------------------------------
Concept:

1) Set Bit:
   A set bit is a bit that is equal to 1 in the binary representation.

   Example:
   n = 13
   Binary = 1101
   Number of set bits = 3

2) Parity:
   Parity tells whether the count of set bits is even or odd.

   - Even parity  → if number of 1s is even
   - Odd parity   → if number of 1s is odd

   Example:
   13 → 1101 → 3 set bits → Odd parity
   10 → 1010 → 2 set bits → Even parity

--------------------------------------------
Logic (Method 1: Simple Bit Checking)

Step 1:
   Initialize count = 0

Step 2:
   While n is not zero:
       Check LSB using (n & 1)
       If (n & 1) == 1 → increment count
       Right shift n by 1 (n = n >> 1)

Step 3:
   After loop, count contains total set bits.

Step 4:
   If count % 2 == 0 → Even parity
   Else → Odd parity

Time Complexity: O(number of bits) → O(32) for int

--------------------------------------------
Optimized Logic (Brian Kernighan’s Algorithm)

Key Idea:
   n & (n - 1) removes the lowest set bit.

Example:
   n = 12 (1100)
   n-1 = 11 (1011)
   n & (n-1) = 1000  → one set bit removed

Algorithm:
   While n != 0:
       n = n & (n - 1)
       count++

This runs only for number of set bits.
Time Complexity: O(number of set bits)
More efficient for sparse numbers.

--------------------------------------------
Parity Shortcut (Without Counting Fully)

Instead of storing full count:
   Keep toggling parity variable.

Example:
   parity = 0
   Every time we find a set bit:
       parity = parity ^ 1

If parity == 0 → Even
If parity == 1 → Odd

*/
#include <stdio.h>

int main() {
    int num,count=0;
    printf("Enter the number\n");
    scanf("%d",&num);
    int i=0;
    while(i<=31)
    {
        if(num&(1<<i))
        count++;
      /*
        While n != 0:
       n = n & (n - 1)
       count++
          */
        i++;
    }
    if(count%2==0)
    printf("The Number is Even Parity and the set bits is %d\n",count);
    else
    printf("The Number is Odd Parity and the set bits is %d\n",count);
    return 0;
}
