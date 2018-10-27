
	void NoFiles_GUI(){
				
			   printf("\033[0;31m");
			    gotoxy(7, 155);
			    printf("\n");
			    printf("\n\t\t\t\t\t\t\t\t\t\t\t ==============================");
				printf("\n\t\t\t\t\t\t\t\t\t\t\t|*                            *|");
				printf("\n\t\t\t\t\t\t\t\t\t\t\t|*           NOTE:            *|");
		    	printf("\n\t\t\t\t\t\t\t\t\t\t\t|*     DISABLE YOUR (SHP)     *|");
				printf("\n\t\t\t\t\t\t\t\t\t\t\t|*    TO SHOW HIDDEN FILES    *|");
				printf("\n\t\t\t\t\t\t\t\t\t\t\t|*                            *|");
				printf("\n\t\t\t\t\t\t\t\t\t\t\t ===============================");	
	     		
	     	}	

void Show_Welcome_GUI()
{		int i;
	    char s[] = {"Welcome!, Glad you are here... I'm the developer who built this software \n\t\t\tI built this for you to hide your files not to get stolen or corrupted by others\n\t\t\thope this software helps you. We are not responsible in your data if it is lost\n\t\t\tthe risk is on your own please follow the steps that are shown here Goodluck wish\n\t\t\tyour files is safe"};		
		system("COLOR 3");
    	 printf("\n\n\n\t\t\t\t\t===================*********===================");
		printf("\n\t\t\t\t\t|*                                           *|");
		printf("\n\t\t\t\t\t|*                                           *|");
    	printf("\n\t\t\t\t\t|*   FILE / FOLDER PROTECTION SOFTWARE       *|");
		printf("\n\t\t\t\t\t|*                                           *|");
		printf("\n\t\t\t\t\t|*                                           *|");
		printf("\n\t\t\t\t\t===================*********==================\n\n\n");		
		
		printf("\t\t\t");
		for(i = 0;s[i] != '\0'; i++)
			{
		ShowCursor(true);
			printf("%c", s[i]);
			Special_delay(1);
			Beep(5600,10);
			}
		printf("\n\n\n\t\t\t Press");
		printf("\033[0;32m");
		printf(" Space "); 
		printf("\033[0;36m");
		printf("to Proceed");
		printf("\033[1;31m");
		printf(" Esc ");
		printf("\033[0;36m");
		printf("Press Esc to exit :-->");
		
	
}

void Register_Admin_GUI()
{

	
        printf("\n\n\n\t\t\t\t\t===================*********===================");
		printf("\n\t**************************\t**                                           **\t\t**********************");
		printf("\n\t**************************\t**                                           **\t\t**********************");
    	printf("\n\t    ******************************      CREATE USERNAME & PASSWORD FOR       *****************************");
		printf("\n\t**************************\t**              AUTHORIZATION                **\t\t**********************");
		printf("\n\t**************************\t**                                           **\t\t**********************");
		printf("\n\t\t\t\t\t===================*********==================\n");
		printf("\n------------------------------------------------------------------------------------------------------------------------------\n");
		printf("\033[0;31m");
		 printf("\n\t===================*********===================");
		printf("\n\t|*                                           *|");
		printf("\n\t|*  NOTE: KEEP YOUR USERNAME AND PASSWORD    *|");
    	printf("\n\t|*  SAFE AS MUCH AS POSSIBLE THIS IS THE     *|");
		printf("\n\t|*  ONLY WAY HACKERS CAN BREAK ON THIS SYSTEM*|");
		printf("\n\t|*                                           *|");
		printf("\n\t===================*********==================\n");		
			

}

void giveTip4_Pass_GUI(){
     	printf("\033[0;33m");
	    printf("\n\t===================*********===================");
		printf("\n\t|*                                           *|");
		printf("\n\t|*  NOTE: MAKE  YOUR PASSWORD LONGER THAN    *|");
    	printf("\n\t|*  8 CHARACTERS W/ AT LEAST ONE UPPERCASE   *|");
		printf("\n\t|*  AND AT LEAST FIVE NUMBERS...             *|");
		printf("\n\t|*                                           *|");
		printf("\n\t===================*********==================\n");	
}

