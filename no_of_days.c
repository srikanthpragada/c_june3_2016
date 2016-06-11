#include <stdio.h>

main()
{
  int month,year, nd;

  printf("Enter month and year : ");
  scanf("%d%d",&month,&year);

  if (month == 2)
  {
     if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        nd = 29;
     else
        nd = 28;
  }
  else
     if ( month == 4 || month == 6 || month == 9 || month == 11)
       nd =30;
     else
       nd = 31;

  printf("No. of days : %d",nd);

}
