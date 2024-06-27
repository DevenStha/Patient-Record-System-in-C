#ifndef FILEREAD_H_INCLUDED
#define FILEREAD_H_INCLUDED

void fileread()
{
    FILE *fp;
    fp = fopen("patient.txt", "r");
    FILE *fp1 = fopen("doctor.txt", "r");
	int i = 0;
	int j = 0;
    while(fscanf(fp, "%98s %98s %98s %d %d %d %98s %998s %ld %d %d %d %d\n", pt[i].name, pt[i].mname, pt[i].lname, &pt[i].year,
                 &pt[i].month, &pt[i].day, pt[i].address, pt[i].symptoms, &pt[i].ph, &pt[i].gender,
                 &pt[i].code, &pt[i].status, &pt[i].firstime) != EOF)
    {
        i++;
        tmp.code = pt[i-1].code + 1; //for incrementing the code by one while adding new user
    }
    while(fscanf(fp1, "\n%s %s %d %d %ld", d[j].person, d[j].special, &d[j].age, &d[j].nmc, &d[j].ph) != EOF)
    {
        j++;
    }
    fclose(fp);
    fclose(fp1);
}


#endif // FILEREAD_H_INCLUDED
