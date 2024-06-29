#ifndef ASSIGN_DOC_H_INCLUDED
#define ASSIGN_DOC_H_INCLUDED

void assigndoc(char symp[999], int *valid)
{
//    int giveme[99] = valid;
    docttable();
    int j = 0;
    int index = 0;
    int iterate = 0;
    for(int i = 0; i < 99 && d[i].nmc > 0; i++)
    {
        if(strcmp(symp, d[i].special) == 0 && d[i].occupied != 1)
        {
            printable(i);
            valid[j] = d[i].nmc;
            j++;
            iterate++;
        }
    }
    if(iterate == 0)
    {
        valid[0] = 0;
    }
}

#endif // ASSIGN_DOC_H_INCLUDED
