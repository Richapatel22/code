#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *fp;
	char ch,a;
	int i;
	char str[]="richapatel";
	a=strrev(str);
	
	fp=fopen("file.txt","a");
	fprintf(fp,"%s",str);
	fprintf(fp,"%s",a);
	fclose(fp);

	
	
}
