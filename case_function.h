
void show_Files();
void case_1()
{
	char ch2;
	Confirmation_Enabled_GUI();
    printf("\033[0;36m");
	printf("\t\t\t\tPress Space to Enable Otherwise Esc to back :-->");
	ch2 =  getch();
	if(ch2 == 32)
	{
	system("cscript C:\\script\\vBsript.vbs");
	Enable_SHP_GUI();							
	}
}

void case_2()
{
		char ch2;
		Confirmation_Disable_GUI();
		void Color_Cyan();
		printf("\t\t\t\tPress Space to Disable Otherwise Esc to back :-->");
		ch2 =  getch();
		if(ch2 == 32)
		{
	    	system("taskkill /F /IM cmd.exe");
			system("cacls C:\\Box_Files /e /c /g %username%:f");
			system("attrib -h -r -s C:\\Box_Files");
			Disable_SHP_GUI();
			goto_dashboard();										
		}
}


void case_3()
{
		system("cls");
		DIR *dir = opendir("C:\\Box_Files");
		if(dir)
		{	
		   moving();			    
		}
		else if (ENOENT == errno)
		{
		   WarningB4_HIDE_YOUR_FILE_OR_FOLDER_GUI();
		   delay(5);
		}
}


void case_4()
{
	 system("cls");
	 TaskManager_killer_GUI();
	 Color_Cyan();
	 printf("\t\t\t\t\t     Press 1 to Enable Press 2 to Disable\n\t\t\t\t\t\t");
	 int input;
	 scanf("%d", &input);
	 if(input == 1)
	 {  
	 	 system("cscript C:\\script\\vBsript_4RTM.vbs");
	 	 system("cls");
		 printf("Succesfully Enable");
		 delay(5);
	}
	else if(input == 2)
	{
	
	 	system("cscript C:\\script\\vBsript_4kill.vbs");
	 	 system("cls");
	 	printf("Succesfully Disable"); 
		delay(5);
	}
	else{
	goto_dashboard();
	}
	
	
}
void case_5()
{   char licensekey[80], ch;
	Encrpytion_Design_GUI();
	printf("\033[0;36m");
	printf("\t\t\t\t\tAre you sure you want to purchase it?\n");
	printf("\t\t\t\t\tPress Space to Activate Press Esc to exit\n\t\t\t\t");
	ch =getch();
	if(ch == 32){
	printf("\n\t\t\t\t\tEnter you License key:\n\t\t\t\t\t");
	scanf("%s", &licensekey);	
	printf("\t\t\t\t\tInvalid License key!!!\n");
	printf("\t\t\t\t\tto get valid License key go to Nagtahan St. EARIST 4th CAS building room 404.\n");
	delay(5);
}
else{
	goto_dashboard();
}
}

void case_6()
{
	change_Info();
}



