#ifndef SEARCH-N-MODIFY_H_INCLUDED
#define SEARCH-N-MODIFY_H_INCLUDED
void modify(int rm) //if rm is 1 it will remove the specified data
{
    int code;
    char ph[11];
    char temp;
    int in;
    int tmp = 0;
    int type;
    char mp[99];
    printf("Search by phone number or code(Enter 1 for phone number, 2 for code):\n1.Phone Number\n2.Code\n---> ");
    scanf("%d", &type);
    if(type == 2)
    {
    printf("Please enter the patient's code: ");
    scanf("%d", &code);
    }
    else
    {
        printf("Please enter patient's phone number: ");
        scanf("%s",&ph);
    }
  // FILE *fp;
    //fp = ("patient.txt", "r");
    for(int i = 0; i < 9999; i++)
{
            if(pt[i].code == code && pt[i].status > 0 || strcmp(pt[i].ph, ph) == 0 && pt[i].status > 0){
                tmp = 1;
                in = i;
                fileprint(i);
                if(rm == 1)
                {
                    printf("\nThat data is gone now.\n");
                    rmpatient(i);
                    filewrite();
                    return; //return void for void
                }
                //fclose(fp);
                break;
                //return true;
                } //returns index where the code was found
    }
   // fclose(fp);
    if(tmp == 1) //future use is here it means code is found
        {
        printf("\n\nDo you want to modify the data?(Enter 1 for Yes, 2 for No)\n1.Yes\n2.No\n---> ");
        scanf("%d", &tmp);
    }
    if(tmp == 1)
    {
    while(true)
    {
    printf("Is the patient ongoing treatment, transferred or cured?: \n 1. Ongoing \n 2. Transferred \n 3. Cured\n ---> ");
    scanf("%d", &pt[in].status);
    if(pt[in].status < 1 || pt[in].status > 3)
    {
        printf("\nInvalid status!!");
    }
    else if(pt[in].status == 2 || pt[in].status == 3)
    {
        for(int i = 0; i < 9999; i++)
        {
            if(d[i].nmc == pt[in].nmc)
            {
                d[i].occupied = 0;
                pt[i].nmc = -1;
                filedwrite();
                return;
            }
        }
    }
    else{
        break;
        }
    }
    printf("\nNew first name: ");
    scanf("%c", &temp);
    scanf("%[^\n]s", pt[in].name);
    dash(&pt[in].name);
    printf("\nNew middle name: ");
    scanf("%c", &temp);
    scanf("%[^\n]s", pt[in].mname);
    if(strcmp(pt[in].mname, mp) == 0)
    {
        strcpy(pt[in].mname, "none");
    }
    dash(&pt[in].mname);
    printf("\nNew last name: ");
    scanf("%c", &temp);
    scanf("%[^\n]s", pt[in].lname);
    dash(&pt[in].lname);
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
    scanf("%[^\n]s", pt[in].address);
    dash(&pt[in].address);
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
    scanf("%c", &temp);
    scanf("%[^\n]s", pt[in].ph);
    dash(&pt[in].ph);
    printf("\nNewer/updated symptom: ");
    scanf("%c", &temp);
    scanf("%[^\n]s", pt[in].symptoms);
    dash(&pt[in].symptoms);
    strlwr(pt[in].symptoms);
    int vldnmc[99];
    assigndoc(pt[in].symptoms, &vldnmc);
   // int nmc[99];
    int vld = 0;
    while(vld == 0)
    {
    if(vldnmc[0] == 0)
    {
        printf("\nNo doctors available or free for your symptoms :(");
        pt[in].nmc = -1;
        break;
    }
    printf("\nChoose doctor by typing NMC number: ");
    scanf("%d", &pt[in].nmc);
    for(int x = 0; x < 99 && pt[in].nmc > 0; x++)
    {
        if(vldnmc[x] == pt[in].nmc)
        {
            vld = 1;
            printf("\nDoctor sucessfully choosen");
            for(int x = 0; x < 9999; x++)
            {
                if(pt[in].nmc == d[x].nmc)
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
    filewrite();
    fileprint(in);
}
    else{
        printf("\nInvalid code!");
    }
}

#endif // SEARCH-N-MODIFY_H_INCLUDED
