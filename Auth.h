
void show_Files();
struct account
{
char name[20];
char password[20];
};
void Login_Interface_GUI();
void goto_dashboard();
void goto_login();
void login_functionality()
{	
	
	struct account s;
    FILE *fp;
	char u[25], p[25];
    printf("\033[0;31m");   
    int n=1,a= 0 ,b= 0;
    printf("\n\t\t\t\tENTER USERNAME & PASSWORD BELOW(YOU ONLY HAVE 3 CHANCE TO ENTER)"); 
    printf("\033[0;36m");
   	
    int i=0;   
    int c;
   
    fp = fopen("C:\\script\\name_pass.txt","r");
   	while(1)	
			{
			
			fscanf(fp,"%s", &s.name);	
		    fscanf(fp,"%s", &s.password);	
		    
			if(fscanf(fp,"%s %s",&s.name,&s.password)==EOF)
			    {
					break;
	        	}
			}
		
   
  
   while(n<=3)
   {
      
	  
      printf("\n\n\t\t\t\t\tUSER ID: ");
      scanf("%s", &u); 
      printf("\n\t\t\t\t\tPASSWORD: ");      
      scanf("%s",&p);
      a=strcmp(u, s.name);
      b=strcmp(p, s.password);
      if(a==0 && b==0)
      {
         printf("\n\t\t\t\tYou have logged in successfully.");
         delay(5);
         goto_dashboard();
         break;
      }
      else
      {
         printf("\n\t\t\t\tWrong PASSWORD and/or USERNAME. Now you have %d more chance/s.",3-n);
      }
      
      n++;
   }
   fclose(fp);
   if(n==4){
   	  printf("\033[0;31m");
      printf("\n\t\t\t\tYou can't log in.");
      delay(300);
      system("cls");
	  goto_login();
    	
   	  
   }
}





int password_Validation(char *password_Info){	
			int digitflag=0;
			int upperflag=0;
			int lowerflag=0;
			int checkForPass;		
			
			if(strlen(password_Info)<8)
			{
				printf("Length of your Pass is less than 8\n");
				printf("try Again...");
				
				return false;
			}
			else
			{	
    			for(checkForPass = 0;  checkForPass<strlen(password_Info); checkForPass++)
        		{
	           		if(isdigit(password_Info[checkForPass]))
	           		digitflag=1;
	           		if(isupper(password_Info[checkForPass]))
	           		upperflag=1;
	           		if(islower(password_Info[checkForPass]))
	           		lowerflag=1;
       			}
			        if(digitflag==0){
				        printf("\033[0;31m");
						printf("\t\tNo digits ");	
						delay(1);
						return false;
				    }					       
			        else if(upperflag==0){
				        printf("\033[0;31m");
					    printf("\t\tNo Upper Case Letters ");
					    delay(1);
				    	return false;
					}
			        else if(lowerflag==0){
				        printf("\033[0;31m");
					   	printf("\t\tNo Lower Case Letters ");
					   	delay(1);
					    return false;
					}     
	  		}
	  		return true;
	  	}
	  	
	  	

void Register_Na_SecondAttempt(){
		int i,test, startV;
        char ch,FN[20],username_Info[80], password_Info[80], password_Confirmation[80], *temp;					
			
		
			system("cls");
			Register_Admin_GUI();
			printf("\033[0;36m");
			printf("\n\t ENTER YOU USERNAME :->>");	
			scanf("%s", &username_Info);
			giveTip4_Pass_GUI();
			printf("\n\t ENTER YOU PASSWORD :->>");
			printf("\033[0;30m");
		    scanf("%s", &password_Info);										
			printf("\033[0;33m");
			temp = password_Info;
		   	test = password_Validation(password_Info);
			   	if(test == true)
			   	{
			   	
			     	printf("\n\t CONFIRM YOU PASSWORD :->>");
					printf("\033[0;30m");	
			        scanf("%s", &password_Confirmation);
			   		if(temp == password_Confirmation)
			   		{
			   			 printf("Password didn't match");
				     delay(5);
					   
				    }
			        else{
				     
				       system("cls");
				     	FILE *fq;
				     	fq = fopen("C:\\script\\name_pass.txt", "w");
						fprintf(fq,"%s %s",username_Info, password_Info);
						
						fclose(fq);	
			   	     	 Loading_GUI();
				     	 dashboard_Function();
				   }
				}else{
					delay(2);
					system("cls");
					Register_Na_SecondAttempt();
					
				
				}				
			
	
	}

