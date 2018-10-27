


void Wrongpath_GUI();
void confirmation_pop();
void NoFiles_GUI();
void goto_dashboard();

void gotoxy(int x,int y){
	printf("\033[%d;%dH", (x), (y));
}

void Color_Cyan()
{
  printf("\033[0;36m");	
}
void Color_Red()
{
  printf("\033[0;31m");	
}
void Color_Yellow()
{
  printf("\033[0;33m");	
}
void Color_Black()
{
	printf("\033[0;30m");
}
void Color_Green()
{
	printf("\033[0;32m");
}


void delay(int number_of_seconds) 
{   
    int milli_seconds = 500 * number_of_seconds;
    clock_t start_time = clock();     
    while (clock() < start_time + milli_seconds); 
}

void Special_delay(int number_of_seconds) 
{ 
    int milli_seconds = 50 * number_of_seconds;  
    clock_t start_time = clock();   
    while (clock() < start_time + milli_seconds); 
}  


	void moving()
	{ 			
		int input, input2;
		char tempvar[80];
		Color_Cyan();		
		printf("\n\n\n\n\n\t\t\t\t\tTYPE THE LOCATION OF YOUR FILES WITH CORRECT PATH\n \t\t\t\t\t:-->>");
     	scanf("%s", tempvar);
     	Color_Black();		
		char str[80];
		strcpy(str, "move ");
		strcat(str, tempvar);
		strcat(str, " C:\\Box_Files");	
	    system(str);
	  	while(true){
	  	Color_Cyan();
	  	printf("\t\t\t\t\tdo you want to hide more?\n");
	  	printf("\t\t\t\t\tPress");
	  	Color_Red();
	  	printf(" Esc");
	  	Color_Cyan();
	  	printf(" to exit Press");
	  	Color_Green();
	   	printf(" Space");
	    Color_Cyan();
	   	printf(" to add more\n \t\t\t\t\t\t:-->>");		
		    input = getch(); 
			if(input == 32){
				moving();}
		    else if(input == 27){
		    	confirmation_pop();
		    	input2 = getch();
				if(input2 == 32)								
					goto_dashboard();						
				break;
				}
			else
			{
				Wrongpath_GUI();
				break;
			}
	    }					
		delay(2);	
	}
						
void percentage_load()
	{
       int i = 0;
       for (i = 0; i <= 10000; i++)
	   {
           printf("\r\t\t\t\t\t\t\t\t\t In progress [%d %%]", i/100);           
           fflush(stdout);
       }
       	Beep(600,100);
	}

void NoFiles_GUI();
struct dirent *de; 
void show_Files(){
    gotoxy(7, 95);   
    int test;
    DIR *dr = opendir("C:\\Box_Files");
    if(dr == NULL)
	{
			NoFiles_GUI(); 
		   	
	}
		
//	else if(dr == NULL) 
//	{
//		NoFiles_GUI(); 
//	   	closedir(dr);
//	}
  

	  DIR *dr1 = opendir("C:\\Box_Files");	
	 fflush(stdin);	
    while ((de = readdir(dr1)) != NULL) {
	
    
            printf("\t\t\t\t\t\t\t\t\t\t\t      %s\n", de->d_name); 
           
		}
 closedir(dr1);

      
}

   
BOOL DirectoryExists(LPCTSTR szPath)
{
  DWORD dwAttrib = GetFileAttributes(szPath);

  return (dwAttrib != INVALID_FILE_ATTRIBUTES && 
         (dwAttrib & FILE_ATTRIBUTE_DIRECTORY));
}




