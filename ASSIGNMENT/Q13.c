// reverse the string without using function
#include <stdio.h>
#include <string.h>
int main()
{

    char str[100];
    char ch;
    int i, count = 0;
    printf("enter the vale of the string :");

    for (int i = 0; i < 100; i++)
    {
        scanf("%c", &str[i]);

        if (str[i] == '\n')
        {
            break;
        }
        count++;
    }
    str[count] = '\0';
    puts(str);
    // reversing of the string 
    for (int i = count - 1; i >= 0; i--)
    {
        printf("%c ", str[i]);
    }

    int length = strlen(str);
    printf("length of the string %d", length);

    return 0;
}