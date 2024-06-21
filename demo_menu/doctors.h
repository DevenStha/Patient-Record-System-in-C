#ifndef DOCTORS_H_INCLUDED
#define DOCTORS_H_INCLUDED

struct doctor //doctor
{
    char special[99];// = {"cough", "headache", "physician", "chest pain", "eye"};
    char person[99];// = {"Shital Dhaka", "Kaushal Shrestha", "Ramesh Chalise", "Anil Sharma", "Safal Thapa"};
    int nmc;// = {1000, 1001, 1002, 1003, 1004};
    int age;
    long ph;// = {987372892, 39298372, 3892738, 1628792, 78372};
}d[999];

struct tempdoctor
{
    char special[99];// = {"cough", "headache", "physician", "chest pain", "eye"};
    char person[99];// = {"Shital Dhaka", "Kaushal Shrestha", "Ramesh Chalise", "Anil Sharma", "Safal Thapa"};
    int nmc;// = {1000, 1001, 1002, 1003, 1004};
    int age;
    long ph;
}td;

#endif // DOCTORS_H_INCLUDED
