#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
void input (int a[100][100], int m, int n);
void output (int a[100][100], int m, int n);
void sapxep (int a[100][100],int m,int n);
int check1 (int x);
int check2 (int y);
void snt (int a[100][100], int m, int n);
int main(){
	int m, n, key;
	int a[100][100];
		while(true){
			system("cls");
			printf("********************************************************************\n");
			printf("**           GIAO DIEN DE 01                                      **\n");
	    	printf("**           1.Nhap/Xuat mang 2 cheu                              **\n");
			printf("**           2.Sap xep mang tang dan                              **\n");
			printf("**           3.Tong cac phan tu la so ngto chia het cho 3         **\n");
			printf("**           0.Thoat                                              **\n");
        	printf("********************************************************************\n");
			printf("\n       \t\t AN PHIM DE CHON :     ");
			scanf("%d",&key);
			switch(key){
				case 1:
		  			do{
			  			printf("\n\n\nNhap kich thuoc mang 2 chieu: \n");
	          			printf("\nm = ");
						scanf("%d",&m);
						printf("\nn = ");
						scanf("%d",&n);
					}while(n<=0 && m<=0);
		    		input(a,m,n);
		    		output(a,m,n);
		    		printf("\nBam phim bat ky de tiep tuc !");
		    		getch();
		    		break;
				case 2:
		  			sapxep(a,m,n);
		  			printf("\nBam phim bat ky de tiep tuc !");
		    		getch();
		    		break;
				case 3:
		  			snt(a,m,n);
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
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void input (int a[100][100], int m, int n){
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("\nNhap a[%d][%d]= ",i,j); 
			scanf("%d",&a[i][j]);
		}
	}
}
void output (int a[100][100], int m, int n){
	printf("\nMa tran a:\n"); 
	for(int i = 0; i< m; i++){
		for(int j = 0; j< n; j++){
			printf("|%3d |",a[i][j]);
		}
		printf("\n\n");
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void sapxep (int a[100][100],int m,int n){
	int tmp, ntmp;
	//Sap xep tu tren xuong duoi 
    	for(int i = 0; i < n; i++){
	   		for(int j = 0; j < m-1; j++){
	      		for(int k = j + 1; k < m; k++){
		     		if(a[j][i] > a[k][i]){ 
		        		tmp = a[j][i];
		        		a[j][i] = a[k][i];
		        		a[k][i] = tmp;
			 		}
		  		}
		
	   		}
		}
	//Sap xep tu trai qua phai 
		for(int l = 0; l < m; l++){
	   		for(int p = 0; p < n-1; p++){
	      		for(int q = p+1; q < n; q++){
		     		if (a[l][p]>a[l][q]){ 
		        		ntmp = a[l][p];
		        		a[l][p] = a[l][q];
		        		a[l][q] = ntmp;
			 		}
		  		}
		
	   		}
		}
		printf("\nMang a sau khi duoc sap xep lai la: \n");
		for(int r = 0; r < m; r++){
	    	for(int s = 0; s < n; s++){
		   		printf("|%3d |",a[r][s]);
			}
			printf("\n\n");
	 	}  
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int check1 (int x){
	int OK = 1;
		if(x < 2){
			OK=0;
		}
		else{
			for(int i = 2; i < x; i++){
				if(x % i == 0 && x != 2){
		   	   		OK=0;
		  	   		break;	
				}
			}
		}
	return OK;
}
int check2 (int y){
	if(y % 3 == 0){
        return 1;
    }
    return 0;
}
void snt (int a[100][100], int m, int n){
	printf("\nCac phan tu la so nguyen to chia het cho 3 trong ma tran a: \n");
	int COUNT = 0, SUM = 0;
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++){
	 	 		if(check1(a[i][j]) == 1){
	 	 			if(check2(a[i][j]) != 0){
						printf("%4d",a[i][j]);
	 	 	 			COUNT++;
	 	 	 			SUM = SUM + a[i][j];
	 	 			}
	 			}
	 		}
	 	}
	 		printf("\nCo %d phan tu co gia tri la so nguyen to chia het cho 3 trong ma tran a va tong cua chung bang %d",COUNT,SUM);
}

