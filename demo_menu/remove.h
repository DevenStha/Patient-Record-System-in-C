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
    pt[i].code = -1;
    pt[i].status = 0;
    pt[i].firstime = 0;
}

void rmdoc(int i)
{
    strcpy(d[i].special, "rm");// = {"cough", "headache", "physician", "chest pain", "eye"};
    strcpy(d[i].fname ,"rm");
    strcpy(d[i].mname ,"rm");
    strcpy(d[i].lname ,"rm");// = {"Shital Dhaka", "Kaushal Shrestha", "Ramesh Chalise", "Anil Sharma", "Safal Thapa"};
    d[i].nmc;// = {1000, 1001, 1002, 1003, 1004};
    strcpy(d[i].docfree ,"rm");
}
#endif // REMOVE_H_INCLUDED
