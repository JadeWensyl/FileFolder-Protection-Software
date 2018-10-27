#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<io.h>
#include<stdbool.h>
#include<windows.h>
#include <time.h>
#include<string.h>
#include <errno.h>
#include <sys/types.h>
#include <dirent.h>
#include<unistd.h>

#include "Windows.h"
#include "TurboC_CV.h"
#include "Our_Graphics.h"
#include "dashboard_functionality.h"
#include "case_function.h"
#include "Auth.h"




int main()
 {	    	
				
	    int value_Of_Starter = 0, tempValue;   
	    
		if(!DirectoryExists("C:\\script"))
		{
		    makeFolder_Name("script");
	   	    makeFile_Name("name_pass");
	   	    makeFile_Name("last_activity");
	    }
	   	if(!DirectoryExists("C:\\Box_Files"))
		{
		    makeFolder_Name("Box_Files");		
	    }
		Kill_Task();
		create_VBScript_forTM();
		revive_Task();
		create_VBScript_for_RevTM();
		create_VBScript();
		create_Batch();
		//-------------------------
		FILE *fp;
		fp = fopen("C:\\script\\value.txt", "r");	
       	if(fp == NULL)
    	{   
		    write_to_File("value", 0);				
			fp = fopen("C:\\script\\value.txt", "r");
		  	fscanf(fp, "%d", &tempValue);
			if(tempValue == '\0'){
				 write_to_File("value", 1);					
			  	 Show_Welcome_GUI();
				 Register_Na();
				  }
			else{	
				goto_login();		
	     		}
        }
        //-------------------------------------
		else
		{				
			if(hasFileContent("name_pass") ==  0)
			{			
				Register_Admin_GUI();
				printf("\t\tPRESS SPACE TO BEGIN");
			    Register_Na_SecondAttempt();
		    }
			else
			{									
		    	goto_login();
			}
		}
	return 0;
}	
	


    

		
		
		


  
