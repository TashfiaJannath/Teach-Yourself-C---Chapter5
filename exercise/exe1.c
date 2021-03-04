#include<stdio.h>

int main(){

    int a[10],i,j,k,match;

    printf("Enter ten numbers: ");


    for(i=0;i<10;i++){
        scanf(" %d", &a[i]);}

    for(j=0;j<10;j++){
            match=a[j];
        for(k=j+1;k<10;k++){

            if(match==a[k])
                printf(" %d is duplicated.\n", match);}}}
