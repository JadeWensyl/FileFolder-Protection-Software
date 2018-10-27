//
//void login_purpose();
//void Register_Na_SecondAttempt(){
//		int i,test, startV;
//        char ch,FN[20],username_Info[80], password_Info[80], password_Confirmation[80], *temp;					
//			
//		
//			system("cls");
//			Register_Admin_GUI();
//			printf("\033[0;36m");
//			printf("\n\t ENTER YOU USERNAME :->>");	
//			scanf("%s", &username_Info);
//			giveTip4_Pass_GUI();
//			printf("\n\t ENTER YOU PASSWORD :->>");
//			printf("\033[0;30m");
//		    scanf("%s", &password_Info);										
//			printf("\033[0;33m");
//			temp = password_Info;
//		   	test = password_Validation(password_Info);
//			   	if(test == true)
//			   	{
//			   	
//			     	printf("\n\t CONFIRM YOU PASSWORD :->>");
//					printf("\033[0;30m");	
//			        scanf("%s", &password_Confirmation);
//			   		if(temp == password_Confirmation)
//			   		{
//			   			 printf("Password didn't match");
//				     delay(5);
//					   
//				    }
//			        else{
//				     
//				       system("cls");
//				     	FILE *fq;
//				     	fq = fopen("C:\\script\\name_pass.txt", "w");
//						fprintf(fq,"%s %s",username_Info, password_Info);
//						
//						fclose(fq);	
//			   	     	 Loading_GUI();
//				     	 dashboard_Function();
//				   }
//				}else{
//					delay(2);
//					system("cls");
//					Register_Na_SecondAttempt();
//					
//				
//				}				
//			
//	
//	}
//
//void Register_Na(){
//		
//		
//	  
//		int i,test, startV;
//        char ch,FN[20],username_Info[80], password_Info[80], password_Confirmation[80], *temp;			
//		startV = getch();		
//		if(startV == 32)
//		{
//			system("cls");
//			Register_Admin_GUI();
//			//kulay cyan
//			printf("\033[0;36m");
//			
//			printf("\n\t ENTER YOU USERNAME :->>");	
//			scanf("%s", &username_Info);
//			giveTip4_Pass_GUI();
//			printf("\n\t ENTER YOU PASSWORD :->>");
//			//kulay black
//			printf("\033[0;30m");
//		    scanf("%s", &password_Info);										
//			printf("\033[0;33m");
//			temp = password_Info;
//		   	test = password_Validation(password_Info);
//			   	if(test == true)
//			   	{	
//			   	
//			     	printf("\n\t CONFIRM YOU PASSWORD :->>");
//					printf("\033[0;30m");	
//			        scanf("%s", &password_Confirmation);
//			   		if(temp == password_Confirmation)
//			   		{
//			   			 printf("Password didn't match");
//				     		delay(5);
//					   
//				    }
//			        else{
//				     
//				     	system("cls");
//				     	FILE *fr;
//				     	fr = fopen("C:\\script\\name_pass.txt", "w");
//						fprintf(fr,"%s %s",username_Info, password_Info);
//						fclose(fr);	
//			   	        Loading_GUI();
//				        dashboard_Function();
//				   }
//			   	 
//				}
//				
//		}		
//		else if(startV == 27)
//		{
//			exit(0);
//		}
//		Register_Na_SecondAttempt();
//	}
