#ifndef ADD-AND-PRINT_H_INCLUDED
#define ADD-AND-PRINT_H_INCLUDED
void add(int *in) //function for adding patients
{
    FILE *fp;
    fp = fopen("patient.txt", "a+");
    if(fp == NULL)
    {
        printf("Program is missing necessary file\nMissing File: patient.txt!!");
        return -1;
    }
    int temp = -1;
    //int size = sizeof(struct patient);
        printf("\nHas the patient been to our hospital before?: \n1.Yes \n2.No\n----> ");
        scanf("%d", &pt[*in].firstime);
        if(pt[*in].firstime == 1)
        {
            int temp1;
            int n;
            printf("Enter patient code while he/she were in our hospital: ");
            scanf("%d", &temp1);
            while(fscanf(fp, "\n%s %s %s %d %d %d %s %s %ld %d %d %d %d", tmp.name, tmp.mname, tmp.lname, &tmp.year,
            &tmp.month, &tmp.day, tmp.address, tmp.symptoms, &tmp.ph, &tmp.gender,
            &tmp.code, &tmp.status, &tmp.firstime) != EOF)
            {
                if(temp1 == tmp.code)
                {
                    printf("Code found!!");
                    fileprint(tmp.code);
                    temp = 0;
                    break;
                }
            }
                        if(temp == -1)
            {
                printf("\nWrong code! The program will now exit.");
                exit(-1);
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
    scanf("%[^\n]s", &pt[*in].name);
    printf("\nEnter middle name: ");
    scanf("%c", &temp);
    scanf("%[^\n]s", &pt[*in].mname);
    printf("\nEnter last name: ");
    scanf("%c", &temp);
    scanf("%[^\n]s", &pt[*in].lname);
    printf("\nWhich year you were born in?(in numbers): ");
    scanf("%d", &pt[*in].year);
    printf("\nWhich month you were born in?(in numbers): ");
    scanf("%d", &pt[*in].month);
    printf("\nWhich day you were born in?(in numbers): ");
    scanf("%d", &pt[*in].day);
    while(true)
    {
    printf("Enter patient gender: \n 1. Male \n 2. Female \n 3. Transgender\n 4. Rather not say \n ---> ");
    scanf("%d", &pt[*in].gender);
    if(pt[*in].gender < 1 || pt[*in].gender > 4)
    {
        printf("\nInvalid input!!");
    }
    else
    {
        break;
    }

    }
    }
    scanf("%c", &temp);
    printf("\nEnter your address: ");
    scanf("%[^\n]s", &pt[*in].address);
    printf("Enter your phone number: ");
    scanf("%ld", &pt[*in].ph);
    scanf("%c", &temp);
    printf("Enter your symptom: ");
    scanf("%[^\n]s", &pt[*in].symptoms);
    pt[*in].status = 1;
    printf("Patient status: Ongoing treatment");
   while(fscanf(fp, "\n%s %s %s %d %d %d %s %s %ld %d %d %d %d", tmp.name, tmp.mname, tmp.lname, &tmp.year,
            &tmp.month, &tmp.day, tmp.address, tmp.symptoms, &tmp.ph, &tmp.gender,
            &tmp.code, &tmp.status, &tmp.firstime) != EOF)
            {
                pt[*in].code = tmp.code + 1;
            }

    fprintf(fp, "\n%s %s %s %d %d %d %s %s %ld %d %d %d %d", pt[*in].name, pt[*in].mname, pt[*in].lname, pt[*in].year,
            pt[*in].month, pt[*in].day, pt[*in].address, pt[*in].symptoms, pt[*in].ph, pt[*in].gender,
            pt[*in].code, pt[*in].status, pt[*in].firstime);
    fclose(fp);
    }
void print(int *index) //print all the info on the pt[index]
{
        //pt[*index].code = *index + 1000; //for now code is index + 1000 but when file handling it will be previous user code + 1
        printf("\nInfo: \n\n");
        printf("\nName: %s %s %s",pt[*index].name, pt[*index].mname, pt[*index].lname);
        printf("\nDate of birth: %d-%d-%d",pt[*index].year,pt[*index].month, pt[*index].day);
        switch(pt[*index].gender)
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
            printf("\nNot disclosed by the patient");
            break;
        default:
            printf("\nERROR");

        }

        printf("\nAddress: %s", pt[*index].address);
        printf("\nPhone number: %ld", pt[*index].ph);
        printf("\nSymptom: %s", pt[*index].symptoms);
        for(int i = 0; i < 100; ++i)
        {
            if(strcmp(pt[*index].symptoms, d[i].special) == 0)
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

#endif // ADD-AND-PRINT_H_INCLUDED
