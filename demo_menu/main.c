#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void ask()
{
    printf("\t\t\t\t\t\t\tPatient Record System");
    printf("\n\n\n\t\t\t\t----------------------------------------------------------");
    printf("\n\t\t\t\t\t\t\t User Choice");
    printf("\n\t\t\t\t----------------------------------------------------------");
    printf("\n\t\t\t\t1. Add new patient");
    printf("\n\t\t\t\t2. Search and modify patient's data");
    printf("\n\t\t\t\t3. Exit\n ---> ");
    printf("Enter your choice here: ");
}
char *add()
{
    return "Add new patient\n";
}
char *update()
{
    return "Modity data\n";
}
int main()
{
    system("color 17"); // 1 is blue 7 is white
    char n;
    while(true)
    {
    int choice;
    ask();
    scanf("%d", &choice);
    if(choice == 1)
    {
        printf(add());
    }
    else if(choice == 2)
    {
        printf(update());
    }
    else if(choice == 3)
    {
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
