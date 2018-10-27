FILE *ft, *fp1, *fs, *fs1, *fv, *fv1;

void create_VBScript()
{
	
ft = fopen("C:\\script\\vBsript.vbs", "w");
fprintf(ft, "%s\n", "Set WshShell  = CreateObject(\"WScript.Shell\")");
fprintf(ft, "%s\n", "WshShell.Run chr(34) & \"C:\\script\\protector.bat\" & chr(34), 0");
fprintf(ft, "%s\n", "Set WshShell = Nothing");
fclose(ft);
}

void create_Batch()
{
fp1 = fopen("C:\\script\\protector.bat.", "w");
fprintf(fp1, "%s\n", "@ECHO OFF\n");
fprintf(fp1,"%s\n", "attrib +h +r +s C:\\Box_Files");
fprintf(fp1, ":loop\n");
fprintf(fp1, "cacls C:\\Box_Files /e /c /d %%username%%\n");
fprintf(fp1, "cls\n");
fprintf(fp1, "timeout /t 1\n"); 
fprintf(fp1, "goto loop\n"); 
fprintf(fp1, "ECHO.\n");
fclose(fp1);
}

void Kill_Task()
{
fs = fopen("C:\\script\\KillTM.bat", "w");
fprintf(fs, "%s\n", "@Echo off\n");
fprintf(fs, "set \"params=%%*\"\n");
fprintf(fs, "cd /d \"%%~dp0\" && ( if exist \"%%temp%%\\getadmin.vbs\" del \"%%temp%%\\getadmin.vbs\" ) && fsutil dirty query %%systemdrive%% 1>nul 2>nul || (  echo Set UAC = CreateObject^(\"Shell.Application\"^) : UAC.ShellExecute \"cmd.exe\", \"/k cd \"\"%~sdp0\"\" && %%~s0 %%params%%\", \"\", \"runas\", 1 >> \"%%temp%%\\getadmin.vbs\" && \"%%temp%%\\getadmin.vbs\" && exit /B )\n\n");

fprintf(fs, "REG add HKCU\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System /v DisableTaskMgr /t REG_DWORD /d 1 /f\n"); 
fprintf(fs, "echo.\n"); 
fclose(fs);	
}

void create_VBScript_forTM()
{

fs1 = fopen("C:\\script\\vBsript_4kill.vbs", "w");
fprintf(fs1, "%s\n", "Set WshShell  = CreateObject(\"WScript.Shell\")");
fprintf(fs1, "%s\n", "WshShell.Run chr(34) & \"C:\\script\\KillTM.bat\" & chr(34), 0");
fprintf(fs1, "%s\n", "Set WshShell = Nothing");
fclose(fs1);
}

void revive_Task()
{
fv = fopen("C:\\script\\revive_4RTM.bat", "w");
fprintf(fv, "%s\n", "@Echo off\n");
fprintf(fv, "set \"params=%%*\"\n");
fprintf(fv, "cd /d \"%%~dp0\" && ( if exist \"%%temp%%\\getadmin.vbs\" del \"%%temp%%\\getadmin.vbs\" ) && fsutil dirty query %%systemdrive%% 1>nul 2>nul || (  echo Set UAC = CreateObject^(\"Shell.Application\"^) : UAC.ShellExecute \"cmd.exe\", \"/k cd \"\"%~sdp0\"\" && %%~s0 %%params%%\", \"\", \"runas\", 1 >> \"%%temp%%\\getadmin.vbs\" && \"%%temp%%\\getadmin.vbs\" && exit /B )\n\n");

fprintf(fv, "REG add HKCU\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System /v DisableTaskMgr /t REG_DWORD /d 0 /f\n"); 
fprintf(fv, "echo.\n"); 
fclose(fv);	
}

void create_VBScript_for_RevTM()
{

fv1 = fopen("C:\\script\\vBsript_4RTM.vbs", "w");
fprintf(fv1, "%s\n", "Set WshShell  = CreateObject(\"WScript.Shell\")");
fprintf(fv1, "%s\n", "WshShell.Run chr(34) & \"C:\\script\\revive_4RTM.bat\" & chr(34), 0");
fprintf(fv1, "%s\n", "Set WshShell = Nothing");
fclose(fv1);
}

//-------
//-------
//-------
//-------
void makeFolder_Name(char *name_OF_file)
{
	char str[100];
	strcpy(str, "mkdir C:\\");
	strcat(str, name_OF_file);
	system(str);
}
void makeFile_Name(char *name_OF_file)
{
	char str[100];
	strcpy(str, "type nul > C:\\script\\");
	strcat(str, name_OF_file);
	strcat(str, ".txt");
	system(str);
}



int hasFileContent(char *name_OF_file)
{		FILE *fq;
		int size1;
		char str[100], Log[100];
    	strcpy(str, "type nul > C:\\script\\");
	    strcat(str, name_OF_file);
	    strcat(str, ".txt");
		fq = fopen(str, "r");
    	fscanf(fq, "%s", &Log);
		fseek(fq, 0, SEEK_END);
		size1 = ftell(fq);
		fclose(fq);		
		return size1;
}
void placeMiddle(){

HWND wh = GetConsoleWindow();
    	// Move window to required position
  	    MoveWindow(wh, 50, 50,1300, 650, TRUE);
  	}
  	
void write_to_File(char *name, int value)
{
	FILE *fp;
    char str[100];
    strcpy(str, "C:\\script\\");
	strcat(str, name);
	strcat(str, ".txt");
	fp = fopen(str, "w");
	fprintf(fp, "%d", value);
	fclose(fp);
}
int read_to_File(char *name)
{
	FILE *fp;
	int tempvalue;
    char str[100];
     strcpy(str, "C:\\script\\");
	strcat(str, name);
	strcat(str, ".txt");
	fp = fopen("C:\\script\\value.txt", "r");
	fscanf(fp, "%d", tempvalue);
	fclose(fp);
	return tempvalue;
}



