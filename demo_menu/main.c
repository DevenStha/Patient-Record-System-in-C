#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    system("color 17"); // 1 is blue 7 is white
    char n;
    /*printf("\t\t\t\t\t\t\tPatient Record System");
    printf("\n\n\n\t\t\t\t----------------------------------------------------------");
    printf("\n\t\t\t\t\t\t\t User Choice");
    printf("\n\t\t\t\t----------------------------------------------------------");
    printf("\n\t\t\t\t1. Add new patient");
    printf("\n\t\t\t\t2. Search and modify patient's data");
    printf("\n\t\t\t\t3. Exit\n ---> ");*/
    while(true)
    {
    int choice;
    printf("\t\t\t\t\t\t\tPatient Record System");
    printf("\n\n\n\t\t\t\t----------------------------------------------------------");
    printf("\n\t\t\t\t\t\t\t User Choice");
    printf("\n\t\t\t\t----------------------------------------------------------");
    printf("\n\t\t\t\t1. Add new patient");
    printf("\n\t\t\t\t2. Search and modify patient's data");
    printf("\n\t\t\t\t3. Exit\n ---> ");
    scanf("%d", &choice);
    if(choice == 1)
    {
        printf("Enter patient's name/address/sex/symptoms/etc...... Work in Progress!!!!!!\n");
    }
    else if(choice == 2)
    {
        printf("Enter patient's code, update or move or view or remove ....... WIP!!!!!\n");
    }
    else if(choice == 3)
    {
        printf("It will now exit");
        break;
    }
    else
    {
        printf("Invalid input");
    }
    printf("Do you want to go back?(Y/N): ");
    scanf(" %c", &n);
    if(n == 'N')
    {
        break;
    }
    else if(n != 'Y')
    {
        printf("Invalid input");
        return 1;
    }
    }
    //getch(); //for DEV C++
    return 0;
}
