

#include <stdio.h>
#include <stdlib.h>
#include "./fn.h"

int main()
{

    int start = 1;
    validUser();

    while (start)
    {
        char opperation, chosen;
        system("clear");
        Menu();

    chose:
        printf("chose : ");
        scanf(" %c", &opperation);

        switch (opperation)
        {

        case 'A':

            system("clear");
            printf("\nyour balance is %dDH\n\n", Balance);
            break;

        case 'B':
            // Deposit();

            break;

        case 'C':

            Withdraw();
            break;

        case 'D':

            printf("bey....\n");
            exit(EXIT_SUCCESS);

            break;

        default:
            // printf("invalid choise !!!\n");
            printf("enter the valid coise \n");
            goto chose;
            break;
        }

        printf("try anhoter operation (n/y) : ");
        scanf(" %c", &chosen);

        if (chosen == 'N' || chosen == 'n')
            start = 0;
        printf("opperations finished ....\n");
    }

    return 0;
}