#include <stdio.h>

main()
{
  int num, largest, i;


     largest = 0;

     for(i=1; i <= 5; i++)
     {

         printf("Enter a number : ");
         scanf("%d",&num);
         if (num > largest)
              largest = num;
     }

     printf("Largest number : %d", largest);

}
