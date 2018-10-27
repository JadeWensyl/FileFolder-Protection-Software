#include <errno.h>
#include<stdio.h>
#include<windows.h>
#include <sys/stat.h>
#define gotoxy(x,y) printf("\033[%d;%dH", (x), (y))
//#include <sys/types.h>
//#include <dirent.h>
void case_1();
void case_2();
void case_3();
void case_4();
void case_5();
void case_6();
void case_8();
void change_Info();
void show_Files();
void dashboard_Function(){	
	
			start :	
			system("cls");
			char ch,FN[20];		  
			dashboard_Admin_GUI();
		    fflush(stdin);
			show_Files();
			gotoxy(24, 42);
			ch = getch();		
			if(ch==27){
	    		exit(0);
		  	}				
			switch(ch)
				{	
				case '1' :										
					case_1();
					 break;		 
			    case '2' :				
			         case_2();			
					 break;
				case '3' :
				    case_3();		 
	         		break;
	         	case '4' :
				    case_4();		 
	         		break;	
		    	case '5' :
		    		 case_5();
					 break;
				case '6' :
		    	 	 case_6();
					 break;			 		
				case '7':
					 Help();
					 break;
				case '8':
					 exit(0);
					 break;		
				default :		
					 error_InputDashboard_GUI();
					 break;
		}
goto start;
}
