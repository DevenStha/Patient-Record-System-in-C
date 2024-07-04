#ifndef DOCTORS_H_INCLUDED
#define DOCTORS_H_INCLUDED

struct doctor //doctor
{
    char special[999];
    char fname[99];
    char mname[99];
    char lname[99];
    int nmc;
    char docfree[99];
    int occupied;
}d[9999];

struct tmpdoc
{
    char special[999];
    char fname[99];
    char mname[99];
    char lname[99];
    int nmc;
    char docfree[99];
    int occupied;
}td;

#endif // DOCTORS_H_INCLUDED
