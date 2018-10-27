//
//int password_Validation(char *password_Info){	
//			int digitflag=0;
//			int upperflag=0;
//			int lowerflag=0;
//			int checkForPass;		
//			
//			if(strlen(password_Info)<8)
//			{
//				printf("Length of your Pass is less than 8\n");
//				printf("try Again...");
//				
//				return false;
//			}
//			else
//			{	
//    			for(checkForPass = 0;  checkForPass<strlen(password_Info); checkForPass++)
//        		{
//	           		if(isdigit(password_Info[checkForPass]))
//	           		digitflag=1;
//	           		if(isupper(password_Info[checkForPass]))
//	           		upperflag=1;
//	           		if(islower(password_Info[checkForPass]))
//	           		lowerflag=1;
//       			}
//			        if(digitflag==0){
//				        printf("\033[0;31m");
//						printf("\t\tNo digits ");	
//						delay(1);
//						return false;
//				    }					       
//			        else if(upperflag==0){
//				        printf("\033[0;31m");
//					    printf("\t\tNo Upper Case Letters ");
//					    delay(1);
//				    	return false;
//					}
//			        else if(lowerflag==0){
//				        printf("\033[0;31m");
//					   	printf("\t\tNo Lower Case Letters ");
//					   	delay(1);
//					    return false;
//					}     
//	  		}
//	  		return true;
//	  	}
//	  
