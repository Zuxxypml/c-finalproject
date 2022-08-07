#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/** \brief
 *
 * C program for final project (Introduction to C program by TIMI);
 *
 */

int account(void);
int amazon(void);
int xBox(void);
int apple(void);

int viewShops(void);
int scanint(const char *const message);
static int balance;
char name[50];
int main(){
    int choice;
	printf("\t\t\t  ================================\n");
	printf("\t\t\t              C FINALPROJECT \n");
	printf("\t\t\t  ================================ \n");
	printf("%s \n", name);
	do {
   printf("Enter your name: \n");
   gets(name);
    } while (strlen(name) <= 4);
    do{
        balance = scanint("Enter your default balance\n");
        printf("Your initial balance is %i \n", balance);
     } while (balance == 0);
    do{
    printf("Press: \n\n");
	printf("1.) Display all shops. \n");
	printf("2.) Account. \n");
	printf("3.) Program guide manual. \n");
	printf("4.) Exit program \n");
	printf("\nChoice--> ");
	scanf("%d", &choice);
	     switch(choice){
        case 1 :  //add product
                viewShops();
                break;
        case 2:
            account();
            break;
        case 3:
            printf("Hello , %s \n Welcome to C Finalproject Guide \n To use the program simply type the numbers in parentheses\n aside to the right is a text of what each numbers do \n Thank you for using my program. \n\n", name);
            break;
        case 4:
            exit(0);
            break;
		 default :
                printf("Your choice is wrong please try again");
            break;
      };
  }while(choice!=8); // infinite loop until the user will choose number8 .
  printf("Thankyou for using this program\n");
  return 0;
}

//Account function
int account(void){
int choice;
	printf("\t\t\t  ================================\n");
	printf("\t\t\t              USER ACCOUNT \n");
	printf("\t\t\t  ================================ \n");
	printf("%s \n", name);
    do{
    printf("Press: \n\n");
	printf("1.) Add funds \n");
	printf("2.) Check balance. \n");
	printf("3.) Goto main menu \n");
	choice = scanint("\nChoice--> ");

     int amount;
	     switch(choice){
        case 1 :  // Deposit more balance

              amount = scanint("Amount to add: \n");
                balance = balance + amount;
                printf("Your new balance = %i\n", balance);
                amount = 0;
                break;
        case 2:
           printf("Your current balance is $%i \n\n", balance);
            break;
        case 3:
            return main;
            break;
		 default :
                printf("Your choice is wrong please try again");
            break;
      };
  }while(choice!=3); // infinite loop until the user will choose number8 .
  return main();
}
//Shops function
int viewShops(void){
int choice;
	printf("\t\t\t  ================================\n");
	printf("\t\t\t              SHOPS \n");
	printf("\t\t\t  ================================ \n");
	printf(" Hello ,%s Welcome to shops  \n", name);
    do{
    printf("Press: \n\n");
	printf("1.) Amazon \n");
	printf("2.) X-box \n");
	printf("3.) Apple \n");
	printf("4.) Goto  main menu \n");

	choice = scanint("Choice--> \n");
	     switch(choice){
        case 1 :  // Selected Amazon
                    amazon();
                break;
        case 2: // Selected X-Box
            xBox();
            break;
        case 3: //Selected Apple
            apple();
            break;
        case 4:
            return main;
            break;
		 default :
                printf("Your choice is wrong please try again \n");
            break;
      };
  }while(choice!=4); // infinite loop until the user will choose number8 .
  return main();
}
//Function to check if user didnt input an int
int scanint(const char *const message)
{
    int value;

    printf("%s > ", message);
    while (scanf("%d", &value) != 1)
    {
        int chr;
        do {
            chr = getchar();
        } while ((chr != EOF) && (chr != '\n'));
        printf("%s > ", message);
    }
    return value;
}


