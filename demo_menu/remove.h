#ifndef REMOVE_H_INCLUDED
#define REMOVE_H_INCLUDED

void rmpatient(int i)
{
    strcpy(pt[i].name, "rm");
    strcpy(pt[i].mname, "rm");
    strcpy(pt[i].lname, "rm");
    pt[i].year = 0;
    pt[i].month = 0;
    pt[i].day = 0;
    strcpy(pt[i].address, "rm");
    strcpy(pt[i].ph, "rm");
    strcpy(pt[i].symptoms, "rm");
    pt[i].gender = 0;
    pt[i].status = 0;
    pt[i].firstime = 0;
    for(int x = 0; x < 9999; x++)
    {
        if(pt[i].nmc == d[x].nmc)
        {
            d[x].occupied = 0;
            filedwrite();
            pt[i].nmc = -100;
            break;
        }
    }
    printf("\nPatient successfully removed!!");
}

void rmdoc(int i)
{
    strcpy(d[i].special, "rm");
    strcpy(d[i].fname ,"rm");
    strcpy(d[i].mname ,"rm");
    strcpy(d[i].lname ,"rm");
    strcpy(d[i].docfree ,"rm");
    d[i].occupied = 1;
    for(int x = 0; x < 9999; x++)
    {
        if(d[i].nmc == pt[x].nmc)
        {
            pt[i].nmc = -1;
            filewrite();
            printf("\nWARNING: Patient with the code %d has been put on hold!!!", pt[x].code);
            break;
        }
    }
    d[i].nmc = -1;
    printf("\nDoctor successfully removed");
}
#endif // REMOVE_H_INCLUDED
