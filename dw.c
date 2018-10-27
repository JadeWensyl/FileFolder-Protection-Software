#include<conio.h>
#include <stdlib.h>
#include <stdio.h>
struct account
{

char name[20];

char password[20];



};

void main()
{
struct account s;
FILE *fp;
char ch;
system("cls");
fp=fopen("C:\\name_pass.txt","r");

	if(fp==NULL)
	{
	
	printf("You Cant Opens the file");
	
	exit(1);
	
	}
		while(1)	
			{			
			fscanf(fp,"%s %s", &s.name, &s.password);	
		    
		    printf("%s",s.name);
		    printf("%s", s.password);
			if(fscanf(fp,"%s",&s.name)==EOF)
			{
					break;
		}
			}

fclose(fp);

getch();


}