void Register_Na(){
		
		
	  
		int i,test, startV;
        char ch,FN[20],username_Info[80], password_Info[80], password_Confirmation[80], *temp;			
		startV = getch();		
		if(startV == 32)
		{
			system("cls");
			Register_Admin_GUI();
			//kulay cyan
			printf("\033[0;36m");
			
			printf("\n\t ENTER YOU USERNAME :->>");	
			scanf("%s", &username_Info);
			giveTip4_Pass_GUI();
			printf("\n\t ENTER YOU PASSWORD :->>");
			//kulay black
			printf("\033[0;30m");
		    scanf("%s", &password_Info);										
			printf("\033[0;33m");
			temp = password_Info;
		   	test = password_Validation(password_Info);
			   	if(test == true)
			   	{	
			   	
			     	printf("\n\t CONFIRM YOU PASSWORD :->>");
					printf("\033[0;30m");	
			        scanf("%s", &password_Confirmation);
			   		if(temp == password_Confirmation)
			   		{
			   			 printf("Password didn't match");
				     		delay(5);
					   
				    }
			        else{
				     
				     	system("cls");
				     	FILE *fr;
				     	fr = fopen("C:\\script\\name_pass.txt", "w");
						fprintf(fr,"%s %s",username_Info, password_Info);
						fclose(fr);	
			   	        Loading_GUI();
				        dashboard_Function();
				   }
			   	 
				}
				
		}		
		else if(startV == 27)
		{
			exit(0);
		}
		Register_Na_SecondAttempt();
	}	  	
	
	//
	//
	//
	void insert_new();
void change_Info()
{
	
	
	fclose(fopen("C:\\script\\name_pass.txt", "w"));
	insert_new();
	

}

void insert_new()
{
	int input;
	system("cls");
	Warning_GUI();
	printf("\033[0;36m");
	printf("\t\t\t\t\tDo you want to continue to change your info?\n");
	printf("\t\t\t\t\tPress Space to Continue then Esc to Go back");
	input = getch();
	if(input == 32)
	{
			system("cls");
			printf("\033[0;36m");
			char username_Info[40], password_Info[40];
			FILE *fpt;
			fpt = fopen("C:\\Box\\name_pass.txt", "w");
			printf("\n\n\n\n\n\t\t\t\t\t\tEnter your new username\n\t\t\t\t\t\t");
			scanf("%s",&username_Info);
			printf("\n\n\n\t\t\t\t\t\tEnter your new password\n\t\t\t\t\t\t");
			scanf("%s",&password_Info);
			fprintf(fpt,"%s %s",username_Info, password_Info);					
			fclose(fpt);
			printf("\n\n\n\n\t\t\t\t\t\tSucessfully change!\n\t\t\t\t\t\t");
			delay(10);	
	}
	else if(input == 27)
	{
		goto_dashboard();
	}
	else{
		WrongInput_GUI();
		goto_dashboard();
	}
	

	}
	
void goto_login()
	{	
	system("cls");
	fflush(stdin);
	Login_Interface_GUI();
	login_functionality();
	Loading_GUI();
	dashboard_Function();
	}
	
	void goto_dashboard()
	{	
	fflush(stdin);
	dashboard_Admin_GUI();
	dashboard_Function();
	}
	



