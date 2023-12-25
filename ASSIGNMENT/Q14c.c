// concatenation of two string
#include<stdio.h>
#include<string.h>
int main(){
     char str1[100] = " eventing is temporary ";
     char str2[100] = " unless god make it permanent ";

     // concatenating for str1 and str2
     strcat(str1,str2);
     printf("my concatenating string is : %s ",str1);
return 0;
}