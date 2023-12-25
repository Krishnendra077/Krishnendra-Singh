// Calculating the length of the string using the function
#include <stdio.h>
#include <string.h>

int main()
{
    char ch;
    char str[100];
    int i = 0;
    printf("enter the string :\n");
    while (ch !='\n')
    {
        scanf("%c",&ch);
        str[i] = ch;
       if (ch == '\n')
       {
        str[i] = '\0';
        break;
       }
        i++;
    }
   
    printf("length of the string %d",i);

    return 0;
}
