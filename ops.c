//Author: Emmanuel Akinrintoyo
//Date: 26/09/2018

 #include <stdio.h>
 int main(void) {
 printf("5 + 4 = %d\n", 5 + 4); //Addition
 printf("5 - 4 = %d\n", 5 - 4); //Sub
 printf("5 * 4 = %d\n", 5 * 4); //Mulitply
 printf("(float)5 / (float)4 = %f\n",(float)5 / (float)4);
 printf("5 / 4 = %d\n",5 / 4);
 printf("5 % 4 = %d\n",5 % 4);//MODULO	
 printf("5 & 4 = %d\n",5 & 4);//BITWISE AND
 printf("5 | 4 = %d\n",5 | 4);//BITWISE OR
 printf("5 ^ 4 = %d\n",5 ^ 4);//BITWISE XOR
 printf("~5 = (hex) %x\n", ~5);//BITWISE COMPLEMENT OR BITWISE NOT
 
 printf("Quiz1 %d\n", 0x1389 & 0x2821);
 printf("Quiz2 %d\n", ~0x8378);
printf("Quiz3 %d\n", 1234 | 5678);
printf("Quiz4 %d\n", 0xa5a5 ^ 0xffff);
printf("Quiz5 %d\n", 128 % 11);


}
