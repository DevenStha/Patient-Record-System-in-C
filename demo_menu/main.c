#include <stdio.h>
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
    printf("\n\t\t\t\t3. Admin");
    printf("\n\t\t\t\t4. Exit\n ---> ");
    printf("Enter your choice here: ");
}
struct patient
{
    char name[99];
    int year;
    int month;
    int day;
    char address[99];
    char symptoms[999];
    long ph;
    int code;

}pt[];

void add(int in)
{
    printf("\nEnter the full name of the Patient: ", in + 1);
    scanf("%[^\t]s", &pt[in].name);
    printf("\nWhich year you were born in?(in numbers): ");
    scanf("%d", &pt[in].year);
    printf("\nWhich month you were born in?(in numbers): ");
    scanf("%d", &pt[in].month);
    printf("\nWhich day you were born in?(in numbers): ");
    scanf("%d", &pt[in].day);
    printf("Enter your address: ");
    scanf("%[^\t]s", &pt[in].address);
    printf("Enter your phone number: ");
    scanf("%ld", &pt[in].ph);
    printf("Enter your symptom: ");
    scanf("%[^\t]s", &pt[in].symptoms);
}
void print(int index)
{
        pt[index].code = index + 1000;
        printf("The patient with the following data has been added: \n\n");
        printf("\nName: %s",pt[index].name);
        printf("\nDate of birth: %d-%d-%d",pt[index].year,pt[index].month, pt[index].day);
        printf("\nAddress: %s", pt[index].address);
        printf("\nPhone number: %ld", pt[index].ph);
        printf("\nSymptom: %s", pt[index].symptoms);
        printf("\nYour code is %d", pt[index].code);
}
void modify()
{
    int in;
    printf("Please enter the patient's code: ");
    scanf("%d", &in);
    in = 1000 - in;
    printf("\nNew name: ", in + 1);
    scanf("%[^\t]s", &pt[in].name);
    printf("\nNew year(DOB): ");
    scanf("%d", &pt[in].year);
    printf("\nNew month(DOB): ");
    scanf("%d", &pt[in].month);
    printf("\nNew date(DOB): ");
    scanf("%d", &pt[in].day);
    printf("New address: ");
    scanf("%[^\t]s", &pt[in].address);
    printf("New phone number: ");
    scanf("%ld", &pt[in].ph);
    printf("Newer/updated symptom: ");
    scanf("%[^\t]s", &pt[in].symptoms);
    print(in);
}
int main()
{
    int index = 0;
    int c = 0;
    int i = 0;
    int confirm;
    system("color 17");
    while(true)
    {
        ask();
        char name[99];
        scanf("%d",&i);
        if(i == 2)
        {
            break;
        }
        switch(i)
        {
        case 1:
            add(index);
            print(index);
            ++index;
            break;
        case 2:
            printf("How did you even get here?: ");
            break;
        case 3:
            printf("WIP");
            break;
        case 4:
            return 1;
        default:
            printf("Enter a valid choice: ");
        }
        printf("\n\nDo you want to add someone?\n\n1. Yes\n2. No: ");
        scanf("%d", &confirm);
        if(confirm != 1)
        {
            break;
        }
    }
    while(i == 2)
    {
        modify();
        printf("\n\nUpdate someone else?\n\n1. Yes\n2. No: ");
        scanf("%d", &confirm);
        if(confirm != 1)
        {
            break;
        }
    }
    return 0;
}
