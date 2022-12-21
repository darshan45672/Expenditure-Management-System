#include <stdio.h>
#include <stdlib.h>
#include<string.h>

void registration();
void entry();
void guide();
void login();
void guide();

struct details {
char  userName[20];
char  passWord[20];
};


// Main function
int main() {
	printf("                                                                                ________________________________________________\n");
    printf("                                                                               |           EXPENDITURE MANAGEMENT SYSTEM        |\n");
    printf("                                                                               |________________________________________________|\n\n");
    entry();
int choice;
	printf(" \n\n                                                                              Enter your choice here : ");
	scanf("%d",&choice);
	switch(choice) {
		/*case 1 : {
			 registration();
		     break;
			 } */

		case 2 :{
		          login();
		         break;	 
		        }
	}	 

	
     	
	 	return 0;
}


void entry() {
printf("\n\n");
printf("                                                                                      1.    REGISTER\n");
printf("                                                                                      2.    LOGIN\n");
}

void registration() {
	
	
	}

// This function represents various operations performed in this program.
void guide() {
printf("\n\n");
printf("                                                                                      1.    UPDATE\n");	
printf("                                                                                      2.    STATUS\n");	
//printf("                                                                                     3.    HOME PAGE\n");	
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
	 guide();
	int choice;
	printf(" \n\n                                                                              Enter your choice here : ");
	scanf("%d",&choice);
	switch(choice) {

	    /*case 1 :{
		          update();
				 break;
				 }

	     case 2 :{
			      status();
				 break;
				 } 

	    case 3 : {
			       guide();
				  break;
				  } */
				  default : printf("invalid choice");
	}
	
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
     	 if(chance == 0){
		 printf("\n\n                                                                                                   ACCESS DENIED");
     		exit(0); 
		 }
		 }while(chance != 0);
       
}
