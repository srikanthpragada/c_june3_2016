#include <stdio.h>

main()
{
  int nums[5];
  int i, num;

   i = 0;
   while(1)
   {
       printf("Enter a number :");
       scanf("%d",&num);
       if ( num > 0)
       {
           nums[i] = num;
           if(i == 4)
              break;

           i++;
       }
   }

   for(i=0; i < 5; i ++)
    printf("\n%d",nums[i]);



}
