/* Drop your codes here */
#include<stdio.h>
#include<string.h>
#include<windows.h> // new header file instead of <conio.h>
//decalre ypur functions here
void login();

//main function
int main(void) {
     login();
     printf("\nHello wrold");
}


//define your functions here
void login(){
     system("cls");    //to clear the terminal screen
     char UserPsswrd[10], UserNameInpt[10];
     printf("\n\n\n\n\n\n#######################################################################################################################################################################");
     printf("\n\n\n\t\t\t\t\t\t\t\t\t EXPENDITURE MANAGEMENT SYSTEM");
     printf("\n\n\n\t\t\t\t\t\t\t\t\t\t USER LOGIN");
     printf("\n\n\n\t\t\t\t\t\t\t\t\t USERNAME : \t");  //taking username from user
     scanf("%s",UserNameInpt);
     printf("\n\n\t\t\t\t\t\t\t\t\t PASSWORD : \t");  //taking password from the user
     scanf("%s",&UserPsswrd);
     if(strcmp(UserNameInpt, "Admin")==0){               //comparing user given username and original user name using built in function
          if (strcmp(UserPsswrd, "13579")==0)             //comparing user given password and original user password using built in function
          {
               printf("\n\n\n\t\t\t\t\t\t\t\t\tLogin Sucessfull !!\n");
               printf("\n\t\t\t\t\t\t\t\t\tWelcome %s \n",UserNameInpt);
          }
          else{
               printf("\n\n\n\t\t\t\t\t\t\t\t\tInvalid Password\n");    //displaying invalid password if password is correct though username is correct
          }
     }
     else{
          printf("\n\n\n\t\t\t\t\t\t\t\t\tInvalid Username\n");    // 
     }
     printf("\n\n\n#######################################################################################################################################################################");
}
