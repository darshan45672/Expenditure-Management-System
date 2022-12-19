/* Drop your codes here */

#include<stdio.h>
#include<string.h>
#include<windows.h> // new header file instead of <conio.h>
//decalre ypur functions here
void login();
void acess();

//main function
int main(void) {
     login();
     system("cls");
     acess();
}


//define your functions
void login(){
     system("cls");    //to clear the terminal screen
     char UserPsswrd[10], UserNameInpt[10];
     int count = 0;
     do{
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
          printf("\n\n\n\t\t\t\t\t\t\t\t\tInvalid Username\n");    // displaying invalid username if entered username is wrong
     }
     printf("\n\n\n#######################################################################################################################################################################");
     count++;
  }while(count==5); 
  if (count==5){
     printf("acess denied");
  }
}
void acess(){
     system("cls");
     printf("\n-------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n ");
     printf("\n\t\t\t\t\t\t\t\t\t WELCOME \n");
     printf("\n-------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n ");
     printf("\n\n\n\n");
     printf("Press < 0 > to exit");
     printf("\nPress < 1 > for Info ");
     printf("\nPress < 2 > to check");


}
