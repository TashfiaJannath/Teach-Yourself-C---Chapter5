#include<stdio.h>
#include<string.h>

int main(void){

    char str[80];
    int i;

    printf("Enter a string: ");
    gets(str);

    /* pad the string if necessary */
    for(i=strlen(str); i<79; i++)
        printf(str);

        return 0;
     }
