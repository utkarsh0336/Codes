#include <stdio.h>
#include <conio.h>
int main()
{
    char str[100];
    char upper_str[100];
    // int length;
    int i = 0, j = 0;
    printf("Enter the string:\n");
    gets(str);
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            upper_str[j] = str[i] - 32;
        else
            upper_str[j] = str[i];
        i++;
        j++;
    }
    upper_str[j] = '\0';
    printf("\nThe string converted into upper case : ");
    puts( upper_str);
    /*length = i;
    printf("%d", length);*/
    return 0;
}