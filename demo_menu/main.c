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
    printf("\n\t\t\t\t2. Update patient's data");
    printf("\n\t\t\t\t3. Exit\n ---> ");
    printf("Enter your choice here: ");
}
void add()
{
    char f_name[99];
    char m_name[99] = {' '};
    char l_name[99];
    int year, month, day;
    char symp[999];
    char ad[50];
    printf("Enter your first name: ");
    scanf("%s", &f_name);
    printf("\nEnter your middle name(Ctrl + C to skip): ");
    scanf("%s", &m_name);
    printf("\n\nEnter your last name: ");
    scanf("%s", &l_name);
    printf("\nWhich year you were born in?(in numbers): ");
    scanf("%d", &year);
    printf("\nWhich month you were born in?(in numbers): ");
    scanf("%d", &month);
    printf("\nWhich day you were born in?(in numbers): ");
    scanf("%d", &day);
    printf("\nEnter your address: ");
    scanf("%s", &ad);
    printf("\nEnter your symptoms(seperated by dash): ");
    scanf("%s", &symp);
    printf("\n\nYour name is %s %s %s", f_name, m_name, l_name);
    printf("\nDate of birth: %d-%d-%d", year,month,day);
    printf("\nYou live in %s", ad);
    printf("\nYou have following symptoms: %s\n\n", symp);
}
char *update()
{
    return "Modify data\n";
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
        add();
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
        printf("Invalid input\n");
    }
    printf("Do you want to go back?(Y/N): ");
    scanf(" %c", &n);
    if(n == 'N' || n == 'n')
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
