/* These program is for dec to binary using array as of dec to hex conversion*/

//LOGIC

/* step1: As we know dec to binary is converted using number divide by 2 until o and take the remainder from botton to top.
   step2: we divide the number by 2 and store reaminder in the character array of 8byte ,i.e we only print the decimals of 8byte only i.e 0-255
   step3: Later we print the array from last to first format usnig loops
  
  NOTE : We only Convert the 8bits values i.e 1byte value here for 4byte or 32bits value we have to change the Size of charracter array using #define SIZE 32. 
  To print 1byte of int we need 8byte of character and to print 4byte of int we need 32byte of charcater array.
*/
#include <stdio.h>
#define SIZE 8
int main() {
   int num,rem;
   printf("Enter the number\n");
   scanf("%d",&num);
   char arr[SIZE]={0};
   int i=0;
   while(num)
   {
       rem=num%2;
           arr[i]=rem;
       i++;num=num/2;
   }
   printf("The Binary Number is \n");
   for(int i=SIZE-1;i>=0;i--)
   {
       printf("%d",arr[i]);
   }
    return 0;
}
