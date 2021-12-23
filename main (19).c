/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
int main()
{
 int originalNum, num, lastDigit, digits, sum;
 printf("Enter any number to check Armstrong number: ");
 scanf("%d", &num);
 sum = 0;
 originalNum = num;
 digits = (int) log10(num) + 1;
 while(num > 0)
 {
 lastDigit = num % 10;
 sum = sum + round(pow(lastDigit, digits));
 num = num / 10;
 }
 if(originalNum == sum)
 {
 printf("%d is ARMSTRONG NUMBER", originalNum);
 }
 else
 {
 printf("%d is NOT ARMSTRONG NUMBER", originalNum);
 }
 return 0;
}
