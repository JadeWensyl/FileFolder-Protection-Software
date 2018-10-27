void case_1();
void repeat_Hiding()
	{
		int input;
		
		printf("\033[0;36m");
	  	printf("\t\t\t\t\tdo you want to hide more?\n");
	  	printf("\t\t\t\t\tPress Esc to exit Press Space to continue\n");
	  	input = getch();	  	
	  	if(input == 27)
	  	{	
	  		exit(0);
	  		
	
	    }
	    else{
	  		moving();
	  }
	}
