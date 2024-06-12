#include <stdio.h>
#include <stdbool.h>
#include <string.h>
//#include "doctor.c"
#define physician "Deven Shrestha"
void ask() //print the interface
{
    printf("\t\t\t\t\t\t\tPatient Record System");
    printf("\n\n\n\t\t\t\t----------------------------------------------------------");
    printf("\n\t\t\t\t\t\t\t User Choice");
    printf("\n\t\t\t\t----------------------------------------------------------");
    printf("\n\t\t\t\t1. Add new patient");
    printf("\n\t\t\t\t2. Search/Update patient's data");
    printf("\n\t\t\t\t3. Admin");
    printf("\n\t\t\t\t4. Instructions");
    printf("\n\t\t\t\t5. Exit\n ---> ");
    printf("Enter your choice here: ");
}
void instructions() //instructions
{
    printf("\n1. Enter the values as asked by the program.");
    printf("\n2. Fill ALL the forms");
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
    int status;
    int firstime;
}pt[9999]; //patient structure list

struct doctor //doctor
{
    char special[99][99];// = {"cough", "headache", "physician", "chest pain", "eye"};
    char person[99][99];// = {"Shital Dhaka", "Kaushal Shrestha", "Ramesh Chalise", "Anil Sharma", "Safal Thapa"};
    int nmc[99];// = {1000, 1001, 1002, 1003, 1004};
    int age[99];
    long ph[99];// = {987372892, 39298372, 3892738, 1628792, 78372};
}d;
void add(int *in) //function for adding patients
{

    int temp = -1;
    //int size = sizeof(struct patient);
    while(true)
    {
        printf("\nHas the patient been to our hospital before?: \n1.Yes \n2.No\n----> ");
        scanf("%d", &pt[*in].firstime);
        if(pt[*in].firstime == 1)
        {
            int temp1;
            int n;
            printf("Enter patient code while he/she were in our hospital: ");
            scanf("%d", &temp1);
            for(n = 0; n < 9999; n++)
            {
            if(temp1 == pt[n].code) //search through every index for matching code
            {
                //printf("The code doesn't exist!\n");
                //printf("Try Again\n");
                printf("Code found!!\n");
                //temp = 1;
                temp = n;
                break;
            }
        }
        if(temp != -1)
        {
            *in = temp;
            break;
        }
        printf("\nCode not found!?\n Make sure to type the right code next time!!\n");
        }
        else
        {
            printf("\nNo?, Then enter as specified below:\n\n");
            break;
        }
        }
    if(temp == -1)
    {
    printf("\nEnter the full name of the Patient: ", in + 1);
    scanf("%c", &temp);
    scanf("%[^\n]s", &pt[*in].name);
    printf("\nWhich year you were born in?(in numbers): ");
    scanf("%d", &pt[*in].year);
    printf("\nWhich month you were born in?(in numbers): ");
    scanf("%d", &pt[*in].month);
    printf("\nWhich day you were born in?(in numbers): ");
    scanf("%d", &pt[*in].day);
    }
    scanf("%c", &temp);
    printf("Enter your address: ");
    scanf("%[^\n]s", &pt[*in].address);
    printf("Enter your phone number: ");
    scanf("%ld", &pt[*in].ph);
    scanf("%c", &temp);
    printf("Enter your symptom: ");
    scanf("%[^\n]s", &pt[*in].symptoms);
    pt[*in].status = 1;
    printf("Patient status: Ongoing treatment");
}
void print(int *index) //print all the info on the pt[index]
{
        pt[*index].code = *index + 1000; //for now code is index + 1000 but when file handling it will be previous user code + 1
        printf("Info: \n\n");
        printf("\nName: %s",pt[*index].name);
        printf("\nDate of birth: %d-%d-%d",pt[*index].year,pt[*index].month, pt[*index].day);
        printf("\nAddress: %s", pt[*index].address);
        printf("\nPhone number: %ld", pt[*index].ph);
        printf("\nSymptom: %s", pt[*index].symptoms);
        for(int i = 0; i < 100; ++i)
        {
            if(strcmp(pt[*index].symptoms, d.special[i]) == 0)
            {
                printf("\nFor your symptoms you may refer to these doctors: ");
                printf("\nName: %s", d.person[i]);
                printf("\nAge: %d", d.age[i]);
                printf("\nNMC: %d", d.nmc[i]);
                break;
            }
            else if(i == 99)
            {
                printf("\nWe didn't find any one so please refer to our physician: ");
                printf("%s", physician);
            }
        }
        printf("\nPatient status: ");
        switch(pt[*index].status)
        {
        case 1:
            printf("Ongoing Treatment");
            break;
        case 2:
            printf("Transferred");
            break;
        case 3:
            printf("Cured");
            break;
        default:
            printf("Unknown Status!?");
        }
        printf("\nYour code is %d", pt[*index].code);
        if(pt[*index].firstime == 2) //for adding
        {
            ++*index;
        }
//        for(int i = 0; i < sizeof())
}
int search(int *in) //function for searching through indexes
{
    char temp;
    pt[*in].firstime = 0;
    int tmp;
    printf("Please enter the patient's code: ");
    scanf("%d", &*in);
    *in = *in - 1000;
    if(*in < 0)
    {
        printf("Patient code less than 1000 doesn't exist.\n");
    }
    for(int n = 0; n < 9999; n++)
    {
        if(pt[n].code - 1000 == *in)
        {
            tmp = 1;
            break;
        }
    }
    if(tmp != 1)
    {
        printf("Code not found!");
    }
    else
    {
        print(&*in); //call print() for saving time
        return 1; //return 1 for use for future
    }
}
void modify()
{
    int in;
    char temp;
    int tmp;
    if(search(&in) == 1) //future use is here it means code is found
    {
        printf("\n\nDo you want to modify the data?\n1.Yes\n2.No\n---> ");
        scanf("%d", &tmp);
    }
    if(tmp == 1)
    {
    printf("\n\nInfo: Enter Ctrl + C where you don't want to make any changes\n\n");
    printf("\nNew name: ");
    scanf("%c", &temp);
    scanf("%[^\n]s", &pt[in].name);
    printf("\nNew year(DOB): ");
    //scanf("%d", &tmp);
    scanf("%[^\n]d", &pt[in].year);
    printf("\nNew month(DOB): ");
    //scanf("%d", &tmp);
    scanf("%[^\n]d", &pt[in].month);
    printf("\nNew date(DOB): ");
    //scanf("%d", &tmp);
    scanf("%[^\n]d", &pt[in].day);
    printf("New address: ");
    scanf("%c", &temp);
    scanf("%[^\n]s", &pt[in].address);
    printf("New phone number: ");
    //scanf("%d", &tmp);
    scanf("%[^\n]ld", &pt[in].ph);
    printf("Newer/updated symptom: ");
    scanf("%c", &temp);
    scanf("%[^\n]s", &pt[in].symptoms);
    while(true)
    {
    printf("Is the patient ongoing treatment, transferred or cured?: \n 1. Ongoing \n 2. Transferred \n 3. Cured\n ---> ");
    scanf("%d", &pt[in].status);
    if(pt[in].status < 1 || pt[in].status > 3)
    {
        printf("\nInvalid status!!");
    }
    else
    {
        break;
    }
    }
    print(&in);
    }
}
/*void suggestion()
{
    for(int i = 0; i < sizeof)
}*/

