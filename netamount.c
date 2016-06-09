 // Calculate net amount
 #include <stdio.h>

 main()
 {
     int amount, tax, netamount;

       printf("Enter amount :");
       scanf("%d",&amount);

       // calculate tax @ 15%
       tax = amount * 15 / 100;

       netamount = amount + tax;

       printf("Amount    : %6d\n",amount);
       printf("(+) Tax   : %6d\n",tax);
       printf("            ------\n");
       printf("Net Amount: %6d\n",netamount);

 }
