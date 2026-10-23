#include "./conio.h"
static int Balance = 2000;
// security
int Password(char pwd[])
{
    const char password[] = "1234";

    if (strcmp(pwd, password) == 0)
    {
        return 1;
    }
    return -1;
}

// hidden password

void hiddenPassword(char pass[])
{

    char c;
    int i = 0;
    system("clear");
    printf("Enter your password : ");

    while ((c = getch()) && c != '\n')
    {
        if (i == 4)
        {
            pass[i] = '\0';
            break;
        }

        else if (i < 4)
        {
            pass[i] = c;
            i++;
        }

        printf("*");
    }
}

// Access Atm

int validUser()
{

    // int password;
    char password[4];
    int counter = 0;

    do
    {

        //   printf("Enter your password : ");
        //   scanf("%d" , &password);

        hiddenPassword(password);

        system("clear");
        if (Password(password) == 1)
        {

            printf("hello sir \n\n");
            break;
        }

        counter++;

        if (counter == 3)
        {
            printf("try later .....\nbey...\n");
            exit(1);
        }

    } while (counter != 3);
}

// show menu

void Menu()
{
    printf("\t\tMenu Principal\n\n");

    printf("  A-show balance\tB-Deposit\n\n");

    printf("  C-Withdraw\t\tD-Exit\n\n");
}

void withDrawMenu()
{
    system("clear");
    printf("\nA-100\t\tB-200\n");
    printf("\nC-300\t\tD-400\n");
    printf("\nE-500\t\tF-1000\n");
}

// message

void message()
{
    system("clear");
    printf("proccessing .....\n");
    sleep(2);
    printf("opperation completed , done.\n\n");
}

int Withdraw()
{

    char chosen;
    int result;
    if (Balance == 0)
    {
        printf("sorry you dont have any balance !!!!\n");
        return 1;
    }

    withDrawMenu();
start:
    printf("Enter your withdraw : ");
    scanf(" %c", &chosen);

    switch (chosen)
    {
    case 'A':
        int A = 100;
        result = Balance -= A;
        message();

        break;

    case 'B':
        int B = 200;
        result = Balance -= B;
        message();
        break;

    case 'C':
        int C = 300;
        result = Balance -= C;
        message();
        break;

    case 'D':
        int D = 400;
        result = Balance -= D;
        message();
        break;

    case 'E':

        int E = 500;
        result = Balance -= E;
        message();
        break;

    case 'F':

        int F = 1000;
        result = Balance -= F;
        message();

        break;

    default:
        printf("invalid choice \n");
        goto start;
        break;
    }
}