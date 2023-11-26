#include <stdio.h>
#include <stdlib.h>

void input (int *a, int n);
void output (int *a, int n);
void max (int *a, int n);
void min (int *a, int n);
int check (int x);
void snt (int *a, int n);
void findx (int *a, int n);
void permutation (int *x, int *y);
void arrange (int *a, int n);
void sum (int *a, int n);
void even (int *a, int n);
void ABC (int *A, int *B, int *C, int M, int N);
void *calloc	(size_t nitems,size_t size);
//1.Ham  
int main(){
	int n,M,N;
	int *a,*b,*A,*B,*C;
		a=(int*)calloc(200,sizeof(int));
		b=(int*)calloc(200,sizeof(int));
		A=(int*)calloc(200,sizeof(int));
		B=(int*)calloc(200,sizeof(int));
		C=(int*)calloc(200,sizeof(int));
		printf("2.1.Nhap n la so dong & cot cho ma tran: n = "); 
		scanf("%d",&n);
	input(a,n);		//2.Nhap ma tran
	output(a,n);	//3.Xuat ma tran 
	max(a,n);		//4.1.Tim GTLN trong ma tran 
	min(a,n);		//4.2.Tim GTNN trong ma tran 
	snt(a,n);		//5.Dem cac gia tri la so nguyen to va tinh tong chung trong ma tran 
	findx(a,n);		//6.Tim su ton tai cua gia tri x trong ma tran 
	arrange(a,n);	//7.Sap xep ma tran tang dan tu trai -> phai & tren -> xuong
	sum(a,n);		//8.Tinh tong cac phan tu nam tren duong cheo chinh cua ma tran 
	even(a,n);		//9.Dem cac phan tu la so chan trong tam giac tren cua duong cheo chinh (khong ke duong cheo chinh )
		printf("\n\n10.XAY DUNG MA TRAN A&B VA TINH TONG TICH CUA A&B\n\n");
		printf("\n10.1.Nhap m la so dong cho A&B: m = "); 
		scanf("%d",&M);
		printf("\n10.2.Nhap n la so cot cho A&B: n = ");  
		scanf("%d",&N);
	ABC(A,B,C,M,N);	//10.Nhap hai ma tran A&B. Tinh tong & tinh cua A&B
		printf("\nNhan phim bat ky de ket thuc !");
}
void input (int *a, int n){
	 printf("\n2.2.Nhap cac phan tu cho ma tran:\n");
	 for(int i = 0; i < n; i++){
	 	 for(int j = 0; j < n; j++){
	 		printf("a[%d][%d] = ",i,j); 
			scanf("%d",a+i*n+j);
	 	 }
	 }
}
void output (int *a, int n){
	 printf("\n3.Ma tran da nhap:\n");
	 for(int i = 0; i < n; i++){
	 	for(int j = 0; j < n; j++){
	 	 	 printf("%4d",*(a+i*n+j));
	 	 }
	 	 printf("\n\n");
	 }
}
void max (int *a, int n){
	 int max = *(a+0*n+0);
	 	for(int i = 0; i < n; i++){
	 		for(int j = 0; j < n; j++){
	 	 		if(*(a+i*n+j) >= max) 
					max = *(a+i*n+j);
	 	 	}	
	 	}
	 	printf("\n4.1.Gia tri lon nhat trong ma tran la %d.",max);
}
void min (int *a, int n){
	 int min= *(a);
	 	for(int i = 0; i < n; i++){
	 		for(int j = 0; j < n; j++){
	 	 		if(*(a+i*n+j) <= min) 
					min = *(a+i*n+j);
	 	 	}
	 	}
	 	printf("\n4.2.Gia tri nho nhat trong ma tran la %d.",min);
}
int check (int x){
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
void snt (int *a, int n){
	printf("\n5.1.Cac phan tu la so nguyen to trong ma tran:\n");
	int COUNT = 0, SUM = 0;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
	 	 		if(check(*(a+i*n+j)) == 1){
					printf("%4d",*(a+i*n+j));
	 	 	 		COUNT++;
	 	 	 		SUM = SUM + *(a+i*n+j);
	 	 		}
	 		}
	 	}
	 	printf("\n5.2.Co %d phan tu co gia tri la so nguyen to trong ma tran va tong cua chung bang %d",COUNT,SUM);
}
void findx (int *a, int n){
	int x, OK = 0;
		printf("\n6.1.Nhap x can tim: x="); 
	 	scanf("%d",&x);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
	 	 		if (x == *(a+i*n+j)){
	 	 	 		OK++;
	 	 	 		printf("\n6.2.x xuat hien tai dong thu %d, cot thu %d (vi tri a[%d][%d]) trong ma tran",i+1,j+1,i,j);
	 	 	 	}
	 	 	}
	 	}
	 	if(OK == 0) 
			printf("\n6.2.x khong xuat hien trong ma tran!");
}
void permutation (int *x, int *y ){
	 int tmp;
	 	tmp = *x;
	 	*x = *y;
	 	*y = tmp;
}
void arrange (int *a, int n){
	for(int i = 0; i < n; i++){
    	for(int j = 0; j < n; j++){
     		for(int k = j + 1; k < n; k++){
     			if(*(a+j*n+i) >= *(a+k*n+i)){
     	  	  		permutation(a+j*n+i, a+k*n+i);
     	  	  	}
     	  	}
     	}
    }
    for(int i = 0; i < n; i++){
    	for(int j = 0; j < n; j++){
     		for(int k = j + 1; k < n; k++){
     	  	  	if(*(a+i*n+j) >= *(a+i*n+k)){
     	  	  		permutation(a+i*n+j, a+i*n+k);
     	  	    }
     	  	}
     	}
    }
    printf("\n7.Mang sau khi sap xep:\n");
    for(int i = 0; i < n; i++){
    	for(int j = 0; j < n; j++){
     		printf("%4d",*(a+i*n+j));
     	}
      	printf("\n\n");
    }
}
void sum (int *a, int n){
	int x = 0;
		for(int i = 0; i < n; i++){
    		for(int j = 0; j < n; j++){
		    	if(i == j) 
					x = x + *(a+i*n+j); 		
	 	 	}
	 	}
	 	printf("\n8.Tong cac phan tu nam tren duong cheo chinh cua ma tran = %d",x);
}
void even (int *a,int n){
	int COUNT = 0;
		for(int i = 0; i < n; i++){
    		for(int j = 0; j < n; j++){
				if(i == j){
					for(int k = j + 1; k < n; k++){
						if(*(a+i*n+k) % 2 == 0) 
							COUNT++;
		   	  		}
		   		}
			}
    	}
    	if(COUNT == 0) 
			printf("\n9.Khong co phan tu nao la so chan nam trong tam giac tren cua duong cheo chinh cua ma tran!");
    	else        
			printf("\n9.Co %d phan tu la so chan nam trong tam giac tren cua duong cheo chinh cua ma tran ma khong ke duong cheo chinh!",COUNT);
}
void ABC (int *A, int *B, int *C, int M, int N){
	printf("\n10.3.Nhap ma tran A:\n");
	for(int i = 0; i < M; i++){
		for(int j = 0; j < N; j++){
	 		printf("\nA[%d][%d] = ",i,j); 
			scanf("%d",A+i*N+j);
	 	}
	}
	printf("\n10.4.Nhap ma tran B:\n");
	for(int i = 0; i < M; i++){
		for (int j = 0;j < N; j++){
	 		printf("\nB[%d][%d] = ",i,j); 
			scanf("%d",B+i*N+j);
	 	}
	}
	printf("\n10.5.Ma tran A:\n");
	for(int i = 0; i < M; i++){
		for(int j = 0; j < N; j++){
	 		printf("%4d",*(A+i*N+j));
	 	}
	 	printf("\n\n");
	}
	printf("\n10.6.Ma tran B:\n");
	for(int i = 0; i < M; i++){
		for(int j = 0; j < N; j++){
	 		printf("%4d",*(B+i*N+j));
	 	}
	 	printf("\n\n");
	}
	for(int i = 0; i < M; i++){
		for(int j = 0; j < N; j++){
	 		*(C+i*N+j) = *(A+i*N+j) + *(B+i*N+j);
	 	}
	}
	printf("\n10.7.Tong hai ma tran A & B la:\n");
	for(int i = 0; i < M; i++){
		for(int j = 0; j < N; j++){
	 	 	printf("%4d",*(C+i*N+j));
	 	}
	 	printf("\n\n");
	}
	if(M != N) 
		printf("\n10.8.Khong the tinh tich hai ma tran A va B do so dong cua ma tran A khong bang so cot cua ma tran B!");
	else{
		for(int a = 0; a < M; a++){
	 		for(int b = 0; b < N; b++){
				*(C+a*N+b) = 0;
	 	 	}
	 	}
	 	for(int i = 0; i < M; i++){
	 		for(int j = 0; j < N; j++){
	 	 		for(int k = 0; k < N; k++){
	 	 	 		*(C+i*N+j) = *(C+i*N+j) + (*(A+i*N+k) * *(B+k*N+j));
	 	 	 	}
	 	 	}
	 	}
	 	printf("\n10.8.Goi tich hai ma tran A & B la mot ma tran C. C la:\n");
		for(int i = 0; i < M; i++){
	 		for(int j = 0; j < N; j++){
	 	 		printf("%4d",*(C+i*N+j));
	 	 	}
	 	 	printf("\n\n");
	 	}
	 	 
	}
}

