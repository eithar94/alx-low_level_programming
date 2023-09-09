#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
     int x, y;

     srand(time(0));
     x = rand();

      /* Our own code will go here */

     y = x % 10;
     printf("The last digit of the number 98 is 8 \n");


      return (0);
}

