//void insert_new();
//void change_Info()
//{
//	
//	
//	fclose(fopen("C:\\script\\name_pass.txt", "w"));
//	insert_new();
//	
//
//}
//
//void insert_new()
//{
//	int input;
//	system("cls");
//	Warning_GUI();
//	printf("\033[0;36m");
//	printf("\t\t\t\t\tDo you want to continue to change your info?\n");
//	printf("\t\t\t\t\tPress Space to Continue then Esc to Go back");
//	input = getch();
//	if(input == 32)
//	{
//			system("cls");
//			printf("\033[0;36m");
//			char username_Info[40], password_Info[40];
//			FILE *fpt;
//			fpt = fopen("C:\\Box\\name_pass.txt", "w");
//			printf("\t\t\t\t\t\tEnter your new username\n\t\t\t\t\t\t");
//			scanf("%s",&username_Info);
//			printf("\t\t\t\t\t\tEnter your new password\n\t\t\t\t\t\t");
//			scanf("%s",&password_Info);
//			fprintf(fpt,"%s %s",username_Info, password_Info);					
//			fclose(fpt);	
//	}
//	else if(input == 27)
//	{
//		Bitcompile_dashboard();
//	}
//	else{
//		WrongInput_GUI();
//		Bitcompile_dashboard();
//	}
//	
//
//	}
//	
//
//

