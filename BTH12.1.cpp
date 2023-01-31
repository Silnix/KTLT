#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main (){
	FILE * fp;
	char filename[100], ch;
		printf("Filename: ");
		gets(filename);
	if( (fp = fopen(filename,"w")) == NULL ){
		printf("Create file error \n");
		exit(1);	
	}
	while( (ch = getche() ) != '\r')
		putc(ch,fp);
	fclose(fp);
return 0;
}
