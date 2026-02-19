/* In these Program denotes the Decimal to hexa decimal conversion upto 2bytes i.e 2*8=16bits (0-65535) number */


                                    //LOGIC

/* 
  Step1:To get the dec to hexa we have to divide the number by hexa base i.e 16  until the n remainder become 0 and note remainder from bottom to top
  Step2:we only get the number diffrence by 0-15 only not about that i.e in binary also we get only base 2 fromat in remainder i.e 0 or 1 for hexadecimal also same only from 0-15
  step3:if the remainder is greater than or equal to 10 then i have to store in A,B,C____F format ,so we use char array 
  step4:We have to print the number from  botton to top.ie from last to first.

  NOTE:AS for Now we use only the store the number for 2bytes(16bits) to store for 4byte i.e for int range  we have to use SIZE as 8 in the array.Because each byte of array stores only 4bits (0000 -1111) not 1byte .
  to store 4byte of int we have use 8byte in char .(to store 1byte of int we use 2byte of char for 4byte of int=4*2=8byte)
*/
#include <stdio.h>

int main() {
   int num,rem;
   printf("Enter the number\n");
   scanf("%d",&num);
   char arr[4]={0};
   int i=0;
   while(num)
   {
       rem=num%16;
       if(rem>=10)
       {
           arr[i]=rem+55;// beacuse 10+55=65 i.e A
       }
       else
       {
           arr[i]=rem+48;
       }
       i++;num=num/16;
   }
   printf("The Hexa NUmber is \n");
   for(int i=3;i>=0;i--)
   {
       printf("%c",arr[i]);
   }
    return 0;
}
