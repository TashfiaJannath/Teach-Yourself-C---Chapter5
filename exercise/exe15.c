/* A simple game of Hangman */
#include<stdio.h>
#include<string.h>

int main(void){

    char word[]="concatenation";
    char temp[]="-------------";
    char ch;
    int i,count;

    count=0; /* count number of guesses */

    do{
        printf("%s\n", temp);
        printf("Enter your guess: ");
        ch=getchar();
        printf("\n");

        /* see if letter matches any in word */
        for(i=0;i<strlen(word);i++)
            if(ch==word[i]) temp[i]=ch;
            count++;
        } while(strcmp(temp,word));

    printf("%s\n", temp);
    printf("You guessed the word and used %d guesses",count);

    return 0;
}
