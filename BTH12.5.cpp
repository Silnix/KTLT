#include<stdio.h>
#include<conio.h>
#include<string.h>

typedef struct {
	char Ma[10];
	char HoTen[40];
} SinhVien;
///----------------------------
void ReadFile(char *FileName);
void WriteFile(char *FileName);
void Search(char *Filename);
int main(){
	int c;
	for (;;){
		printf("\n \t*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*\n");
		printf("\t 1. Nhap DSSV\n");
		printf("\t 2. In DSSV\n");
		printf("\t 3. Tim kiem\n");
		printf("\t 4. Thoat\n");
		printf("\t Ban chon 1, 2, 3, 4: ");
		scanf("%d",&c);
		fflush(stdin);
		if(c == 1){
			WriteFile("SinhVien.txt");
		}
			else if(c == 2){
				ReadFile("SinhVien.txt");
			}
				else if(c == 3){ 
					Search("SinhVien.txt");
				}
					else break;
	}
}
void WriteFile(char *FileName){
	FILE *f;
	int n,i;
	SinhVien sv;
	f=fopen(FileName, "ab");
	printf("Nhap vao so luong sinh vien ");
	scanf("%d",&n);
	for(i=1;i<n;i++){
		printf("Sinh vien thu %i\n",i);
		fflush(stdin);
		printf(" - MSSV: ");
		gets(sv.Ma);
		printf(" - Ho ten: ");
		gets(sv.HoTen);
		fwrite(&sv, sizeof(sv), 1, f);
	}
	fclose(f);
	printf("Bam phim bat ky de tiep tuc");
	getch();		
}
printf("Sinh vien thu %i\n",i);

void Search(char *FileName)
{
}
char MSSV[10];
FILE *f;
int Found=0;
SinhVien sv}
fflush(stdin);
printf("Ma so sinh vien can tim: ");
gets (MSSV);
f=fopen(FileName, "rb");
while (!feof(f) && Found==0)...
