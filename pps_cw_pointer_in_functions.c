#include <stdio.h>
#include <ctype.h>
#include <conio.h>
char count(char line[], int *vc, int *cc, int *dc, int *wc, int *oc);
void main()
{

    char line[80];
    int vc = 0, cc = 0, dc = 0, wc = 0, oc = 0;
    printf("Enter any string\n");
    gets(line);
    char count(line, &vc,&cc, &dc, &wc, &oc);
    printf("\n Vowel count = %d", vc);
    printf("\n Consonant count = %d", cc);
    printf("\n Digit count = %d", dc);
    printf("\n Whitespace char count = %d", wc);
    printf("\n Other char count = %d", oc);

    return 0;
}
char count(char line[], int*vc, int *cc, int *dc, int*wc, int*oc)
{
    int i;
    char ch;
    for(i=0; ch=toupper(line[i])!='\0';i++)
    {
        if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        ++*vc;
        else
        if(ch>='A'&&ch<='Z')
        ++*cc;
        else
        if(ch>='0'&&ch<='9')
        ++*dc;
        else
        if(ch=='\n'||ch=='\t'||ch==' ')
        ++*wc;
        else
        ++*oc;
        return;
    }
}