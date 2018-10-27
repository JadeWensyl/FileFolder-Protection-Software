//struct account
//{
//char name[20];
//char password[20];
//};
//void Login_Interface_GUI();
//
//void login_functionality()
//{	
//	
//	struct account s;
//    FILE *fp;
//	char u[25], p[25];
//    printf("\033[0;31m");   
//    int n=1,a= 0 ,b= 0;
//    printf("\n\t\t\t\tENTER USERNAME & PASSWORD BELOW(YOU ONLY HAVE 3 CHANCE TO ENTER)"); 
//    printf("\033[0;36m");
//   
//    int i=0;   
//    int c;
//   
//    fp = fopen("C:\\script\\name_pass.txt","r");
//   	while(1)	
//			{
//			
//			fscanf(fp,"%s", &s.name);	
//		    fscanf(fp,"%s", &s.password);	
//		    
//			if(fscanf(fp,"%s %s",&s.name,&s.password)==EOF)
//			    {
//					break;
//	        	}
//			}
//		
//   
//  
//   while(n<=3)
//   {
//     
//      printf("\n\n\t\t\t\tUSER ID: ");
//      scanf("%s", &u);
//      printf("\n\t\t\t\tPASSWORD: ");
//      scanf("%s",&p);
//      a=strcmp(u, s.name);
//      b=strcmp(p, s.password);
//      if(a==0 && b==0)
//      {
//         printf("\n\t\t\t\tYou have logged in successfully.");
//         delay(5);
//         Bitcompile_dashboard();
//         break;
//      }
//      else
//      {
//         printf("\n\t\t\t\tWrong PASSWORD and/or USERNAME. Now you have %d more chance/s.",3-n);
//      }
//      
//      n++;
//   }
//   fclose(fp);
//   if(n==4){
//   	  printf("\033[0;31m");
//      printf("\n\t\t\t\tYou can't log in.");
//      delay(300);
//      system("cls");
//	  login_purpose();
//    	
//   	  
//   }
//}
