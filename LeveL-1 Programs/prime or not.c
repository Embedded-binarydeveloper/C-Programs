/*
Prime Number Logic:

1. A number n is prime if:
   - n > 1
   - It has no divisors other than 1 and itself.

2. Optimization:
   - No need to check divisibility from 2 to n-1.
   - If n has a factor, one of them must be <= sqrt(n).
   - So we check from 2 to sqrt(n) only.

3. Special Cases:
   - If n <= 1 → Not prime.
   - 2 is prime.
   - Even numbers > 2 are not prime.

4. Algorithm:
   - If n <= 1 → return not prime
   - If n == 2 → return prime
   - If n % 2 == 0 → return not prime
   - Loop from i = 3 to sqrt(n), step 2:
         If n % i == 0 → not prime
   - If no divisor found → prime

Time Complexity: O(sqrt(n))
*/
#include <stdio.h>

int main() {
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    int i=2;
    while(i<=num-1)
    {
        if(num%i==0)
        {
            break;
        }
        else
        i++;
    }
    if(num==i)
    {
        printf("%d is prime number",num);
    }
    else
    {
        printf("%d is NOT prime number",num);
    }
    return 0;
}
