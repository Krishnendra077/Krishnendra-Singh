// file handling operations
//a. file write operation
//b.string lenght calculation
//c.file append operation
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    FILE *ptr = NULL;
    ptr = fopen("file.txt", "w");
    char str[20];
    printf("what you want to write in text file\n");
    scanf("%s", str);
    fprintf(ptr, "%s", str);
    fclose(ptr);
    printf("\n");

    printf("this data print from the text file\n");
    ptr = fopen("file.txt", "r");
    char str1[20];
    fscanf(ptr, "%s", str1);
    printf("%s\n", str1);
    fclose(ptr);

    ptr = fopen("file.txt", "a");
    char str2[20];
    printf("add more data without removing previous data\n");
    scanf("%s",str2);
    fprintf(ptr, "%s", str2);
    fclose(ptr);

    

    return 0;
}