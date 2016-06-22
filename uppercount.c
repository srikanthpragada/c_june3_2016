#include <stdio.h>
#include <ctype.h>

main()
{
  int i, count=0;
  char ch;

   for(i=1; i <=5; i ++)
   {
      ch = getch();
      if(isupper(ch))
          putch(tolower(ch));
      else
        if (islower(ch))
           putch(toupper(ch));
        else
           putch(ch);
   }
}
