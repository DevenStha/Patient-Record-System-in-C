#ifndef SEARCH-N-MODIFY_H_INCLUDED
#define SEARCH-N-MODIFY_H_INCLUDED


bool search(int *in) //function for searching through indexes
{
    FILE *fp;
    fp = fopen("patient.txt", "a+");
    char temp;
    pt[*in].firstime = 0;
    //int tmp;
    int code;
    printf("Please enter the patient's code: ");
    scanf("%d", &code);
    //*in = *in - 1000;
    if(code < 1000)
    {
        printf("Patient code less than 1000 doesn't exist.\n");
    }
   while(fscanf(fp, "\n%s %s %s %d %d %d %s %s %ld %d %d %d %d", tmp.name, tmp.mname, tmp.lname, &tmp.year,
            &tmp.month, &tmp.day, tmp.address, tmp.symptoms, &tmp.ph, &tmp.gender,
            &tmp.code, &tmp.status, &tmp.firstime) != EOF)
            {
                if(tmp.code == code)
                {
                    fileprint(tmp.code);
                    return false;
                }
            }
    /*for(int n = 0; n < 9999; n++)
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
        return true; //return 1 for use for future
    }*/
}
void modify()
{
    int in;
    char temp;
    int tmp;
    if(search(&in) == false) //future use is here it means code is found
    {
        printf("\n\nDo you want to modify the data?\n1.Yes\n2.No\n---> ");
        scanf("%d", &tmp);
    }
    if(tmp == 1)
    {/*
    printf("\n\nInfo: Enter Ctrl + C where you don't want to make any changes\n\n");
    printf("\nNew first name: ");
    scanf("%c", &temp);
    scanf("%[^\n]s", &pt[in].name);
    printf("\nNew middle name: ");
    scanf("%c", &temp);
    scanf("%[^\n]s", &pt[in].mname);
    printf("\nNew last name: ");
    scanf("%c", &temp);
    scanf("%[^\n]s", &pt[in].lname);
    printf("\nNew year(DOB): ");
    //scanf("%d", &tmp);
    scanf("%d", &pt[in].year);
    printf("\nNew month(DOB): ");
    //scanf("%d", &tmp);
    scanf("%d", &pt[in].month);
    printf("\nNew date(DOB): ");
    //scanf("%d", &tmp);
    scanf("%d", &pt[in].day);
    printf("\nNew address: ");
    scanf("%c", &temp);
    scanf("%[^\n]s", &pt[in].address);
    while(true)
    {
    printf("Enter gender: \n 1. Male \n 2. Female \n 3. Transgender\n4. Rather not say \n ---> ");
    scanf("%d", &pt[in].gender);
    if(pt[in].gender < 1 || pt[in].gender > 4)
    {
        printf("\nInvalid status!!");
    }
    else
    {
        break;
    }

    }
    printf("\nNew phone number: ");
    //scanf("%d", &tmp);
    scanf("%ld", &pt[in].ph);
    printf("\nNewer/updated symptom: ");
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
    print(&in);*/
    printf("We are still researching how to modify existing data Please check in later - -''");
    }
}

#endif // SEARCH-N-MODIFY_H_INCLUDED
