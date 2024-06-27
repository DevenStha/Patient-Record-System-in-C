#ifndef SEARCH-N-MODIFY_H_INCLUDED
#define SEARCH-N-MODIFY_H_INCLUDED
void modify()
{
    int code;
    long ph;
    char temp;
    int in;
    int tmp = 0;
    int type;
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
        scanf("%ld",&ph);
    }
  // FILE *fp;
    //fp = ("patient.txt", "r");
    for(int i = 0; i < 9999; i++)
    {
            if(pt[i].code == code && pt[i].code != 0 || pt[i].ph == ph && pt[i].ph != 0){
                tmp = 1;
                in = i;
                fileprint(i);
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
    printf("\n\nInfo: Enter Ctrl + C where you don't want to make any changes for now\n\n");
    printf("\nNew first name: ");
    scanf("%c", &temp);
    scanf("%[^\n]s", pt[in].name);
    printf("\nNew middle name: ");
    scanf("%c", &temp);
    scanf("%[^\n]s", pt[in].mname);
    printf("\nNew last name: ");
    scanf("%c", &temp);
    scanf("%[^\n]s", pt[in].lname);
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
    scanf("%[^\n]s", pt[in].symptoms);
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
    filewrite();
    }
    else{printf("\nInvalid code!");}
    }
#endif // SEARCH-N-MODIFY_H_INCLUDED
