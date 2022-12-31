#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include<ctype.h>
int input_output (char S[100]);
int rmvs (char S[100], int locus);
int rmvspc (char S[100]);
int chuanhoa (char S[100]);
int countchrtrs (char S[100]);
int main(){
	int key;
	char S[100];
		while(true){
			system("cls");
			printf("***************************************************************************\n");
			printf("**           GIAO DIEN DE 02                                             **\n");
	    	printf("**       1.Nhap chuoi S, chuan hoa chuoi S                               **\n");
			printf("**       2.Nhap mot ky tu, dem trong chuoi S co bao nhieu ky tu giong    **\n");
			printf("**       0.Thoat                                                         **\n");
        	printf("***************************************************************************\n");
			printf("\n       \t\t AN PHIM DE CHON :     ");
			scanf("%d",&key);
			switch(key){
				case 1:
		  			fflush(stdin);
					input_output(S);
		    		printf("\nBam phim bat ky de tiep tuc !");
		    		getch();
		    		break;
				case 2:
		  			fflush(stdin);
					countchrtrs(S);
		  			printf("\nBam phim bat ky de tiep tuc !");
		    		getch();
		    		break;
				case 0:
		  			exit(1);
		  		default:
		  			printf("\nKhong co chuc nang nay !");
		  			printf("\nBam phim bat ky de tiep tuc !");
		  			getch();
		  		break;	
			}
		}
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int input_output (char S[100]){
	printf("\nNhap chuoi S: ");
	gets(S);
	chuanhoa(S);
	printf("\nChuoi chuan hoa cua S:");
	puts(S);	
}
int rmvs (char S[100], int locus){
	int n = strlen(S);
		for(int i = locus; i < n; i++) {			
			S[i] = S[i + 1];
			S[n - 1] = '\0';			
		}
}
int rmvspc (char S[100]){
	for(int i = 0; i < strlen(S); i++) 
		if(S[i] == ' ' && S[i + 1] == ' ') {
			rmvs(S,i);
			i--;
		}
	if(S[0] == ' ')
		rmvs(S,0);
	if(S[strlen(S) - 1] == ' ')
		rmvs(S,strlen(S) - 1);
}		
int chuanhoa (char S[100]){
	int i = 0; 
		strlwr(S);
		rmvspc(S);
		S[0] = S[0] - 32;
		for(int i = 0; i < strlen(S); i++) {
			if(S[i]  == ' ' && S[i + 1] != ' ')
				S[i + 1] =  S[i + 1] - 32;
		}		
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int countchrtrs (char S[100]){
	int countchrtr = 0;
	char c;
		printf("\nNhap mot ky tu bat ki: ");
		scanf("%c",&c);
		fflush(stdin);
		strupr(S);
		for(int i = 0; i < strlen(S); i++) {
			if(S[i] == toupper(c))
				countchrtr++;
		}
		printf("\nSo lan xuat hien cua ky tu %c trong chuoi S la: %d", c, countchrtr);
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
