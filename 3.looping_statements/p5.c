//Wap to print factorial of given number


#include <stdio.h>

void main()
{
  int i, f = 1, num;  

  printf("Input the number : ");  
  scanf("%d", &num);  

  for(i = 1; i <= num; i++)  
      f = f * i; 

  printf("\n The Factorial of %d is: %d\n", num, f);  
}