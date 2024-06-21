#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#define physician "Deven Shrestha"
#include "user.h"
#include "doctors.h"
#include "fileprint.h"
#include "add-and-print.h"
#include "search-n-modify.h"

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
/*void suggestion()
{
    for(int i = 0; i < sizeof)
}*/

int main()
{
    int index = 0;
    int dindex = 0; //indexing but for adding doctor(admin)
    int findex = 0;
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
                FILE *fp;
                fp = fopen("doctor.txt", "a+");
                printf("\nAccess granted!");
                printf("\n-------DOCTOR LIST---------");
                while(fscanf(fp, "\n%s %s %d %d %ld", td.person, td.special, &td.age,
                             &td.nmc, &td.ph) != EOF)
                {
                    fileprintd(findex);
                    ++findex;
                }
                int e;
                printf("\nDo you want to add new doctor?\n\n1.Yes\n2.No\n--> : ");
                scanf("%d", &e);
                if(e == 1)
                {
                printf("\nEnter doctor name: ");
                scanf("%c", &temp);
                scanf("%[^\n]s", d[dindex].person);
                printf("\nEnter his/her speciality: ");
                scanf("%c", &temp);
                scanf("%[^\n]s", d[dindex].special);
                printf("Enter doctor's age: ");
                scanf("%d", &d[dindex].age);
                printf("\nEnter doctor NRN number: ");
                scanf("%d", &d[dindex].nmc);
                printf("\nEnter doctor phone number: ");
                scanf("%ld", &d[dindex].ph);
                fprintf(fp, "\n%s %s %d %d %ld", d[dindex].person, d[dindex].special, d[dindex].age, d[dindex].nmc, d[dindex].ph);
                ++dindex;
                }
                else
                {
                    break;
                }
                fclose(fp);
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
