#ifndef ADD-AND-PRINT_H_INCLUDED
#define ADD-AND-PRINT_H_INCLUDED
int add() //function for adding patients
{
    FILE *fp;
    fp = fopen("patient.txt", "a+");
    int index;
    if(fp == NULL)
    {
        red();
        printf("Error opening file!");
    }
    int temp = -1;
    //int size = sizeof(struct patient);
        while(temp == -1)
        {
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
                if(pt[i].code == temp1)
                {
                    printf("\nCode Found!!!");
                    fileprint(i);
                    index = i;
                    temp = 1;
                    break;
                }
            }
            if(temp == -1)
            {
                printf("\nWrong code! Please try again.");
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
    printf("\nEnter the first name of the Patient: ");
    scanf("%c", &temp);
    scanf("%[^\n]s", tmp.name);
    printf("\nEnter middle name: ");
    scanf("%c", &temp);
    scanf("%[^\n]s", tmp.mname);
    printf("\nEnter last name: ");
    scanf("%c", &temp);
    scanf("%[^\n]s", tmp.lname);
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
    printf("Enter your phone number: ");
    scanf("%ld", &tmp.ph);
    scanf("%c", &temp);
    printf("Enter your symptom: ");
    scanf("%[^\n]s", tmp.symptoms);
    tmp.status = 1;
    printf("Patient status: Ongoing treatment");
    fprintf(fp, "\n%s %s %s %d %d %d %s %s %ld %d %d %d %d", tmp.name, tmp.mname, tmp.lname, tmp.year,
            tmp.month, tmp.day, tmp.address, tmp.symptoms, tmp.ph, tmp.gender,
            tmp.code, tmp.status, tmp.firstime);
    fclose(fp);
    return 2;
    }
    else
    {
    scanf("%c", &temp);
    printf("\nEnter your address: ");
    scanf("%[^\n]s", pt[index].address);
    printf("Enter your phone number: ");
    scanf("%ld", &pt[index].ph);
    scanf("%c", &temp);
    printf("Enter your symptom: ");
    scanf("%[^\n]s", pt[index].symptoms);
    pt[index].status = 1;
    printf("Patient status: Ongoing treatment");
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
        printf("\nInfo: \n\n");
        printf("\nName: %s %s %s",tmp.name, tmp.mname, tmp.lname);
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
        printf("\nPhone number: %ld", tmp.ph);
        printf("\nSymptom: %s", tmp.symptoms);
        for(int i = 0; i < 100; ++i)
        {
            if(strcmp(tmp.symptoms, d[i].special) == 0)
            {
                printf("\nFor your symptoms you may refer to these doctors: ");
                printf("\nName: %s", d[i].person);
                printf("\nAge: %d", d[i].age);
                printf("\nNMC: %d", d[i].nmc);
                break;
            }
            else if(i == 99)
            {
                printf("\nWe didn't find any one so please refer to our physician: ");
                printf("%s", physician);
            }
        }
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
