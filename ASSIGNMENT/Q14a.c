#include <stdio.h>
#include <string.h>

char strrev(char str1[100], int len)

{
    char c;
    for (int i = 0; i < len / 2; i++)
    {
        c = str1[i];
        str1[i] = str1[len - 1 - i];
        str1[len - 1 - i] = c;
    }
}
int main()
{
    printf("enter the string :");
    char str1[100];
    scanf("%s", str1);
    printf("%s ", str1);
    int len = strlen(str1);

    char str2[100];
    strcpy(str2, str1);
    strrev(str1, len);
    int a = strcmp(str1, str2);
    if (a == 0)
    {
        printf("it is a palindrome :");
    }
    else
        printf("it is not a palindrome :");
    return 0;
}