int amazon(void)
{
    static int totalCost;
    int i, choice, c = 1, a[9], cost[9];
    for (i = 0; i < 9; i++)
        a[i] = 0;

    char items[9][100] = { "Sandisk 16 GB",
    "Logitech Mouse",
    "Pendrve 16 GB",
    "Adidas",
    "Nike",
    "Leecooper",
    "Mi Note 3",
    "Nokia 3",
    "Samsung"
    };
    do {
        //C is 1 by default
        if (c == 1) {
            printf("Enter\n1 - Computer Accessories\n2 - Shoes\n3 - Mobiles\nAny other number to exit\n");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
            {
                int accessoriesChoice;
                printf("Enter\n1 - Sandisk 16 TB - $355\n2 - Logitech Mouse- $500\n3 - Pendrive 16 GB - $550\nAny other number to exit\n");
                scanf("%d", &accessoriesChoice);
                cost[0] = 355;
                cost[1] = 500;
                cost[2] = 550;
                switch (accessoriesChoice)
                {
                case 1:
                {
                    int num;
                    printf("You chose Sandisk 16TB with $355.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d", &num);
                    if (num == 1)
                    {
                        a[0]++;
                        totalCost += 355;
                    }
                    printf("Your Cost in Cart is %d\n", totalCost);
                    break;
                }
                case 2:
                {
                    int num;
                    printf("You chose Logitech Mouse with $500.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d", &num);
                    if (num == 1)
                    {
                        a[1]++;
                        totalCost += 500;
                    }
                    printf("Your Cost in Cart is %d\n", totalCost);
                    break;
                }
                case 3:
                {
                    int num;
                    printf("You chose Pendrive 16GB with $550.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d", &num);
                    if (num == 1)
                    {
                        a[2]++;
                        totalCost += 550;
                    }
                    printf("Your Cost in Cart is %d\n", totalCost);
                    break;
                }
                default: {
                    printf("Exit from Computer Accesories\n");
                    break;
                }
                }
                break;
            }
            case 2:
            {
                int shoesChoice;
                printf("Enter\n1 - Adidas - $3550\n2 - Nike - $5000\n3 - Leecooper - $2800\nAny other number to exit\n");
                scanf("%d", &shoesChoice);
                cost[3] = 3550;
                cost[4] = 5000;
                cost[5] = 2800;
                switch (shoesChoice)
                {
                case 1:
                {
                    int num;
                    printf("You chose Adidas Shoes for $3550.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d", &num);
                    if (num == 1)
                    {
                        a[3]++;
                        totalCost += 3550;
                    }
                    printf("Your Cost in Cart is %d\n", totalCost);
                    break;
                }
                case 2:
                {
                    int num;
                    printf("You chose Nike Shoes for $5000.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d", &num);
                    if (num == 1)
                    {
                        a[4]++;
                        totalCost += 5000;
                    }
                    printf("Your Cost in Cart is %d\n", totalCost);
                    break;
                }
                case 3:
                {
                    int num;
                    printf("You chose Leecooper Shoes for $2800.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d", &num);
                    if (num == 1)
                    {
                        a[5]++;
                        totalCost += 2800;
                    }
                    printf("Your Cost in Cart is %d\n", totalCost);
                    break;
                }
                default: {
                    printf("Exit from Shoes Category\n");
                    break;
                }
                }
                break;
            }
            case 3:
            {
                int mobileChoice;
                printf("Enter\n1 - Mi Note 3 -$11000\n2 - Nokia 3 - $9866\n3 - Samsung - $12800\nAny other number to exit\n");
                scanf("%d", &mobileChoice);
                cost[6] = 11000;
                cost[7] = 9866;
                cost[8] = 12800;
                switch (mobileChoice)
                {
                case 1:
                {
                    int num;
                    printf("You chose to buy Mi Note 3 for $11000.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d", &num);
                    if (num == 1)
                    {
                        a[6]++;
                        totalCost += 11000;
                    }
                    printf("Your Cost in Cart is %d\n", totalCost);
                    break;
                }
                case 2:
                {
                    int num;
                    printf("You chose to buy Nokia 3 for $9866.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d", &num);
                    if (num == 1)
                    {
                        a[7]++;
                        totalCost += 9866;
                    }
                    printf("Your Cost in Cart is %d\n", totalCost);
                    break;
                }
                case 3:
                {
                    int num;
                    printf("You chose to buy Samsung s22 for $12800.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d", &num);
                    if (num == 1)
                    {
                        a[8]++;
                        totalCost += 12800;
                    }
                    printf("Your Cost in Cart is %d\n", totalCost);
                    break;
                }
                default: {
                    printf("Exit from Mobile Category\n");
                    break;
                }
                }
                break;
            }
            default:
            {
                printf("Enter Valid Categories Choice\n");
                break;
            }
            }
            printf("%s's cart\n", name);
            printf("Id\tItems\t\t\tQuantity\t\t\tCost\n");
            for (i = 0; i < 9; i++)
            {
                if (a[i] != 0)
                {
                    printf("%d\t%s\t\t%d\t\t\t%d\n", i, items[i], a[i], (cost[i] * a[i]));
                }
            }
            printf("Total Cost\t\t\t\t\t%d\n", totalCost);
            printf("If you wish to buy anything more Enter\n1 to Add Item\n2 to Delete Items \nAny other number to Exit\n");
            scanf("%d", &c);
        }
        if (c == 2)
        {
            int id;
            printf("Enter id to delete item\n");
            scanf("%d", &id);
            if (id < 9 && id>0) {
                totalCost = totalCost - (cost[id] * a[id]);
                a[id] = 0;
            }
            else {
                printf("Enter Valid id\n");
            }
            printf("Revised Items \n");
            printf("Id\tItems\t\t\tQuantity\t\tCost\n");
            for (i = 0; i < 9; i++)
            {
                if (a[i] != 0)
                {
                    printf("%d\t%s\t\t%d\t\t%d\n", i, items[i], a[i], (cost[i] * a[i]));
                }
            }
            printf("Total Cost\t\t\t\t\t%d\n", totalCost);
            printf("If you wish to buy anything more Enter\n1 to Add Item\n2 to Delete Items \nAny other number to Exit\n");
            scanf("%d", &c);
        }

    } while (c == 1 || c == 2);
    int tax = totalCost * 0.13;
    totalCost = totalCost + tax;
    printf("Your Final Cost is %d\n", totalCost);
    if (balance > totalCost) {
        balance = balance - totalCost;
        printf("You now have %i in your account \n", balance);
    }
    else {
        printf("Insufficient fund to purchase item, goto main-menu to top-up your account.\n");
    }
    printf("Thanks %s for Choosing Us and Visit us again.\n", name);
}

