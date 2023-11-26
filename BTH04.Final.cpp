#include <stdio.h>

void nhap(int a[100][100], int m, int n);
void xuat(int a[100][100], int m, int n);
void max(int a[100][100], int m,int n);
void min(int a[100][100], int m,int n);
int dem(int n);
void snt(int a[100][100], int m,int n);
void timx(int a[100][100], int m, int n);
void yenngua(int a[100][100], int m, int n);
void sapxep(int a[100][100], int m,int n);
void tong(int a[100][100], int m,int n);
void chan(int a[100][100], int m,int n);
void le(int a[100][100], int m,int n);
void tongtichAB(int A[100][100], int B[100][100]);

int main()
{
	int m, n, a[100][100], A[100][100], B[100][100];
//1. Nhap m dong, n cot	 
    	printf("1.1.Nhap so dong m cho mang: "); 
		scanf("%d",&m);
    	while (m < 0||m > 100){
    	printf("\n1.1.Vuot gía tri cho phep. Vui long nhap lai m:");
		scanf("%d",&m);
    	}
    	printf("\n1.2.Nhap so cot n  cho mang: "); 
		scanf("%d",&n);
    	while (n < 0||n > 100){
    	printf("\n1.2.Vuot gía tri cho phep. Vui long nhap lai n:");
		scanf("%d",&n);
    	}
    
    nhap(a,m,n);
    xuat(a,m,n);
    max(a,m,n);
    min(a,m,n);
    snt(a,m,n);
    timx(a,m,n);
    yenngua(a,m,n);
    sapxep(a,m,n);
    tong(a,m,n);
    chan(a,m,n);
    le(a,m,n);
    tongtichAB(A,B);
}
//2. Nhap ma tran  
void nhap(int a[100][100], int m, int n){
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("\n2.Nhap a[%d][%d]=",i,j); 
			scanf("%d",&a[i][j]);
		}
	}
}

//3. Xuat ma tran 
void xuat (int a[100][100], int m, int n){
	printf("\n3.Ma tran a:\n"); 
	for(int i = 0; i< m; i++){
		for(int j = 0; j< n; j++){
			printf("|%3d |",a[i][j]);
		}
		printf("\n\n");
	}
}

//4. MAX ,MIN 
	//4.1.MAX 
void max(int a[100][100],int m,int n){
	int sample = 0,x,y;
    	for(int i = 0; i < m; i++){
	    	for(int j = 0; j< n; j++){
	       		if (a[i][j] >= sample){
		   			sample = a[i][j];
		   			x = i;
		   			y = j;
		   		}
			}
		}
		printf("\n4.1.Phan tu lon nhat trong mang a la phan tu a[%d][%d], co gia tri:%d.",x,y,a[x][y]);
}
	//4.2.MIN 
void min(int a[100][100], int m, int n){
	int sample,x,y;
    	sample = a[0][0];
    	for(int i = 0; i < m; i++){
	    	for(int j = 0; j < n; j++){
	       		if (a[i][j] <= sample){
		   			sample = a[i][j];
		   			x = i;
		   			y = j;
		   		}
			}
		}
		printf("\n4.2.Phan tu nho nhat trong mang a la phan tu a[%d][%d], co gia tri:%d.",x,y,a[x][y]);
}

//5. Dem va tinh tong so nguyen to
	//5.1. Set up 
int dem(int n){
	int count = 0;
    	for(int i = 1; i <= n; i++){
	   		if (n%i == 0)
				count++;
		}
	return count;
}
	//5.2. Dem va tinh tong	  
void snt(int a[100][100], int m, int n){
     int x = 0, summary = 0;
     	for(int i = 0; i < m; i++){
	    	for(int j = 0; j< n; j++){
		   		if(dem(a[i][j]) == 2){
		     		printf("\n5.1.Gia tri %d cua phan tu a[%d][%d] la so nguyen to.\n",a[i][j],i,j);
		     		summary = summary + a[i][j];
		     		x++;
		   		}
			}
	 	}
	 	if(x == 0) 
	 	printf("\n5.2.Khong co gia tri nao trong ma tran a la so nguyen to.");
		else      
		printf("\n5.2.Vay co %d gia tri trong ma tran a la so nguyen to va tong cua chung bang: %d.",x,summary);  
}

//6. Nhap x, tim va in vi tri x 
void timx(int a[100][100],int m, int n){
     int x, y = 0;
     	printf("\n6.1.Nhap gia tri cho x="); 
		scanf("%d",&x);
    	for(int i = 0; i < m; i++){
	    	for(int j = 0; j < n; j++){
		   		if (a[i][j] == x){
		      		printf("\n6.2.Gia tri x xuat hien tren ma tran a tai vi tri a[%d][%d].",i,j);
		      		y++;
		   		}
			}
	 	}
	 	if( y == 0) 
		printf("\n6.2.Gia tri cua x khong xuat hien trong ma tran a.");
}

//7. Yen ngua: nho nhat dong, lon nhat cot. In cac diem do 
void yenngua(int a[100][100],int m, int n){
	 int x, y, max, count = 0, ncount = 0;
     	for(int k = 0; k < m; k++){
     		max=a[k][0];
	    	for(int i = 0; i < n; i++){
	       		if(a[k][i] <= max){
		        	max = a[k][i];
		           	x = i ;
		   		}
			}
			for (int j = 0; j < m; j++){
		   		if (max < a[j][x]){
			  		count++;
				}
			}
			if(count == 0){    
				printf("\n7.Phan tu a[%d][%d] la YEN NGUA.",k,x);
			    ncount++;
		    }
	    	count=0;
	 	} 
	 	if(ncount == 0) 
		printf("\n7.Khong co gia tri nao la YEN NGUA trong ma tran a.");
}

