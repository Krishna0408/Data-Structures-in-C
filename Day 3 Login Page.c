#include<stdio.h>
int main(){
char user_name1[100]={'Devil'};
char password1[50]={'1234'};
char user_name[100];
char password[50];
int i,j;

printf("Enter User Name : ");
gets(user_name);
printf("\nEnter Password : ");
gets(password);

if((strcmp(user_name1,user_name)==0) && (strcmp(password1,password)==0)){
    printf("\n\nLogin Success !");
}
else{
    printf("\n\nLogin Failed !");
}
return 0;
}
