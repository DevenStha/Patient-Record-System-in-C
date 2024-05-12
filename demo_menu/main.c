#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    system("color 17"); // 1 is blue 7 is white
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
        printf("It will now exit");
        return 3;
    }
    getch(); //for DEV C++
    return 0;
}
