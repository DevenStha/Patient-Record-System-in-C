#ifndef RMSPACE_H_INCLUDED
#define RMSPACE_H_INCLUDED

void dash(char *feedme[999])
{
    char giveme[999];
    strcpy(giveme, feedme);
    for(int i = 0; i < 999; i++)
    {
        if(giveme[i] == ' ')
        {
            giveme[i] = '-';
        }
    }
    strcpy(feedme, giveme);
}
#endif // RMSPACE_H_INCLUDED
