#ifndef FILEPRINT_H_INCLUDED
#define FILEPRINT_H_INCLUDED

void fileprint(int index)
{
        //tmp.code = *index + 1000; //for now code is index + 1000 but when file handling it will be previous user code + 1
          // FILE *fp;
        //   fp = fopen("patient.txt", "a+");
           /*while(fscanf(fp, "%s %s %s %d %d %d %s %s %ld %d %d %d %d\n", tmp.name, tmp.mname, tmp.lname, &tmp.year,
            &tmp.month, &tmp.day, tmp.address, tmp.symptoms, &tmp.ph, &tmp.gender,
            &tmp.code, &tmp.status, &tmp.firstime) != EOF)
            {
                if(tmp.code == code)
                {
        */
        printf("\nInfo: \n\n");
        printf("\nName: %s %s %s",pt[index].name, pt[index].mname, pt[index].lname);
        printf("\nDate of birth: %d-%d-%d",pt[index].year,pt[index].month, pt[index].day);
        switch(pt[index].gender)
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

        printf("\nAddress: %s", pt[index].address);
        printf("\nPhone number: %ld", pt[index].ph);
        printf("\nSymptom: %s", pt[index].symptoms);
        for(int i = 0; i < 100; ++i)
        {
            if(strcmp(pt[index].symptoms, d[i].special) == 0)
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
        switch(pt[index].status)
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
        printf("\nYour code is %d", pt[index].code);
        /*if(pt[index].firstime == 2) //for adding
        {
            //++*index;
        }*/
    //    fclose(fp);
//        break;
}


void fileprintd(int findex)
{
    printf("\n\nDOCTOR NUMBER %d", findex + 1);
    printf("\nDoctor name: %s", td.person);
    printf("\nDoctor speciality: %s", td.special);
    printf("\nDoctor age: %d", td.age);
    printf("\nDoctor NRN num: %d", td.nmc);
    printf("\nDoctor Phone number: %ld", td.ph);
}
#endif // FILEPRINT_H_INCLUDED