int main()
{
    int index = 0;
    int dindex = 0; //indexing but for adding doctor(admin)
    int save;
    char admin[6] = "admin";
    char asku[6];
    int c = 0;
    int i = 0;
    int confirm;
    char spass;
    char temp;
    char pass[9];
    char passwd[9] = "admin123"; //9 indexes for 8 char password because garbage value at end
    system("color 17");
    while(true)
    {
        ask();
        char name[99];
        scanf("%d",&i);
        /*if(i == 2)
        {
            break;
        }*/
        switch(i)
        {
        case 1:
            save = index; //save initial index value because it will change quite a lot in add or print functions as the address is passed
            index = save;
            add(&index);
            print(&index);
            //++index;
            break;
        case 2:
            modify();
            break;
        case 3:
            //index;
            printf("Enter admin username: ");
            scanf("%s", &asku);
            printf("\nEnter admin password: ");
            while((spass = _getch()) != 13) //keep asking spass value until user inputs 13('\n') for some reason
            {                               //writing '\n' doesn't work and I had to write 13
                pass[c] = spass; //assign spass to pass[c] which is 0 and increments
                c++; //++
                printf("*"); //replace character on screen with *
            }
            if(strcmp(pass, passwd) == 0 && strcmp(admin, asku) == 0)
            {
                printf("\nAccess granted!");
                printf("\nEnter doctor name: ");
                scanf("%c", &temp);
                scanf("%[^\n]s", &d.person[dindex]);
                printf("\nEnter his/her speciality: ");
                scanf("%c", &temp);
                scanf("%[^\n]s", &d.special[dindex]);
                printf("Enter doctor's age: ");
                scanf("%d", &d.age[dindex]);
                printf("\nEnter doctor NRN number: ");
                scanf("%d", &d.nmc[dindex]);
                printf("\nEnter doctor phone number: ");
                scanf("%ld", &d.ph[dindex]);
                ++dindex;
            }
            else
            {
                printf("\nAccess denined.");
                return 1;
            }
            break;
        case 4:
            instructions();
            //index;
            break;
        case 5:
            return 0;
        default:
            printf("Enter a valid choice: ");
            //index;
        }
        printf("\n\nDo you want to exit?\n\n1. Yes\n2. No: \n----> ");
        scanf("%d", &confirm);
        if(confirm != 2)
        {
            break;
        }
    }
    return 0;
}
