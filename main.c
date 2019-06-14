#include <stdio.h>
#include <stdlib.h>
// DICKY IBROHIM
// SOAL PROCEDURE PILIHAN
/*If choose 1,
	1. Message Deposit	--> Your deposit Rp 100.000,-
	2. Reguler Diposit	--> Your deposit 323 message
	3. Internet Deposit	--> Your deposit 1.35 GB
	4. Back to Main Menu

	If choose 2,
	1. handphone	 --> Get 100 handphone
	2. Car			--> Get 3 Car
	3. Back to Main Menu

	If choose 3,
	1. Buy coupon		--> You bought coupon
	2. Back to Main Menu
	*/

//PROCEDURE MENU

void menu ()
{int menusub;
system ("cls");
    printf("Main Menu : \n");
    printf("1. Check Deposit\n");
    printf("2. End of Year Promo\n");
    printf("3. Coupon\n");
    printf("4. Exit\n");
    printf ("Input Your Choose: "); scanf ("%d",&menusub);
    choose (menusub);
}

void menuutama ()
{   printf("----------------- Main Menu -----------------\n");
    printf("Main Menu : \n");
    printf("1. Check Deposit\n");
    printf("2. End of Year Promo\n");
    printf("3. Coupon\n");
    printf("4. Exit\n");
    printf("------------------ End Menu -----------------\n");
}
//PROCEDURE EXIT
void exitmenu ()
{
    return 0;
}
// SWITCH
void choose (int input_choose)
{ int choose;
    switch (input_choose)
    {
    case 1:
      printf("1. Message Deposit\n");
      printf("2. Reguler Diposit\n");
      printf("3. Internet Deposit\n");
      printf("3. Coupon\n");
      printf("4. Back to Main Menu\n");
      printf ("Input Your choose= "); scanf ("%d",&choose);
      if (choose==1)
      {
            printf("Your deposit Rp 100.000,-\n");
      }
      else if (choose==2)
      {
            printf("Your deposit 323 message\n");
      }
       else if (choose==3)
      {
            printf("Your deposit 1.35 GB\n");
      }
       else if (choose==4)
      {
            printf("--------------- New Session ---------------\n");
            menu ();
      }
      else
      {
          printf("There is not choose\n");
      }
      break;

      //PILIHAN2
      case 2:
      printf("1. handphone\n");
      printf("2. Car\n");
      printf("3. Back to Main Menu\n");
      printf ("Input Your choose= "); scanf ("%d",&choose);
      if (choose==1)
      {
            printf("Get 100 handphone\n");
      }
      else if (choose==2)
      {
            printf("Get 3 Car\n");
      }
       else if (choose==3)
      {
           printf("--------------- New Session ---------------\n");
           menu ();
      }
      else
      {
          printf("There is not choose\n");
      }
      break;

      //PILIHAN3
      case 3:
      printf("1. Buy coupon\n");
      printf("2. Back to Main Menu\n");
      printf ("Input Your choose= "); scanf ("%d",&choose);
      if (choose==1)
      {
            printf("You bought coupon\n");
      }
      else if (choose==2)
      {
           printf("--------------- New Session ---------------\n");
           menu ();
      }
      else
      {
          printf("There is not choose\n");
      }
      break;
    }
}

int main()
{
    int inputmain;
     menuutama ();
    printf ("Input Your Choose: "); scanf ("%d",&inputmain);
    choose (inputmain);

    return 0;
}