struct dosdate_t;
void dashboard_Admin_GUI()
{
		char a[5];
		int d;
		char time1[80];
		strcpy(a, "% ");
		time_t t = time(NULL);
		struct tm tm = *localtime(&t);
		FILE *fp = fopen("C:\\script\\last_activity.txt", "w");
		fprintf(fp,"%d-%d-%d %d:%d:%d", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
		fclose(fp);
		printf("\n\n\n");
		printf("                                              Last Activity on : %d-%d-%d %d:%d:%d\n\n\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
	    printf("\t *  FILES/FOLDER PROTECTION SOFTWARE  *                      WARNING!\t\t         SHOW HIDDEN FILES\n");
		printf("\t=============================================+==    ==========================     ============================");
		printf("\n\t||                                            ||    | Enalbing SMART HIDDEN   |\t\t");
		printf("\n\t==============================================+=    | PROTECTION will protect |\t\t");
		printf("\n\t||                                            ||    | your files 100%s not to |\t\t", a);
		printf("\n\t|| 1. ENALBLE SMART HIDDEN PROTECTION         ||    | get steal or see by     |\t\t");
    	printf("\n\t|| 2. DISABLE SMART HIDDEN PROTECTION         ||    | users but it will take  |\t\t");
		printf("\n\t|| 3. HIDE A FILES / FOLDER                   ||    | a bit amount of CPU     |\t\t");
		printf("\n\t|| 4. Enable/ Disable Task Manager            ||    | power.                  |\t\t");
		printf("\n\t|| 5. Add 256-bit AES Encryption(BUY FOR 5$)  ||    |                         |\t\t");
		printf("\n\t|| 6. Change INFO                             ||    |                         |\t\t");
		printf("\n\t|| 7. HELP                                    ||    |                         |\t\t");
		printf("\n\t|| 8. Exit                                    ||    |                         |\t\t");
		printf("\n\t||                                            ||    |                         |\t\t");
		printf("\n\t============================================+===    ======+++=================\n\n");
		
		printf("\n\t           ENTER YOUR CHOICE :->>");
		 
		
}


void WarningB4_HIDE_YOUR_FILE_OR_FOLDER_GUI()
{	
			system("COLOR 4");
			 printf("\t                  WARNING!\n");
				printf("\t===============================================");
				printf("\n\t||                                           ||");
				printf("\n\t=============================================== ");
				printf("\n\t||                                           ||");
				printf("\n\t||    BEFORE YOU HIDE YOUR FILE OR FOLDER    ||");
		    	printf("\n\t||    PLEASE TURN OFF YOU SMART HIDDEN       ||");
				printf("\n\t||    PROTECTOR TO BE ABLE TO RUN THIS       || ");
				printf("\n\t||    OPERATION!                             ||");
				printf("\n\t||                                           ||");
				printf("\n\t||                                           ||");
				printf("\n\t||                                           ||");
				printf("\n\t===============================================");
				printf("\n\t TURN OFF THE SMART HIDDEN PROTECTR IN DASHBOARD:->> ");
}

void instruction_GUI(){
				system("COLOR 3");
			    printf("\n\t ===========================*********=========================");
				printf("\n\t|*                                                           *|");
				printf("\n\t|*  ENTER FULL PATH OF FILE / FOLDER IN FOLLOWING FORMAT     *|");
		    	printf("\n\t|*  Example :- If your file/folder present on E Drive        *|");
				printf("\n\t|*  Then E:\\File Name or Folder name                         *|");
				printf("\n\t|*                                                           *|");
				printf("\n\t ===========================*********========================\n");	
	     		
			
			}
			
			
void error_InputDashboard_GUI(){
				system("cls");
				printf("\033[0;31m");
			    printf("\n\n\n\n\n\n\n\n");
			    printf("\n\t\t\t\t ===========================*********=========================");
				printf("\n\t\t\t\t|*                                                           *|");
				printf("\n\t\t\t\t|*                                                           *|");
		    	printf("\n\t\t\t\t|*           ERROR PLEASE INPUT THE NUMBER U WANT...         *|");
				printf("\n\t\t\t\t|*                                                           *|");
				printf("\n\t\t\t\t|*                                                           *|");
				printf("\n\t\t\t\t ===========================*********========================\n");
				fflush(stdin);
			    printf("\033[0;36m");	
	     		delay(2);
	     	}
	     	
void rebooting_System_GUI(){
				system("cls");
				printf("\033[0;31m");
			    printf("\n\n\n\n\n\n\n\n");
			    printf("\n\t\t\t\t ===========================*********=========================");
				printf("\n\t\t\t\t|*                                                           *|");
				printf("\n\t\t\t\t|*                                                           *|");
		    	printf("\n\t\t\t\t|*                           Reboot...                       *|");
				printf("\n\t\t\t\t|*                                                           *|");
				printf("\n\t\t\t\t|*                                                           *|");
				printf("\n\t\t\t\t ===========================*********========================\n");	
	     		delay(2);
	     	}	   
	     	
void TaskManager_killer_GUI(){
				system("cls");
				printf("\033[0;31m");
			    printf("\n\n\n\n\n\n\n\n");
			    printf("\n\t\t\t\t ===========================*********=========================");
				printf("\n\t\t\t\t|*                                                           *|");
				printf("\n\t\t\t\t|*    Disable Task Manager will not allow users to end the   *|");
		    	printf("\n\t\t\t\t|*   processes running on background by doing this you will  *|");
				printf("\n\t\t\t\t|*             make your system prone to any attack.         *|");
				printf("\n\t\t\t\t|*                                                           *|");
				printf("\n\t\t\t\t ===========================*********========================\n");	
	     		delay(2);
	     	}	     	
	     
	     
void Confirmation_Enabled_GUI(){
				system("cls");
				printf("\033[0;31m");
			    printf("\n\n\n\t\t\t\t ===========================*********=========================");
				printf("\n\t\t\t\t|*                                                           *|");
				printf("\n\t\t\t\t|*             PERMISSION FOR THIS SOFTWARE !!               *|");
		    	printf("\n\t\t\t\t|* Do you want to change it Enable mode? changing to enable  *|");
				printf("\n\t\t\t\t|* 	mode allowing the application to perform realtime    *|");
				printf("\n\t\t\t\t|* protection Bypassing DOS command, hide from Magic Box and *|");
				printf("\n\t\t\t\t|* lock your files. for maximum protection come back here    *|");
				printf("\n\t\t\t\t|*                    then enable it.                        *|"); 
			    printf("\n\t\t\t\t|*                                                           *|");                              
				printf("\n\t\t\t\t ===========================*********========================\n");
				printf("\033[0;36m");
		}
void Confirmation_Disable_GUI(){
				system("cls");
				printf("\033[0;31m");
			    printf("\n\n\n\t\t\t\t ===========================*********=========================");
				printf("\n\t\t\t\t|*                                                           *|");
				printf("\n\t\t\t\t|*             PERMISSION FOR THIS SOFTWARE !!               *|");
		    	printf("\n\t\t\t\t|* Do you want to change itdisable mode? changing to disable *|");
				printf("\n\t\t\t\t|*  mode you'd allow our application to unhide and unprotect *|");
				printf("\n\t\t\t\t|*  to unhide and unprotect your files in hour. Hackers and  *|");
				printf("\n\t\t\t\t|*  intruders can achieve what they in a less amount of time *|");
				printf("\n\t\t\t\t|*  they will crack it and steal your information to avoid   *|");    
				printf("\n\t\t\t\t|*                 turn on the realtime protection..         *|");
				printf("\n\t\t\t\t|*                                                           *|");
				printf("\n\t\t\t\t ===========================*********========================\n");
				printf("\033[0;36m");
		}
		
void Encrpytion_Design_GUI(){
				system("cls");
				printf("\033[0;32m");
			    printf("\n\n\n\t\t\t\t ===========================*********============================");
				printf("\n\t\t\t\t|*                                                                *|");
				printf("\n\t\t\t\t|*  256-bit encryption is refers to the length of the encryption  *|");
			    printf("\n\t\t\t\t|*  ey used to encrypt a data stream or file A hacker or cracker  *|");
				printf("\n\t\t\t\t|*  will require 2 to the power of 256 different combinations to  *|");
		    	printf("\n\t\t\t\t|*     break a 256-bit encrypted message, which is virtually      *|");
				printf("\n\t\t\t\t|*      impossible to be broken by even the fastest computers.    *|");
				printf("\n\t\t\t\t|*                                                                *|");
				printf("\n\t\t\t\t ===========================*********============================\n");
				
		}						
		
			 
void Enable_SHP_GUI(){
				system("cls");
				printf("\033[0;36m");
			    printf("\n\n\n\n\n\n\n\n");
			    printf("\n\t\t\t\t ===========================*********=========================");
				printf("\n\t\t\t\t|*                                                           *|");
				printf("\n\t\t\t\t|*                                                           *|");
		    	printf("\n\t\t\t\t|*                           Protecting...                   *|");
				printf("\n\t\t\t\t|*                                                           *|");
				printf("\n\t\t\t\t|*                                                           *|");
				printf("\n\t\t\t\t ===========================*********========================\n");	
	     		printf("\t\t\t\tChecking for its location...");
	     		percentage_load();
	     		printf("\n");
	     		delay(1);
	     		printf("\t\t\t\tEnabling Smart Protection Software...");
	     		percentage_load();
	     		printf("\n");
	     		delay(1);
	     		printf("\t\t\t\tHiding the files bruteforcely...");
	     		percentage_load();
	     		printf("\n");
	     		delay(1);
	     		printf("\t\t\t\tLocking...");
	     		percentage_load();
	     		printf("\n");
	     		delay(1);
			   printf("\t\t\t\tFinish..\n");
			   system("cls");
			   printf("\n\n\n\n\n\n\t\t\t\t ===========================*********=========================");
				printf("\n\t\t\t\t|*                                                           *|");
				printf("\n\t\t\t\t|*                                                           *|");
		    	printf("\n\t\t\t\t|*                        Please Wait...                     *|");
				printf("\n\t\t\t\t|*                                                           *|");
				printf("\n\t\t\t\t|*                                                           *|");
				printf("\n\t\t\t\t ===========================*********========================\n");
				delay(5);
	     	}				 

void Disable_SHP_GUI(){
				system("cls");
				printf("\033[0;36m");
			    printf("\n\n\n\n\n\n\n\n");
			    printf("\n\t\t\t\t ===========================*********=========================");
				printf("\n\t\t\t\t|*                                                           *|");
				printf("\n\t\t\t\t|*                                                           *|");
		    	printf("\n\t\t\t\t|*                           Please Wait...                  *|");
				printf("\n\t\t\t\t|*                                                           *|");
				printf("\n\t\t\t\t|*                                                           *|");
				printf("\n\t\t\t\t ===========================*********========================\n");	
	     		printf("\t\t\t\tChecking for its location...");
	     		percentage_load();
	     		printf("\n");
	     		delay(1);
	     		printf("\t\t\t\tDisabling Smart Protection Software...");
	     		percentage_load();
	     		printf("\n");
	     		delay(1);
	     		printf("\t\t\t\tUnhiding the files bruteforcely...");
	     		percentage_load();
	     		printf("\n");
	     		delay(1);
	     		printf("\t\t\t\tUnlocking...");
	     		percentage_load();
	     		printf("\n");
	     		delay(1);
			   printf("\t\t\t\tFinish..\n");
			   system("cls");
			   printf("n\n\n\n\n\n\n\t\t\t\t ===========================*********=========================");
				printf("\n\t\t\t\t|*                                                           *|");
				printf("\n\t\t\t\t|*                                                           *|");
		    	printf("\n\t\t\t\t|*                           Done...                         *|");
				printf("\n\t\t\t\t|*                                                           *|");
				printf("\n\t\t\t\t|*                                                           *|");
				printf("\n\t\t\t\t ===========================*********========================\n");
				 delay(3);
	     	}				 
			   	
	     					
void Loading_GUI(){
				system("cls");
				system("COLOR 3");
			    printf("\n\n\n\n\n\n\n\n");
			    printf("\n\t\t\t\t ===========================*********=========================");
				printf("\n\t\t\t\t|*                                                           *|");
				printf("\n\t\t\t\t|*                                                           *|");
		    	printf("\n\t\t\t\t|*                          LOADING...                       *|");
				printf("\n\t\t\t\t|*                                                           *|");
				printf("\n\t\t\t\t|*                                                           *|");
				printf("\n\t\t\t\t ===========================*********========================\n");	
	     		delay(1);
	     		
	     		
	     		printf("\t\t\t\tInserting the Special Box...");
	     		percentage_load();
	     		printf("\n");
	     		delay(1);
	     		
	     		printf("\t\t\t\tChecking for its location...");
	     		percentage_load();
	     		printf("\n");
	     		delay(1);
	     		printf("\t\t\t\tProtecting the files in hidden mode...");
	     		percentage_load();
	     		printf("\n");
	     		delay(1);
	     		printf("\t\t\t\tChanging Permission as a admin mode...");
	     		percentage_load();
	     		printf("\n");
				delay(1);
	     		printf("\t\t\t\tEnabling Smart Protection Software...");
	     		percentage_load();
	     		printf("\n");
	     		delay(1);
				 printf("\t\t\t\tFinish...\n");
				 delay(5);
			}
			
void Login_Interface_GUI()
			{
				
			    printf("\n\n\n\n\n");
			    printf("\033[0;36m");
			    printf("\n\t\t\t\t ==========================**********=========================");
				printf("\n\t\t\t\t|*                                                           *|");
				printf("\n\t\t\t\t|*                                                           *|");
		    	printf("\n\t\t\t\t|*                           LOGIN                           *|");
				printf("\n\t\t\t\t|*                                                           *|");
				printf("\n\t\t\t\t|*                                                           *|");
				printf("\n\t\t\t\t ==========================**********========================\n");		
			
			}
			
void Wrongpath_GUI()
			{
				system("cls");
				printf("\033[0;31m");
			    printf("\n\n");
			    printf("\n\t\t\t\t ==========================**********=========================");
				printf("\n\t\t\t\t|*                                                           *|");
				printf("\n\t\t\t\t|*                                                           *|");
		    	printf("\n\t\t\t\t|*                      WRONG INPUT PATH                     *|");
				printf("\n\t\t\t\t|*                                                           *|");
				printf("\n\t\t\t\t|*                                                           *|");
				printf("\n\t\t\t\t ==========================**********========================\n");
						
				delay(2);
				
			
			}
			
void WrongInput_GUI()
			{
				system("cls");
				printf("\033[0;31m");
			    printf("\n\n");
			    printf("\n\t\t\t\t ==========================**********=========================");
				printf("\n\t\t\t\t|*                                                           *|");
				printf("\n\t\t\t\t|*                                                           *|");
		    	printf("\n\t\t\t\t|*                      WRONG USER INPUT                     *|");
				printf("\n\t\t\t\t|*                                                           *|");
				printf("\n\t\t\t\t|*                                                           *|");
				printf("\n\t\t\t\t ==========================**********========================\n");		
				delay(2);
				printf("\033[0;36m");
			}
void Warning_GUI()
			{
				system("cls");
				void Color_Red();
			    printf("\n\n");
			    printf("\n\t\t\t\t ==========================**********=========================");
				printf("\n\t\t\t\t|*                                                           *|");
				printf("\n\t\t\t\t|*                                                           *|");
		    	printf("\n\t\t\t\t|*                        WARNING                            *|");
				printf("\n\t\t\t\t|*                                                           *|");
				printf("\n\t\t\t\t|*                                                           *|");
				printf("\n\t\t\t\t ==========================**********========================\n");		
				
			}						
void confirmation_pop()
			{
				system("cls");
				void Color_Red();
			    printf("\n\n\n\n\n");
			    printf("\n\t\t\t\t ==========================**********=========================");
				printf("\n\t\t\t\t|*                                                           *|");
				printf("\n\t\t\t\t|*                                                           *|");
		    	printf("\n\t\t\t\t|*        Are you sure you want to stop this operation?      *|");
				printf("\n\t\t\t\t|*                                                           *|");
				printf("\n\t\t\t\t|*                                                           *|");
				printf("\n\t\t\t\t ==========================**********========================\n");
				printf("\n\t\t\t\t Press Yes to Continue");						
				delay(2);
			}
void Help()
			{
				int inputmoto;
				system("cls");
				void Color_Cyan();
			
			    printf("\n\n");
			     printf("\n\t\t =============================================**********=====================================");
			    printf("\n\t\t =============================================**********=====================================\n");
			   void Color_Yellow();
			     printf("\n\t\t\t\t\t                  ******MANUAL******   				  ");
			      void Color_Cyan();
			    printf("\n\n\n\t\t    ENABLE SMART HIDDEN PROTECTION:	     				  ");
				printf("\n\t\t    		*PRESS 1 ON KEYBOARD*\n       					  ");
				 void Color_Yellow();
				printf("\n\t\t	 NOTE: TURNING ON THE SMART HIDDEN PROTECTION(SHP) WILL   ");
 				printf("\n\t\t         IMPROVE YOUR SECURITY HIDES YOUR FILES/ FOLDER     ");
				printf("\n\t\t         BETTER PROTECTION FOR INCOMING ATTACKS             ");
				printf("\n\t 		   ALLOWING THIS TO RUN REALTIME IS A BETTER.         ");
 				printf("\n\t\t         (SHP) WILL RECORD ALL THE ADDED FILES ON THE FILE BOX   ");
 				printf("\n\t\t           ");
 				 void Color_Cyan();
				printf("\n\t\t   AFTER PRESSING 1 ON KEYBOARD THERE ARE CONFIRMATION         ");
				printf("\n\t\t   THAT WILL POP UP THEN THE SMART HIDDEN PROTECTION WILL      ");
				printf("\n\t\t   RUN AUTOMATICALLY... THEN                                   ");
			    printf("\n\t\t   PRESS SPACE TO CONTINUE...                                  ");
				printf("\n\t\t                                                             ");
			    void Color_Yellow();
					printf("\n\t\t  NOTE : ENABLING SMART HIDDEN PROTECTION WILL PROTECT YOUR");
				printf("\n\t\t             FILES 100% NOT TO GET STEAL OR SEE BY USERS EYE   ");
				printf("\n\t\t             BUT IT WILL TAKE A BIT AMOUNT OF CPU POWER..      ");
				
			    void Color_Cyan();
			   printf("\n\t\t  --------------------------------------------------------------------------------------- ");
				printf("\n\t\t    DISABLE SMART HIDDEN PROTECTION:					  ");
				printf("\n\t\t    		*PRESS 2 ON KEYBOARD*\n       					  ");
				printf("\033[0;33m");
				printf("\n\t\t	 NOTE: TURNING OFF THE SMART HIDDEN PROTECTION WILL         ");
 				printf("\n\t\t         SHOW  WHERE THE FOLDER/FILES ARE LOCATED IN MAGIC    ");
				printf("\n\t\t         BOX HACKERS CAN USE VERY BASIC DOS_COMMAND OR        ");
				printf("\n\t 		   SOFTWARE TOOLS TO STEAL HIDDEN FILES LOCATED ON YOUR ");
 				printf("\n\t\t         DRIVE.                                          \n   ");
 				printf("\033[0;36m");
				printf("\n\t\t   AFTER PRESSING 2 ON KEYBOARD THERE ARE CONFIRMATION         ");
				printf("\n\t\t   THAT WILL POP UP THEN THE SMART HIDDEN PROTECTION WILL      ");
				printf("\n\t\t   ASK YOUR PASSWORD AGAIN...                                  ");
			    printf("\n\t\t   PRESS SPACE TO CONTINUE...                                  ");
				printf("\n\t\t                                                             ");  
							    
			    printf("\n\t\t  --------------------------------------------------------------------------------------- ");
			    
			    
				printf("\n\t\t    HIDING A FILE:										  ");
				printf("\n\t\t    		*PRESS 3 ON KEYBOARD*\n       					  ");
				printf("\033[0;33m");
				printf("\n\t\t	 NOTE: CHECK IF YOU SMART HIDDEN PROTECTION IS ENABLE     ");
 				printf("\n\t\t        	IF IT IS THEN DISABLE IT.\n						  ");
 				printf("\033[0;36m");
				printf("\n\t\t  HIDING A FILES//FOLDER:	                                  \n");
				printf("\n\t\t    ENTER THE FULL PATH OF FILES/FOLDERS IN FOLLOWING FORMAT  ");
				printf("\n\t\t  example : If you file//folder present on C Drive            ");
		    	printf("\n\t\t     		Then C\\File name or Folder name  \n           	  ");
		    	printf("\033[0;33m");
				printf("\n\t\t     NOTE: 	Providing the Extension of File is compulsary!    ");
				printf("\n\t\t                                                             ");
				printf("\033[0;36m");
				 printf("\n\t\t  --------------------------------------------------------------------------------------- ");
	
					printf("\n\t\t    ENABLE /DISABLE TASK MANAGER:  					  ");
				printf("\n\t\t    		*PRESS 4 ON KEYBOARD*\n       					  ");
				printf("\n\t\t        DISABLE TASK MANAGER IS THE BEST WAY NOT TO CLOSE YOUR  ");
 				printf("\n\t\t        RUNNING SOFTWARE HACKERS WILL  EASILY SHUTDOWN YOUR PORGRAM ");
 				printf("\n\t\t        IN RUNNING PROCESSES THAT'S WHY YOU SHOULD MUST DISABLE IT. \n");
 				printf("\033[0;33m");
 				printf("\n\t\t	      NOTE: IF YOU WANT TO ENABLE IT BECAUSE OF SOME REASON GO HERE ");
 				printf("\n\t\t              THEN PRESS ENABLE.");
 				printf("\033[0;36m");	
 				printf("\n\t\t  --------------------------------------------------------------------------------------- ");
 				
 				
 				
				printf("\n\t\t  ============================================**********======================================");
				printf("\n\t\t  ============================================**********=====================================");
				printf("\033[0;36m");
				printf("\n\t\t\t\t Press Esc to Back");
				inputmoto = getch();
									
				delay(120);
			}				
						
	
			





