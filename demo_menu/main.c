#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#define physician "Deven Shrestha"
#include "user.h"
#include "doctors.h"
#include "fileread.h"
#include "fileprint.h"
#include "filewrite.h"
#include "doctable.h"
#include "assign_doc.h"
//#include "printdoc.h"
#include "add-and-print.h"
#include "search-n-modify.h"
#include "pwd.h"
#include "remove.h"
#include "rmspace.h"
#include "modifydoc.h"

void red()
{
    system("color 07"); //originally red but it was a eyesore so changed it to black
}
void blue()
{
    system("color 17");
}
void ask() //print the interface
{
    blue();
    printf("\n\t\t\t\t\t\t\tPatient Record System");
    printf("\n\n\n\t\t\t\t----------------------------------------------------------");
    printf("\n\t\t\t\t\t\t\t User Choice");
    printf("\n\t\t\t\t----------------------------------------------------------");
    printf("\n\t\t\t\t1. Add new patient");
    printf("\n\t\t\t\t2. Admin");
    printf("\n\t\t\t\t3. Instructions");
    printf("\n\t\t\t\t4. Exit\n ---> ");
    printf("Enter your choice here: ");
}
void instructions() //instructions
{
    printf("\n1. Enter the values as asked by the program.");
    printf("\n2. For string prompts you can skip the values by pressing enter!");
}

void askadmin()
{
    printf("\t\t\t\t\t\t\tAdmin");
    printf("\n\n\n\t\t\t\t----------------------------------------------------------");
    printf("\n\t\t\t\t\t\t\t User Choice");
    printf("\n\t\t\t\t----------------------------------------------------------");
    printf("\n\t\t\t\t1. Add new doctors");
    printf("\n\t\t\t\t2. Search/Update patient's data");
    printf("\n\t\t\t\t3. Change username or password");
    printf("\n\t\t\t\t4. Search/Update doctor's data");
    printf("\n\t\t\t\t5. Remove patient from the database: ");
    printf("\n\t\t\t\t6. Remove doctor from the database: ");
    printf("\n\t\t\t\t7. Instructions");
    printf("\n\t\t\t\t8. View list of doctors: ");
    printf("\n\t\t\t\t9. Exit\n ---> ");
    printf("\t\t\t\tDoctors' List: ");
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
    int counter = 0;
    char none[99];
    strcpy(none, "none");
    readpwd(); //read admin username and password
    char admin[99];
    strcpy(admin, ad.username);
    char asku[99] = "tempp";
    int c = 0;
    int i = 0;
    int confirm;
    char spass;
    char temp;
    char pass[99] = "tempp123";
    char passwd[99];
    char mp[99] = "";
    strcpy(passwd, ad.pwd);
    int access = 0;//9 indexes for 8 char password because garbage value at end
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
            printdoc();
            save = index; //save initial index value because it will change quite a lot in add or print functions as the address is passed
            index = save;
            fileread();
            //add();
            if(add() == 2)
                print(&index);
            fileread();
            //++index;
            break;
        case 2:
            //index;
            if(counter == 3)
            {
                printf("\n!!!Admin section is blocked");
                printf("\nYou entered the wrong username or password 3 times!");
                printf("\nRestart the program and try again");
                access = -1;
            }
            if(access == 0)
            {
            //asku[6] = "tempp";
            c = 0;
            printf("Enter admin username: ");
            scanf("%s", &asku);
            memset(pass, '\0', sizeof(pass));
            printf("\nEnter admin password: ");
            while((spass = _getch()) != 13) //keep asking spass value until user inputs 13('\n') for some reason
            {                               //writing '\n' doesn't work and I had to write 13
                pass[c] = spass; //assign spass to pass[c] which is 0 and increments
                c++; //++
                printf("*"); //replace character on screen with *
            }
            }
            system("cls");
            if(strcmp(pass, passwd) == 0 && strcmp(admin, asku) == 0 || access == 1)
            {
                red();
                int loopbreak = 0;
                while(loopbreak == 0)
                {
                access = 1;
                //system("clear");
                printf("\nAccess granted!");
                askadmin();
                printf("\nEnter your choice here:\n---> ");
                scanf("%d", &i);
                FILE *fp;
                fp = fopen("doctor.txt", "a+");
                switch(i)
                {
                case 1:
                printf("\nEnter first name: ");
                scanf("%c", &temp);
                scanf("%[^\n]s", td.fname);
                if(strcmp(mp, td.fname) == 0)
                {
                    strcpy(td.fname, "skipped");
                }
                dash(&td.fname);
                printf("\nEnter middle name: ");
                scanf("%c", &temp);
                scanf("%[^\n]s", td.mname);
                dash(&td.mname);
                if(strcmp(mp, td.mname) == 0)
                {
                    strcpy(td.mname, "skipped");
                }
                printf("Enter last name: ");
                scanf("%c", &temp);
                scanf("%[^\n]s", td.lname);
                dash(&td.lname);
                if(strcmp(mp, td.lname) == 0)
                {
                    strcpy(td.lname, "skipped");
                }
                printf("\nEnter doctor NMC number: ");
                scanf("%d", &td.nmc);
                printf("Enter doctor's speciality: ");
                scanf("%c", &temp);
                scanf("%[^\n]s", td.special);
                dash(&td.special);
                strlwr(td.special);
                if(strcmp(mp, td.special) == 0)
                {
                    strcpy(td.special, "skipped");
                }
                printf("\nEnter doctor's availablity(Time range)[Day] <Eg. 10:45-16:00[Sun,Tue,Fri]: ");
                scanf("%c", &temp);
                scanf("%[^\n]s", td.docfree);
                dash(&td.docfree);
                if(strcmp(mp, td.docfree) == 0)
                {
                    strcpy(td.fname, "skipped");
                }
                td.occupied = 0;
                fprintf(fp, "%s %s %s %d %s %s %d\n", td.fname, td.mname, td.lname, td.nmc, td.special, td.docfree, td.occupied);
                fclose(fp);
                break;
                case 2:
                    printdoc();
                    fileread();
                    modify(0);
                    break;
                case 3:
                    writepwd();
                    break;
                case 4:
                    fileread();
                    modifydoc();
                    break;
                case 5:
                    modify(1);
                    break;
                case 8:
                    printdoc();
                    char x[99];
                    printf("\nPress any key to go back to admin menu:\n");
                    scanf("%c", &temp);
                    scanf("%[^\n]s", x);
                    break;
                case 9:
                    loopbreak = 1;
                    break;
                default:
                    printf("\nINVALID VALUE");
                }
                }
                //fclose(fp);
            }
            else
            {
                printf("\nAccess denined.");
                counter++;
            }
            break;
        case 3:
            instructions();
            //index;
            break;
        case 4:
            return 0;
        default:
            red();
            printf("Enter a valid choice!!!: ");
            //index;
        }
            }
   return 0;
}
