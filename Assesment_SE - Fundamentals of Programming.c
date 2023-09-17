//Assessment
#include<stdio.h>

int main()

{

	int item,qty,rate,amt;
	char reorder;
	
	printf("1. Pizza     Price : 150/pcs\n");
	printf("2. Burger    Price : 90/pcs\n");
	printf("3. Dosa      Price : 60/pcs\n");
	printf("4. Idli      Price : 30/pcs\n");
	
	printf("\nEnter Your Choice : ");
	scanf("\n%d",&item);
	
	switch(item)
	{
		case 1:
				printf("\nYou Selected Pizza\n");
				printf("\nEnter Qty Of Pizza : ");
				scanf("%d", &qty);
				rate=150;
				printf("\nAmount : %d\n",rate);
				amt=qty*rate;
				printf("\nTotal Amount : %d",amt);
				break;
				
		case 2:
				printf("\nYou Selected Burger");
				printf("\nEnter Qty Of Burger:");
				scanf("%d", &qty);
				rate=90;
				printf("\nAmount : %d\n",rate);
				amt=qty*rate;
				printf("\nTotal Amount : %d",amt);
				break;
				
		case 3:
				printf("\nYou Selected Dosa");
				printf("\nEnter Qty Of Dosa:");
				scanf("%d", &qty);
				rate=60;
				printf("\nAmount : %d\n",rate);
				amt=qty*rate;
				printf("\nTotal Amount : %d",amt);
				break;
				
		case 4:
				printf("\nYou Selected Idli");
				printf("\nEnter Qty Of Idli:");
				scanf("%d", &qty);
				rate=30;
				printf("\nAmount : %d\n",rate);
				amt=qty*rate;
				printf("\nTotal Amount : %d",amt);
				break;
				
		default :
				printf("\nInvalid Choice");
				break;		
	}
	
	printf("Do You Want To Order Something? y or n");
	scanf("%c",&reorder);
	
	return 0;
}
