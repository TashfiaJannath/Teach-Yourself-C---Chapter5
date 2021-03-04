/* computerized dictionary process. */

#include<stdio.h>
#include<string.h>

int main(void){

    char dict [][2][40]={
        "house", "a place of dwelling",
        "car", "a vehicle",
        "computer", "a thinking machine",
        "program", "a sequence of instructions",
        "", ""
    };
    char word[80];
    int i;

    printf("Enter word: ");
    gets(word);

    /* look up the word */
    i=0;
    /* search while null string not yet encountered */
    while(strcmp(dict[i][0], "")){
        if(!strcmp(word, dict[i][0])){
            printf("meaning: %s", dict[i][1]);
            break;
        }
        i++;
    }
    if(!strcmp(dict[i][0], ""))
    printf("Not in dictionary\n");


    return 0;
}
