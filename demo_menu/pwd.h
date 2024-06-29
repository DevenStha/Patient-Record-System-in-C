#ifndef PWD_H_INCLUDED
#define PWD_H_INCLUDED

void readpwd()
{
    FILE *fp = fopen("pwd.txt", "r");
    FILE *fp1 = fopen("username.txt", "r");
    fscanf(fp, "%[^\n]s", ad.pwd);
    fscanf(fp1, "%[^\n]s", ad.username);
    fclose(fp);
    fclose(fp1);
}

void writepwd()
{
    char tmp;
    char c;
    int i = 0;
    char pwd[99];
    printf("Enter current admin username: ");
    scanf("%c", &tmp);
    scanf("%[^\n]s", tad.username);
    printf("Enter current admin password: ");
    while((c = _getch()) != 13) //keep asking spass value until user inputs 13('\n') for some reason
    {                               //writing '\n' doesn't work and I had to write 13
        tad.pwd[i] = c; //assign spass to pass[c] which is 0 and increments
        i++; //++
        printf("*"); //replace character on screen with *
    }
    strcpy(pwd, tad.pwd);
    if(strcmp(tad.username, ad.username) == 0 && strcmp(pwd, ad.pwd) == 0)
    {
        FILE *fp = fopen("pwd.txt", "w");
        FILE *fp1 = fopen("username.txt", "w");
        int i = 0;
        char c;
        char tmp[99];
        memset(ad.pwd, '\0', sizeof(ad.pwd));
        printf("\nEnter new username: ");
        scanf("%s", ad.username);
        printf("Enter new password: ");
        while((c = _getch()) != 13) //keep asking spass value until user inputs 13('\n') for some reason
        {                               //writing '\n' doesn't work and I had to write 13
            ad.pwd[i] = c; //assign spass to pass[c] which is 0 and increments
            i++; //++
            printf("*"); //replace character on screen with *
        }
        fprintf(fp, "%s", ad.pwd);
        fprintf(fp1, "%s", ad.username);
        fclose(fp);
        fclose(fp1);
    }
    else
    {
        printf("\nWrong credentials!");
    }
}
#endif // PWD_H_INCLUDED
