//the fgetc() function returns a single character from the file
//it gets a character from the stream.
//it return EOF at the end of file.
#include<stdio.h>

void main()
{
    FILE *fp;
    char c;
    fp=fopen("myfile.txt","r");
    while((c=fgetc(fp))!=EOF)//EOF maens end of file
    {
        printf("%c",c);
    }
    fclose(fp);
}
