#ifndef FILEPRINT_H_INCLUDED
#define FILEPRINT_H_INCLUDED

void fileprint(int code)
{
        //tmp.code = *index + 1000; //for now code is index + 1000 but when file handling it will be previous user code + 1
           FILE *fp;
           fp = fopen("patient.txt", "a+");
           while(fscanf(fp, "\n%s %s %s %d %d %d %s %s %ld %d %d %d %d", tmp.name, tmp.mname, tmp.lname, &tmp.year,
            &tmp.month, &tmp.day, tmp.address, tmp.symptoms, &tmp.ph, &tmp.gender,
            &tmp.code, &tmp.status, &tmp.firstime) != EOF)
            {
                if(tmp.code == code)
                {

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
            printf("\nNot disclosed by the patient");
            break;
        default:
            printf("\nERROR");

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
        /*if(tmp.firstime == 2) //for adding
        {
            //++*index;
        }*/
        fclose(fp);
        break;
}
            }
}

#endif // FILEPRINT_H_INCLUDED
