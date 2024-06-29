#ifndef DOCTORS_H_INCLUDED
#define DOCTORS_H_INCLUDED

struct doctor //doctor
{
    char special[999];// = {"cough", "headache", "physician", "chest pain", "eye"};
    char fname[99];
    char mname[99];
    char lname[99];// = {"Shital Dhaka", "Kaushal Shrestha", "Ramesh Chalise", "Anil Sharma", "Safal Thapa"};
    int nmc;// = {1000, 1001, 1002, 1003, 1004};
    char docfree[99];
    int occupied;// = {987372892, 39298372, 3892738, 1628792, 78372};
}d[999];

struct tmpdoc
{
    char special[999];// = {"cough", "headache", "physician", "chest pain", "eye"};
    char fname[99];
    char mname[99];
    char lname[99];// = {"Shital Dhaka", "Kaushal Shrestha", "Ramesh Chalise", "Anil Sharma", "Safal Thapa"};
    int nmc;// = {1000, 1001, 1002, 1003, 1004};
    char docfree[99];
    int occupied;
}td;

#endif // DOCTORS_H_INCLUDED
