#ifndef USER_H_INCLUDED
#define USER_H_INCLUDED

struct patient
{
    char name[99];
    char mname[99];
    char lname[99];
    int year;
    int month;
    int day;
    char address[99];
    long ph;
    char symptoms[999];
    int gender;
    int code;
    int status;
    int firstime;
}pt[9999];

struct tempuser
{
    char name[99];
    char mname[99];
    char lname[99];
    int year;
    int month;
    int day;
    char address[99];
    char symptoms[999];
    long ph;
    int gender;
    int code;
    int status;
    int firstime;
}tmp;

#endif // USER_H_INCLUDED
