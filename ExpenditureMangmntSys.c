/* Drop your codes here */
#include<stdio.h>
#include<string.h>
#include<windows.h>
//decalre ypur functions here
void login();

//main function
int main(void) {
     login();
     printf("\nHello wrold");
}


//define your functions here
void login(){
     system("cls");
     char UserPsswrd[10], UserNameInpt[10];
     printf("\n\n\n\n\n\n##########################################################################################################################################################################");
     printf("\n\n\n\t\t\t\t\t\t\t\t\t EXPENDITURE MANAGEMENT SYSTEM");
     printf("\n\n\n\t\t\t\t\t\t\t\t\t USERNAME : \t");
     scanf("%s",UserNameInpt);
     printf("\n\n\t\t\t\t\t\t\t\t\t PASSWORD : \t");
     scanf("%s",&UserPsswrd);
     if(strcmp(UserNameInpt, "Admin")==0){
          if (strcmp(UserPsswrd, "13579")==0)
          {
               printf("\n\n\n\t\t\t\t\t\t\t\t\tLogin Sucessfull !!\n");
               printf("\n\t\t\t\t\t\t\t\t\tWelcome %s \n",UserNameInpt);
          }
          else{
               printf("\n\n\n\t\t\t\t\t\t\t\t\tInvalid Password\n");
          }
     }
     else{
          printf("\n\n\n\t\t\t\t\t\t\t\t\tInvalid Username\n");
     }
}
