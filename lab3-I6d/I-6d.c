#include<stdio.h>

int main()
{
      int i,j;
      for (i = 1; i <= 40; i += 15)
        for (j = 1; j <= i; j++)
           printf ("*");

      return 0; //48*
}
//pt i=1 => 1 *
// pt i=16 => 16 *
// pt i=31 => 31*

