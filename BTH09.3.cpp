#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
struct SinhVien {
	   char Masv[10];
	   char Hotensv[10];
	   char Phai[10];
	   float Diemtoan;
	   float Diemvan;
	   float DiemAV;
	   float KQHT;
	   char Xeploai[50];
};

typedef struct SinhVien SINHVIEN;
void Sapxep (SINHVIEN b[], int z);
void Nhapsv (SINHVIEN &x);
void NhapsvN (SINHVIEN b[], int z);
void Xuatsv (SINHVIEN x);
void XuatsvN (SINHVIEN b[], int z);

int main() {
	int z, key;
	SINHVIEN x, b[100];
	while(true) {
		system("cls");
		printf("***************************************************\n");
		printf("**           GIAO DIEN DE 03                     **\n");
	    printf("**       1.Nhap DS Sinh Vien                     **\n");
		printf("**       2.In DS Sinh vien tang dan theo KQHT    **\n");	    
		printf("**       0.Thoat                                 **\n");
        printf("***************************************************\n");
		printf("\n       \t\t AN PHIM DE CHON :     ");
		scanf("%d",&key);
		switch(key) {
			case 1:
		  		do {
			  		printf("\n\n\nNhap so luong sinh vien: ");
	          		scanf("%d",&z);
				}while(z<=0);
		    	NhapsvN(b,z);
		    	printf("\nBam phim bat ky de tiep tuc !");
		    	getch();
		    	break;
			case 2:
				Sapxep(b,z);
		  		XuatsvN(b,z);
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
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Nhapsv(SINHVIEN &x) {
	fflush(stdin);
	printf("\nNhap Ma So SV :");
	gets(x.Masv);
    fflush(stdin);
    printf("\nNhap ho ten :");
    gets(x.Hotensv);
    fflush(stdin);
    printf("\nNhap phai :");
    gets(x.Phai);
	fflush(stdin);
	printf("\nNhap Diem toan: ");
	gets(x.Diemtoan);
	fflush(stdin);
	printf("\nNhap Diem van: ");
	gets(x.Diemvan);
	fflush(stdin);
	printf("\nNhap Diem anh van: ");
	gets(x.DiemAV);
	x.KQHT = (x.Diemtoan * 2 + x.Diemvan * 2 + x.DiemAV) / 5
	fflush(stdin);
	if(x.KQHT < 1.5) {
		strcpy(x.Xeploai,"Yeu"); 
	}
	else  
		if(x.KQHT< 2.5) {
	   		strcpy(x.Xeploai,"Trung binh");
		}
	   	else
	     	if(x.KQHT< 3.5) {
	       		strcpy(x.Xeploai,"Kha");
	     	}
	     	else
	        	if(x.KQHT< 3.7) {
	          		strcpy(x.Xeploai,"Gioi");
	        	}
	        	else {
	          		strcpy(x.Xeploai,"Xuat sac");
	        	} 
}
void NhapsvN(SINHVIEN b[], int z) {
	for(int i=0;i<n;i++) {
		printf("\nNhap sinh vien thu %d",i+1);
	 	Nhapsv(b[i]);
	}
}
void Xuatsv(SINHVIEN x) {
	printf("|%5s  |%-18s|%-6s|%11.1f|%10.1f|%9.1f|%13.1f|%-10s|",x.Masv,x.Hotensv,x.Phai,x.Diemtoan,x.Diemvan,x.DiemAV,x.KQHT,x.Xeploai);
}
void XuatsvN(SINHVIEN b[], int z) {
	system("cls");
	printf("\n\n|-------------------------------------------------------------------------------------------|\n");
    printf("\n| Ma SV | Ho ten sinh vien | Phai | Diem toan | Diem van | Diem AV | KQ hoc tap  | Xep loai |");
	for(int i=0;i<n;i++) {
		printf("|-------|------------------|------|-----------|----------|---------|-------------|----------|\n");
		Xuatsv(b[i]);
	}	
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Sapxep(SINHVIEN b[], int z) {
	SINHVIEN tmp;
	for(int i=0;i<n;++i) {
	   for(int j=i+1;j<n;++j) {
	   	  if(b[i].KQHT > b[j].KQHT) {
	   	  	tmp   = b[i];
	   	  	b[i]  = b[j];
	   	  	b[j]  = tmp;
		  }
	   }
	}
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
