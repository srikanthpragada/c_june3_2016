#include <stdio.h>

main()
{
  int nums[10];
  int i, num;

   srand( time(0));
   for(i=0; i < 10; i ++)
   {
       nums[i] = rand() % 15;
       printf("%d\t", nums[i]);
   }

   printf("\nEnter a number :");
   scanf("%d",&num);

   int count = 0;

   for(i=0; i < 10; i ++)
   {
     if (nums[i] == num)
         count++;
   }

   if( count == 0 )
       printf("\nNot found\n");
   else
       printf("\nFound %d times\n", count);



}
