#include <stdio.h>
#include <stdlib.h>
#include<string.h>

void guide();
void login();
void guide();


// Main function
int main() {
	printf("                                                                                ________________________________________________\n");
    printf("                                                                               |           EXPENDITURE MANAGEMENT SYSTEM        |\n");
    printf("                                                                               |________________________________________________|\n\n");
    guide();
int choice;
	printf(" \n\n                                                                              Enter your choice here : ");
	scanf("%d",&choice);

	switch(choice) {
		/*case 1 : {
			void register();
		     break;
			 } */

		case 2 :{
		          login();
		         break;	 
		        }	 

	    /*case 3 :{
		          update();
				 break;
				 }

	     case 4 :{
			      status();
				 break;
				 } 

	    case 5 : {
			       guide();
				  break;
				  } */
				  default : printf("invalid choice");
	}
     	
	 	return 0;
}





// This function represents various operations performed in this program.
void guide() {
printf("\n\n");
printf("                                                                                      1.    REGISTER\n");
printf("                                                                                      2.    LOGIN\n");
printf("                                                                                      3.    UPDATE\n");	
printf("                                                                                      4.    STATUS\n");	
//printf("                                                                                      5.    HOME PAGE\n");	
}



// Function to login using an existing username and password.
void login() {

	char defaultUser[10]="minimizer";
      char defaultPassword[10]="123";
     char userName[10], passWord[10];
     int chance = 5;

     do {
     	printf("\n\t\t                                                                          USERNAME : ");
     	scanf("%s",userName);
     	
     	int test = strcmp(userName, defaultUser);
     	
     	if(test == 0) { 
     	printf("                                                                                          PASSWORD : "); 
     	scanf("%s",passWord);
     	
     	test = strcmp(passWord, defaultPassword);
     	if(test == 0) {
     		    printf("\n                                                                                             ---LOGIN SUCCESSFUL---\n\n\n");
	printf("                                                                                ________________________________________________\n");
    printf("                                                                               |    WELCOME TO EXPENDITURE MANAGEMENT SYSTEM    |\n");
    printf("                                                                               |________________________________________________|\n\n");
     			exit(0);
     			} else {
                printf(" \n                                                                                        INVALID PASSWORD ! TRY AGAIN\n\n");
                   chance--; 
               }
     	}
		 else {
     	 printf("\n                                                                                        INVALID USERNAME ! TRY AGAIN\n\n");
     	 chance--;
        }
     	 if(chance == 0)
		 printf("\n\n                                                                                                   ACCESS DENIED");
     		
		 }while(chance != 0);

}
