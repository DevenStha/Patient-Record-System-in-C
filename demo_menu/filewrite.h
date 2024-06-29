#ifndef FILEWRITE_H_INCLUDED
#define FILEWRITE_H_INCLUDED

void filewrite()
{
    FILE *pp;
    pp = fopen("patient.txt", "w");
    int i;
    for(i = 0; i < 9999 && pt[i].code != 0; i++)
    {
    fprintf(pp, "%s %s %s %d %d %d %s %s %s %d %d %d %d %d\n", pt[i].name, pt[i].mname, pt[i].lname, pt[i].year,
    pt[i].month, pt[i].day, pt[i].address, pt[i].symptoms, pt[i].ph, pt[i].gender,
    pt[i].code, pt[i].status, pt[i].firstime, pt[i].nmc);
    }
    fclose(pp);
}
void filedwrite()
{
    FILE *dd = fopen("doctor.txt", "w");
    for(int i = 0; i < 9999 && d[i].nmc !=0; i++)
    {
        fprintf(dd, "%s %s %s %d %s %s %d\n", d[i].fname, d[i].mname, d[i].lname, d[i].nmc, d[i].special, d[i].docfree, d[i].occupied);
    }
    fclose(dd);
}

#endif // FILEWRITE_H_INCLUDED