//8. Sap xep tang dan tu tren xuong duoi, tu trai qua phai 
void sapxep(int a[100][100],int m,int n){
	int sample, nsample;
	//8.1. Sap xep tu tren xuong duoi 
    	for(int i = 0; i < n; i++){
	   		for(int j = 0; j < m-1; j++){
	      		for(int k = j + 1; k < m; k++){
		     		if(a[j][i] > a[k][i]){ 
		        		sample = a[j][i];
		        		a[j][i] = a[k][i];
		        		a[k][i] = sample;
			 		}
		  		}
		
	   		}
		}
	//8.2. Sap xep tu trai qua phai 
		for(int l = 0; l < m; l++){
	   		for(int p = 0; p < n-1; p++){
	      		for(int q = p+1; q < n; q++){
		     		if (a[l][p]>a[l][q]){ 
		        		nsample = a[l][p];
		        		a[l][p] = a[l][q];
		        		a[l][q] = nsample;
			 		}
		  		}
		
	   		}
		}
		printf("\n8.Mang a sau khi duoc sap xep lai la: \n");
		for(int r = 0; r < m; r++){
	    	for(int s = 0; s < n; s++){
		   		printf("|%3d |",a[r][s]);
			}
			printf("\n\n");
	 	}  
}

//9. Tong pt nam tren duong cheo chinh  
void tong(int a[100][100],int m,int n){
	int x = 0;
		for(int i = 0; i < m; i++){
	 		for(int j = 0; j < n; j++){  
		   		if(i == j) 
				   x = x + a[i][j]; 		
	 		}
	 	}
	 	printf("\n9.Tong cac phan tu nam tren duong cheo chinh cua ma tran a la: %d",x);
}

//10. Dem so chan,tam giac duong cheo chinh 
void chan(int a[100][100],int m,int n){
	int count = 0;
		for(int i = 0; i < m; i++){
	 		for(int j = 0; j < n; j++){
		   		if(i == j){
		   	  		for(int k = j+1 ; k < n; k++){
		   	  	 		if(a[i][k] % 2 == 0) 
						count++;
		   	  		}
		   		}
			}
    	}
    	if(count == 0) 
		printf("\n10.Khong co phan tu nao la so chan nam trong tam giac tren cua duong cheo chinh cua ma tran a.");
    	else        
		printf("\n10.Co %d phan tu la so chan nam trong tam giac tren cua duong cheo chinh cua ma tran a, ma khong ke duong cheo chinh.",count);
}

//11. Tim va in so le, tam giac duoi cua duong cheo phu 
void le(int a[100][100],int m,int n){
	printf("\n11.Cac so le nam trong tam giac duoi cua duong cheo phu, ma tinh luon duong cheo phu:");
	printf("\n\n");
	int count = 0;
		for(int i = 0; i < m; i++){
	 		for(int j = 0; j < n; j++){
		   		if( j + i == n-1){
		       		for(int k = j; k< n; k++){
		   	   	  		if (a[i][k] % 2 == 1){
		   	   	  	 		count++;
		   	   	  	 	printf("|%3d |",a[i][k]);
		   	   	  		}
		   	   	  
			   		}
		   		}
	    	}
    	}
    	if(dem == 0) 
		printf("\n11.Khong co so le nao nam trong tam giac tren cua duong cheo phu trong ma tran a.");
}

//12. Nhap 2 ma tran A, B. Tong, tich hai ma tran 
void tongtichAB(int A[100][100],int B[100][100]){
	printf("\n12.1.Xay Dung ma tran A va B :");
	int m, n, product = 1, summary = 0;
		printf("\n12.2.Nhap so dong m cho  ma tran A va B: "); 
	 	scanf("%d",&m);
	 	printf("\n12.3.Nhap so cot n cho  ma tran A va B: "); 
	 	scanf("%d",&n);
	 	printf("\n12.4.Nhap ma tran A:");
	 	for(int i = 0; i < m; i++){
	 		for(int j = 0; j < n; j++){
	 	   		printf("\nA[%d][%d]=",i,j); 
				scanf("%d",&A[i][j]);
			} 
	 	}
	 	printf("\n12.5.Ma tran A:\n");
 	 	for(int i = 0; i < m; i++){
	 		for(int j = 0; j < n; j++){
	 	   		printf("|%3d |",A[i][j]);
			}
			printf("\n\n");
     	}
	 	printf("\n12.6.Nhap ma tran B:");
	 	for(int i = 0; i < m; i++){
	 		for(int j = 0; j < n; j++){
	 	   		printf("\nB[%d][%d]=",i,j); 
				scanf("%d",&B[i][j]);
			} 
	 	}	
	 	printf("\n12.7.Ma tran B:\n");
 	 	for(int i = 0; i < m; i++){
	 		for(int j = 0; j < n; j++){
	 	   		printf("|%3d |",B[i][j]);
			}	 
			printf("\n\n");
     	}
	 	for(int i = 0; i < m; i++){
	 		for(int j = 0; j < n; j++){
	 	   		summary=summary+A[i][j]+B[i][j];
	 	   		product=product*A[i][j]*B[i][j];
	 		}
	 	}
	 	printf("\n12.8.Tong cac phan tu cua ma tran A va B: %d.",summary);
     	printf("\n12.9.Tich cac phan tu cua ma tran A va B: %d.",product);
}

