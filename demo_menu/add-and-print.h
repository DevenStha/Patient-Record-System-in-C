#ifndef ADD-AND-PRINT_H_INCLUDED
#define ADD-AND-PRINT_H_INCLUDED
int add() //function for adding patients
{
    FILE *fp;
    fp = fopen("patient.txt", "a+");
    int index = -1;
    int exist = 0;
    char none[99];
    strcpy(none, "none");
    char mp[99] = "";
    if(fp == NULL)
    {
        red();
        printf("Error opening file!");
    }
    int temp = -1;
    //int size = sizeof(struct patient);
        while(temp == -1 || exist == 1)
        {
        exist = 0;
        printf("\nHas the patient been to our hospital before?:(Enter 1 for Yes, 2 for No) \n1.Yes \n2.No\n----> ");
        scanf("%d", &tmp.firstime);
        if(tmp.firstime == 1)
        {
            int temp1;
            int n;
            int i;
            printf("Enter patient code while he/she were in our hospital: ");
            scanf("%d", &temp1);
            for(i = 0; i < 9999; i++)
            {
                if(pt[i].code == temp1 && temp1 != -1 && pt[i].status != 0)
                {
                    printf("\nCode Found!!!");
                    fileprint(i);
                    index = i;
                    temp = 1;
                    break;
                }
                /*if(pt[i].status == 1)
                {
                    printf("The patient is still in our hospital!");
                    printf("\nYou need admin access to change existing patient's data!\n");
                    exist = 1;
                    temp = -1;
                    break;
                }*/
            }
            if(pt[index].status == 1)
            {
                printf("\n\nThe patient is still in our hospital!");
                printf("\nYou need admin access to change existing patient's data!\n\n");
                temp = -1;
                exist = 1;
            }
            if(temp == -1 && exist == 0)
            {
                printf("\nWrong code! or the patient is still in the hospital\n");
            }
        }
        else
        {
            break;
        }
        }
            /*for(n = 0; n < 9999; n++)
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
        }*/
    if(temp == -1)
    {
    char c = '-';
    printf("\nEnter the first name of the Patient: ");
    scanf("%c", &temp);
    scanf("%[^\n]s", tmp.name);
    if(strcmp(tmp.name, mp) == 0)
    {
        strcpy(tmp.name, "skipped");
    }
    dash(&tmp.name);
    strcpy(tmp.mname, "none");
    printf("\nEnter middle name: ");
    scanf("%c", &temp);
    scanf("%[^\n]s", tmp.mname);
    if(strcmp(tmp.mname, mp) == 0)
    {
        strcpy(tmp.mname, none);
    }
    dash(&tmp.mname);
    printf("\nEnter last name: ");
    scanf("%c", &temp);
    scanf("%[^\n]s", tmp.lname);
;
    if(strcmp(tmp.lname, mp) == 0)
    {
        strcpy(tmp.lname, "skipped");
    }
    dash(&tmp.lname);
    printf("\nWhich year you were born in?(in numbers): ");
    scanf("%d", &tmp.year);
    printf("\nWhich month you were born in?(in numbers): ");
    scanf("%d", &tmp.month);
    printf("\nWhich day you were born in?(in numbers): ");
    scanf("%d", &tmp.day);
    while(true)
    {
    printf("Enter patient gender:(Enter 1 for Male, 2 for Female, 3 for Transgender and 4 for Rather not say) \n 1. Male \n 2. Female \n 3. Transgender\n 4. Rather not say \n ---> ");
    scanf("%d", &tmp.gender);
    if(tmp.gender < 1 || tmp.gender > 4)
    {
        red();
        printf("\nInvalid input!!");
    }
    else
    {
        break;
    }

    }
    scanf("%c", &temp);
    printf("\nEnter your address: ");
    scanf("%[^\n]s", tmp.address);
    if(strcmp(tmp.address, mp) == 0)
    {
        strcpy(tmp.address, "skipped");
    }
    dash(&tmp.address);
    printf("Enter your phone number: ");
    scanf("%c", &temp);
    scanf("%[^\n]s", tmp.ph);

    if(strcmp(tmp.ph, mp) == 0)
    {
        strcpy(tmp.ph, "skipped");
    }
    dash(&tmp.ph);
    printf("Enter your symptom: ");
    scanf("%c", &temp);
    scanf("%[^\n]s", tmp.symptoms);

    if(strcmp(tmp.symptoms, mp) == 0)
    {
        strcpy(tmp.symptoms, "skipped");
    }
    dash(&tmp.symptoms);
    strlwr(tmp.symptoms);
    tmp.status = 1;
    fileread();
    int validnmc[99];
    assigndoc(tmp.symptoms, &validnmc);
    int valid = 0;
    while(valid == 0)
    {
    if(validnmc[0] == 0)
    {
        printf("\nNo doctors available or free for your symptoms :(");
        tmp.nmc = -1;
        break;
    }
    printf("\nChoose doctor by typing NMC number: ");
    scanf("%d", &tmp.nmc);
    for(int x = 0; x < 99 && tmp.nmc > 0; x++)
    {
        if(validnmc[x] == tmp.nmc)
        {
            valid = 1;
            printf("\nDoctor sucessfully choosen");
            for(int x = 0; x < 9999; x++)
            {
                if(tmp.nmc == d[x].nmc)
                {
                    d[x].occupied = 1;
                    filedwrite();
                    break;
                }
            }
            break;
        }
    }
    if(valid == 0)
    {
        printf("\nPlease enter correct NMC number!");
    }
    }

    printf("\nPatient status: Ongoing treatment");
    fprintf(fp, "\n%s %s %s %d %d %d %s %s %s %d %d %d %d %d", tmp.name, tmp.mname, tmp.lname, tmp.year,
            tmp.month, tmp.day, tmp.address, tmp.symptoms, tmp.ph, tmp.gender,
            tmp.code, tmp.status, tmp.firstime, tmp.nmc);
    fclose(fp);
    return 2;
    }
    else
    {
    printf("\nNote: Click \"Enter\" to skip the prompt and keep old data\n");
    scanf("%c", &temp);
    printf("\nEnter your new address: ");
    scanf("%[^\n]s", pt[index].address);
    dash(&pt[index].address);
    printf("Enter your new phone number: ");
    scanf("%c", &temp);
    scanf("%[^\n]s", &pt[index].ph);
    dash(&pt[index].ph);
    scanf("%c", &temp);
    printf("Enter your new symptom: ");
    scanf("%[^\n]s", pt[index].symptoms);
    dash(&pt[index].symptoms);
    strlwr(pt[index].symptoms);
    int vldnmc[99];
    assigndoc(pt[index].symptoms, &vldnmc);
    int nmc[99];
    int vld = 0;
    while(vld == 0)
    {
    if(vldnmc[0] == 0)
    {
        printf("\nNo doctors available or free for your symptoms :(");
        pt[index].nmc = -1;
        break;
    }
    printf("\nChoose doctor by typing NMC number: ");
    scanf("%d", &pt[index].nmc);
    for(int x = 0; x < 99 && pt[index].nmc > 0; x++)
    {
        if(vldnmc[x] == pt[index].nmc)
        {
            vld = 1;
            printf("\nDoctor sucessfully choosen");
            for(int x = 0; x < 9999; x++)
            {
                if(tmp.nmc == d[x].nmc)
                {
                    d[x].occupied = 1;
                    filedwrite();
                    break;
                }
            }
            break;
        }
    }
    if(vld == 0)
    {
        printf("\nPlease enter correct NMC number!");
    }
    }

   // assigndoc(pt[index].symptoms, &nmc)
    pt[index].status = 1;
    fileprint(index);
    fclose(fp);
    filewrite();
    return 1;
    }
  /*while(fscanf(fp, "%s %s %s %d %d %d %s %s %ld %d %d %d %d\n", tmp.name, tmp.mname, tmp.lname, &tmp.year,
            &tmp.month, &tmp.day, tmp.address, tmp.symptoms, &tmp.ph, &tmp.gender,
            &tmp.code, &tmp.status, &tmp.firstime) != EOF)
            {
                pt[*in].code = tmp.code + 1;
            }
*/

    }
