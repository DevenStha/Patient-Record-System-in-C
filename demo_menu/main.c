#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    system("color 17");
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
        printf("Enter patient's name/address/sex/symptoms/etcc...... Work in Progress!!!!!!");
    }
    else if(choice == 2)
    {
        printf("Enter patient's code, update or move or view or remove ....... WIP!!!!!");
    }
    else
    {
        return 3;
    }
    getch(); //for DEV C++ last updated in 2006
    return 0;
}
