
void read_file(struct account accounts[])
{
    FILE *fp;
    int i=0;   // count how many lines are in the file
    int c;
    fp=fopen("C:\\name_pass.txt", "r");
    while(!feof(fp)) {
        c=fgetc(fp);
        if(c=='\n')
            ++i;
    }
    int j=0;
    rewind(fp);  // Line I added
        // read each line and put into accounts
    while(j!=i-1) {
        fscanf(fp, "%s %s", accounts[j].id, accounts[j].password);
        ++j;
    }
}

