#ifndef MODIFYDOC_H_INCLUDED
#define MODIFYDOC_H_INCLUDED

void modifydoc(int rm)
{
    int docnmc;
    int i;
    char tmp;
    int found = -1;
    char sp[999];
    strcpy(sp, "");
    char emp[999];
    strcpy(emp, "");
    int nmc;
    printf("\nEnter doctor's NMC number: ");
    scanf("%d", &docnmc);
    for(int a = 0; a < 999 && docnmc > -1; a++)
    {
        if(docnmc == d[a].nmc && docnmc > 0)
        {
            found = 1;
            printf("\nDoctor found!!");
            printf("\nHere is the information: ");
            fileprintd(a);
            int mod;
            if(rm == 1)
            {
                rmdoc(a);
                filedwrite();
                return;
            }
            printf("Do you want to modify the data?(1 for Yes, 2 for No)\n1.Yes\n2.No\n--> ");
            scanf("%d", &mod);
            i = a;
            if(mod == 1)
            {
                break;
            }
            else
            {
                return;
            }
        }
    }
    if(found == 1)
    {
    printf("\nNote: You can skip the prompt to keep the old data for strings by pressing \"Enter\"");
    printf("\nHowever: For numbers you still have to use Ctrl + C");
    printf("\n\nEnter new first name: ");
    scanf("%c", &tmp);
    scanf("%[^\n]s", d[i].fname);
    dash(&d[i].fname);
    printf("\n\nEnter new middle name: ");
    scanf("%c", &tmp);
    scanf("%[^\n]s", d[i].mname);
    dash(&d[i].mname);
    printf("\n\nEnter new last name: ");
    scanf("%c", &tmp);
    scanf("%[^\n]s", d[i].lname);
    dash(&d[i].lname);
    printf("\n\nEnter new speciality: ");
    scanf("%c", &tmp);
    scanf("%[^\n]s", sp);
    if(strcmp(sp, emp) == 0)
    {
        strcpy(sp, d[i].special);
    }
    if(strcmp(sp, d[i].special) != 0)
    {
        dash(&sp);
        strlwr(sp);
        d[i].occupied = 0;
        strcpy(d[i].special, sp);
        for(int x = 0; x < 9999; x++)
        {
            if(d[i].nmc == pt[x].nmc)
            {
                printf("\nThe patient with the code %d has been put on hold!", pt[x].code);
                pt[x].nmc = -1;
                filewrite();
                break;
            }
        }
    }
    /*else
    {
       strcpy(d[i].special, d[i].special);
    }*/
    printf("\n\nEnter new available time: ");
    scanf("%c", &tmp);
    scanf("%[^\n]s", d[i].docfree);
    dash(&d[i].docfree);
    printf("Enter new NMC Number: ");
    scanf("%d", &nmc);
    if(nmc != d[i].nmc)
    {
        for(int x = 0; x < 9999; x++)
        {
            if(d[i].nmc == pt[x].nmc)
            {
                pt[x].nmc = nmc;
                filewrite();
                break;
            }
        }
        d[i].nmc = nmc;
    }
    filedwrite();
    }
    else
    {
        printf("\nWrong NMC number!!\n");
    }
}

#endif // MODIFYDOC_H_INCLUDED
