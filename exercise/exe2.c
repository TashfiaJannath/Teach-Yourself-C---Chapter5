#include<stdio.h>
#include<stdlib.h>

int main(void){

    float item[100],t;
    int a,b;
    int count;

    //read in numbers

    printf("How many numbers? ");
    scanf(" %d", &count);

    for(a=0;a<count;a++)
    scanf(" %f", &item[a]);

    /*now sort them using a bubble sort*/

    for(a=1;a<count;++a){
        for(b=count-1; b>=a;--b){
            /*compare adjacent elements */

            if(item[b-1]>item[b]){
                /*exchange elements*/
                t=item[b-1];
                item[b-1]=item[b];
                item[b]=t;
                }}}
            /* display sorted list */
            for(a=0;a<count;a++)
            printf("%f ", item[a]);


            return 0;
    }