//X-Box

int xBox(void)
{
    static int totalCost;
    int i, choice, c = 1, a[9], cost[9];
    for (i = 0; i < 9; i++)
        a[i] = 0;

    char items[9][100] = { "FIFA 2022",
    "GTA V",
    "NBA 2K 22",
    "X-box Series X",
    "X-box Series S",
    "X-box 360",
    "X-box stereo Headset",
    "X-box wireless controller",
    "X-box USB cable"
    };
    do {
        //C is 1 by default
        if (c == 1) {
            printf("Enter\n1 - X-box Games\n2 - X-box Consoles\n3 - X-box Accessories\nAny other number to exit\n");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
            {
                int accessoriesChoice;
                printf("Enter\n1 - FIFA 2022 - $355\n2 - GTA V - $500\n3 - NBA 2K 22 - $550\nAny other number to exit\n");
                scanf("%d", &accessoriesChoice);
                cost[0] = 355;
                cost[1] = 500;
                cost[2] = 550;
                switch (accessoriesChoice)
                {
                case 1:
                {
                    int num;
                    printf("You chose FIFA 2022 with $355.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d", &num);
                    if (num == 1)
                    {
                        a[0]++;
                        totalCost += 355;
                    }
                    printf("Your Cost in Cart is %d\n", totalCost);
                    break;
                }
                case 2:
                {
                    int num;
                    printf("You chose GTA V with $500.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d", &num);
                    if (num == 1)
                    {
                        a[1]++;
                        totalCost += 500;
                    }
                    printf("Your Cost in Cart is %d\n", totalCost);
                    break;
                }
                case 3:
                {
                    int num;
                    printf("You chose NBA 2K 22 with $550.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d", &num);
                    if (num == 1)
                    {
                        a[2]++;
                        totalCost += 550;
                    }
                    printf("Your Cost in Cart is %d\n", totalCost);
                    break;
                }
                default: {
                    printf("Exit from X-box Games\n");
                    break;
                }
                }
                break;
            }
            case 2:
            {
                int shoesChoice;
                printf("Enter\n1 - X-box Series X - $3550\n2 - X-box Series S - $5000\n3 - X-box 360 - $2800\nAny other number to exit\n");
                scanf("%d", &shoesChoice);
                cost[3] = 3550;
                cost[4] = 5000;
                cost[5] = 2800;
                switch (shoesChoice)
                {
                case 1:
                {
                    int num;
                    printf("You chose X-box Series X for $3550.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d", &num);
                    if (num == 1)
                    {
                        a[3]++;
                        totalCost += 3550;
                    }
                    printf("Your Cost in Cart is %d\n", totalCost);
                    break;
                }
                case 2:
                {
                    int num;
                    printf("You chose X-box Series S for $5000.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d", &num);
                    if (num == 1)
                    {
                        a[4]++;
                        totalCost += 5000;
                    }
                    printf("Your Cost in Cart is %d\n", totalCost);
                    break;
                }
                case 3:
                {
                    int num;
                    printf("You chose X-box 360 Shoes for $2800.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d", &num);
                    if (num == 1)
                    {
                        a[5]++;
                        totalCost += 2800;
                    }
                    printf("Your Cost in Cart is %d\n", totalCost);
                    break;
                }
                default: {
                    printf("Exit from X-box Consoles\n");
                    break;
                }
                }
                break;
            }
            case 3:
            {
                int mobileChoice;
                printf("Enter\n1 - X-box Stereo Headset -$11000\n2 - X-box Wireless Controller - $9866\n3 - X-box USB cable - $12800\nAny other number to exit\n");
                scanf("%d", &mobileChoice);
                cost[6] = 11000;
                cost[7] = 9866;
                cost[8] = 12800;
                switch (mobileChoice)
                {
                case 1:
                {
                    int num;
                    printf("You chose to buy X-box Stereo Headset for $11000.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d", &num);
                    if (num == 1)
                    {
                        a[6]++;
                        totalCost += 11000;
                    }
                    printf("Your Cost in Cart is %d\n", totalCost);
                    break;
                }
                case 2:
                {
                    int num;
                    printf("You chose to buy X-box Wireless Controller for $9866.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d", &num);
                    if (num == 1)
                    {
                        a[7]++;
                        totalCost += 9866;
                    }
                    printf("Your Cost in Cart is %d\n", totalCost);
                    break;
                }
                case 3:
                {
                    int num;
                    printf("You chose to buy X-box USB cable for $12800.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d", &num);
                    if (num == 1)
                    {
                        a[8]++;
                        totalCost += 12800;
                    }
                    printf("Your Cost in Cart is %d\n", totalCost);
                    break;
                }
                default: {
                    printf("Exit from X-box Accessories\n");
                    break;
                }
                }
                break;
            }
            default:
            {
                printf("Enter Valid Categories Choice\n");
                break;
            }
            }
            printf("%s's cart\n", name);
            printf("Id\tItems\t\t\tQuantity\t\t\tCost\n");
            for (i = 0; i < 9; i++)
            {
                if (a[i] != 0)
                {
                    printf("%d\t%s\t\t%d\t\t\t%d\n", i, items[i], a[i], (cost[i] * a[i]));
                }
            }
            printf("Total Cost\t\t\t\t\t%d\n", totalCost);
            printf("If you wish to buy anything more Enter\n1 to Add Item\n2 to Delete Items \nAny other number to Exit\n");
            scanf("%d", &c);
        }
        if (c == 2)
        {
            int id;
            printf("Enter id to delete item\n");
            scanf("%d", &id);
            if (id < 9 && id>0) {
                totalCost = totalCost - (cost[id] * a[id]);
                a[id] = 0;
            }
            else {
                printf("Enter Valid id\n");
            }
            printf("Revised Items \n");
            printf("Id\tItems\t\t\tQuantity\t\tCost\n");
            for (i = 0; i < 9; i++)
            {
                if (a[i] != 0)
                {
                    printf("%d\t%s\t\t%d\t\t%d\n", i, items[i], a[i], (cost[i] * a[i]));
                }
            }
            printf("Total Cost\t\t\t\t\t%d\n", totalCost);
            printf("If you wish to buy anything more Enter\n1 to Add Item\n2 to Delete Items \nAny other number to Exit\n");
            scanf("%d", &c);
        }

    } while (c == 1 || c == 2);
    int tax = totalCost * 0.13;
    totalCost = totalCost + tax;
    printf("Your Final Cost is %d\n", totalCost);
    if (balance > totalCost) {
        balance = balance - totalCost;
        printf("You now have %i in your account \n", balance);
    }
    else {
        printf("Insufficient fund to purchase item, goto main-menu to top-up your account.\n");
    }
    printf("Thanks %s for Choosing Us and Visit us again.\n", name);
}

