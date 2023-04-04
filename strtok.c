#include<stdio.h>
#include<string.h>

int main(){
    char s[20];
    gets(s);
    char *word;
    word=strtok(s," ");
    while (word!=NULL){
        printf("%s\n", word);
        word = strtok(NULL," ");
    }
}
