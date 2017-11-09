#include<stdio.h>

 int main()
 {
     int angle, ok=0;

     do
     {
         printf("angle(between 0 and 90)=");
         scanf ("%i", &angle);
         if(angle>=0 && angle <=90)
         {
             ok=1;
             printf("you have entered a correct value");}
             else
                printf("the value is out of range; input another \n");

     }while(ok==0);
 }