//Apple

int apple(void)
{
    static int totalCost;
    int i, choice, c = 1, a[9], cost[9];
    for (i = 0; i < 9; i++)
        a[i] = 0;

    char items[9][100] = { "iPhone XR",
    "iPhone 12 Pro",
    "iPhone 13",
    "iPad Mini",
    "iPad Pro",
    "iPad Air",
    "Macbook Air",
    "Macbook Pro 13",
    "Macbook Pro 16"
    };
    do {
        //C is 1 by default
        if (c == 1) {
            printf("Enter\n1 - iPhones\n2 -  iPads\n3 - Macbooks\nAny other number to exit\n");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
            {
                int accessoriesChoice;
                printf("Enter\n1 - iPhone XR - $355\n2 - iPhone 12 Pro- $500\n3 - iPhone 13 - $550\nAny other number to exit\n");
                scanf("%d", &accessoriesChoice);
                cost[0] = 355;
                cost[1] = 500;
                cost[2] = 550;
                switch (accessoriesChoice)
                {
                case 1:
                {
                    int num;
                    printf("You chose iPhone XR with $355.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d", &num);
                    if (num == 1)
                    {
                        a[0]++;
                        totalCost += 355;
                    }
                    printf("Your Cost in Cart is %d\n", totalCost);
                    break;
                }
                case 2:
                {
                    int num;
                    printf("You chose iPhone 12 Pro with $500.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d", &num);
                    if (num == 1)
                    {
                        a[1]++;
                        totalCost += 500;
                    }
                    printf("Your Cost in Cart is %d\n", totalCost);
                    break;
                }
                case 3:
                {
                    int num;
                    printf("You chose iPhone 13 with $550.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d", &num);
                    if (num == 1)
                    {
                        a[2]++;
                        totalCost += 550;
                    }
                    printf("Your Cost in Cart is %d\n", totalCost);
                    break;
                }
                default: {
                    printf("Exit from iPhones Category\n");
                    break;
                }
                }
                break;
            }
            case 2:
            {
                int shoesChoice;
                printf("Enter\n1 - iPad Mini - $3550\n2 - iPad Pro - $5000\n3 - iPad Air - $2800\nAny other number to exit\n");
                scanf("%d", &shoesChoice);
                cost[3] = 3550;
                cost[4] = 5000;
                cost[5] = 2800;
                switch (shoesChoice)
                {
                case 1:
                {
                    int num;
                    printf("You chose iPad Mini for $3550.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d", &num);
                    if (num == 1)
                    {
                        a[3]++;
                        totalCost += 3550;
                    }
                    printf("Your Cost in Cart is %d\n", totalCost);
                    break;
                }
                case 2:
                {
                    int num;
                    printf("You chose iPad Pro for $5000.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d", &num);
                    if (num == 1)
                    {
                        a[4]++;
                        totalCost += 5000;
                    }
                    printf("Your Cost in Cart is %d\n", totalCost);
                    break;
                }
                case 3:
                {
                    int num;
                    printf("You chose iPad Air for $2800.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d", &num);
                    if (num == 1)
                    {
                        a[5]++;
                        totalCost += 2800;
                    }
                    printf("Your Cost in Cart is %d\n", totalCost);
                    break;
                }
                default: {
                    printf("Exit from iPad Categories ?\n");
                    break;
                }
                }
                break;
            }
            case 3:
            {
                int mobileChoice;
                printf("Enter\n1 - Macbook Air -$11000\n2 -  Macbook Pro 13 - $9866\n3 - Macbook Pro 16 - $12800\nAny other number to exit\n");
                scanf("%d", &mobileChoice);
                cost[6] = 11000;
                cost[7] = 9866;
                cost[8] = 12800;
                switch (mobileChoice)
                {
                case 1:
                {
                    int num;
                    printf("You chose to buy Macbook Air for $11000.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d", &num);
                    if (num == 1)
                    {
                        a[6]++;
                        totalCost += 11000;
                    }
                    printf("Your Cost in Cart is %d\n", totalCost);
                    break;
                }
                case 2:
                {
                    int num;
                    printf("You chose to buy Macbook pro 13 for $9866.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d", &num);
                    if (num == 1)
                    {
                        a[7]++;
                        totalCost += 9866;
                    }
                    printf("Your Cost in Cart is %d\n", totalCost);
                    break;
                }
                case 3:
                {
                    int num;
                    printf("You chose to buy Macbook pro 16 for $12800.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d", &num);
                    if (num == 1)
                    {
                        a[8]++;
                        totalCost += 12800;
                    }
                    printf("Your Cost in Cart is %d\n", totalCost);
                    break;
                }
                default: {
                    printf("Exit from Macbooks Category\n");
                    break;
                }
                }
                break;
            }
            default:
            {
                printf("Enter Valid Categories Choice\n");
                break;
            }
            }
            printf("%s's cart\n", name);
            printf("Id\tItems\t\t\tQuantity\t\t\tCost\n");
            for (i = 0; i < 9; i++)
            {
                if (a[i] != 0)
                {
                    printf("%d\t%s\t\t%d\t\t\t%d\n", i, items[i], a[i], (cost[i] * a[i]));
                }
            }
            printf("Total Cost\t\t\t\t\t%d\n", totalCost);
            printf("If you wish to buy anything more Enter\n1 to Add Item\n2 to Delete Items \nAny other number to Exit\n");
            scanf("%d", &c);
        }
        if (c == 2)
        {
            int id;
            printf("Enter id to delete item\n");
            scanf("%d", &id);
            if (id < 9 && id>0) {
                totalCost = totalCost - (cost[id] * a[id]);
                a[id] = 0;
            }
            else {
                printf("Enter Valid id\n");
            }
            printf("Revised Items \n");
            printf("Id\tItems\t\t\tQuantity\t\tCost\n");
            for (i = 0; i < 9; i++)
            {
                if (a[i] != 0)
                {
                    printf("%d\t%s\t\t%d\t\t%d\n", i, items[i], a[i], (cost[i] * a[i]));
                }
            }
            printf("Total Cost\t\t\t\t\t%d\n", totalCost);
            printf("If you wish to buy anything more Enter\n1 to Add Item\n2 to Delete Items \nAny other number to Exit\n");
            scanf("%d", &c);
        }

    } while (c == 1 || c == 2);
    int tax = totalCost * 0.13;
    totalCost = totalCost + tax;
    printf("Your Final Cost is %d\n", totalCost);
    if (balance > totalCost) {
        balance = balance - totalCost;
        printf("You now have %i in your account \n", balance);
    }
    else {
        printf("Insufficient fund to purchase item, goto main-menu to top-up your account.\n");
    }
    printf("Thanks %s for Choosing Us and Visit us again.\n", name);
}