void print(int index) //print all the info on the pt[index]
{
        //tmp.code = *index + 1000; //for now code is index + 1000 but when file handling it will be previous user code + 1
        char none[99];
        strcpy(none, "none");
        printf("\nInfo: \n\n");
        //printf("\n%d\n", strcmp(tmp.mname, none));
        if(strcmp(tmp.mname, none) != 0){
            printf("\nName: %s %s %s",tmp.name, tmp.mname, tmp.lname);
        }
        else{
            printf("\nName: %s %s",tmp.name, tmp.lname);
        }

        printf("\nDate of birth: %d-%d-%d",tmp.year,tmp.month, tmp.day);
        switch(tmp.gender)
        {
        case 1:
            printf("\nGender: Male");
            break;
        case 2:
            printf("\nGender: Female");
            break;
        case 3:
            printf("\nGender: Transgender");
            break;
        case 4:
            printf("\nGender: Not disclosed by the patient");
            break;
        default:
            printf("\nGender: ERROR!");

        }

        printf("\nAddress: %s", tmp.address);
        printf("\nPhone number: %s", tmp.ph);
        printf("\nSymptom: %s", tmp.symptoms);
        /*for(int i = 0; i < 100; ++i)
        {
            if(strcmp(tmp.symptoms, d[i].special) == 0)
            {
                printf("\nFor your symptoms you may refer to these doctors: ");
                printf("\nName: %s %s %s", d[i].fname, d[i].mname, d[i].lname);
                printf("\nSpeciality: %s", d[i].special);
                printf("\nNMC: %d", d[i].nmc);
                printf("\nAvailablity: %s", d[i].docfree);
                break;
            }
            else if(i == 99)
            {
                printf("\nWe didn't find any one so please refer to our physician: ");
                printf("%s", physician);
            }
        }*/
        printf("\nPatient status: ");
        switch(tmp.status)
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
        printf("\nYour code is %d", tmp.code);
        if(tmp.firstime == 2) //for adding
        {
            ++index;
        }
//        for(int i = 0; i < sizeof())
}

#endif // ADD-AND-PRINT_H_INCLUDED
