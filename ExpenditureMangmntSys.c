/* Drop your codes here */
#include<stdio.h>
#include<string.h>
#include<windows.h>
//decalre ypur functions here
void login();
int check(char a[], char b[]);

//main function
int main(void) {
     login();
     printf("\nHello wrold");
}


//define your functions here
void login(){
     system("cls");
     char UserPsswrd[10];
     char UserNameInpt[10];
     printf("\n\n\n\n\n\n##########################################################################################################################################################################");
     printf("\n\n\n\t\t\t\t\t\t\t\t\t EXPENDITURE MANAGEMENT SYSTEM");
     printf("\n\n\n\t\t\t\t\t\t\t\t\t USERNAME : \t");
     scanf("%s",UserNameInpt);
     printf("\n\n\t\t\t\t\t\t\t\t\t PASSWORD : \t");
     scanf("%s",&UserPsswrd);
     if(check(UserNameInpt, UserPsswrd)){
          printf("hi");
     }

}

int check(char a[], char b[]){
     char User[] = "Admin";
     char Pass[] = "13579";
     return(strcmp(User, a) && strcmp(Pass, b));
}