#ifndef DOCTABLE_H_INCLUDED
#define DOCTABLE_H_INCLUDED

void docttable()
{
    printf("\n+--------------------------------------------------------------------------------------------------------+");
    printf("\n| NMC No.  |			Name 		 |	    Speciality         | 	Availablity      |");
    printf("\n|--------------------------------------------------------------------------------------------------------|");
}
void printable(int i)
{
    if(d[i].nmc == -1)
    {
        ;
    }
    else if(strcmp(d[i].mname, "skipped") != 0)
    {
    printf("\n| %d           |	%s   %s   %s        |	%s        |	%s          |",d[i].nmc,d[i].fname,d[i].mname,d[i].lname,d[i].special,d[i].docfree);
    }
    else
    {
        printf("\n| %d           |	%s     %s        |	%s        |	%s          |",d[i].nmc,d[i].fname,d[i].lname,d[i].special,d[i].docfree);
    }
    printf("\n+--------------------------------------------------------------------------------------------------------+\n");

}

void printdoc()
{
    fileread();
    docttable();
    for(int z = 0; z < 9999 && d[z].nmc != 0; z++)
    {
        printable(z);
    }
}

#endif // DOCTABLE_H_INCLUDED
