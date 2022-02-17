#include<stdio.h>
main()
{
	printf("Pick an item: \nPizza\nPasta\nSandwich\nBurger\nFrench Fries\n");
	int choice=0;
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("Great, Your choice is Pasta");
			break;
		case 2:
			printf("Woah, Your Chose Pizza");
			break;
		case 3:
			printf("What, French fries, Nice");
			break;
		case 4:
			printf("Sandwich, Good choice");
			break;
		case 5:
			printf("Ohh you chose burger");
			break;
		default : printf("Invalid Choice");
    }
}
