#include <stdio.h>

main()
{
   float price, qty, amount, discount, netamount;

   printf("Enter Quantity : ");
   scanf("%f", &qty);

   printf("Enter Price    : ");
   scanf("%f", &price);

   amount = qty * price;

   if (qty > 5)
      discount = amount * 0.2;
   else
      discount = amount * 0.1;

   netamount = amount - discount;
   printf("Net amount : %f", netamount);


}
