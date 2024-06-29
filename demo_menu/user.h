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
    char ph[11];
    char symptoms[999];
    int gender;
    int code;
    int status;
    int firstime;
    int nmc;
    /*char docf[99];
    char docm[99];
    char docl[99];
    char docs[999];
    char docfree[99];*/
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
    char ph[11];
    int gender;
    int code;
    int status;
    int firstime;
    int nmc;
}tmp;

struct admin
{
    char username[99];
    char pwd[99];
}ad;
struct tmpadmin
{
    char username[99];
    char pwd[99];
}tad;
#endif // USER_H_INCLUDED
