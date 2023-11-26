#include<stdio.h>
#include<stdlib.h>
int input (int *a, int n);
int output (int *a, int n);
int max (int *a, int n);
int multiply (int *a, int n);
int check (int b);
int addition (int *a, int n);
int findx(int *a, int n ,int x);
int arrange (int *a, int n);
//1.Ham main
int main () {
	int *a, b, n, x;
		do {
			printf("\n2.1.Nhap n phan tu la so nguyen:");
			scanf("%d",&n);
		}while(n <= 1 || n>100);
		a = (int *)malloc(sizeof(int)*n);
	input(a,n);
	output(a,n);
	max(a,n);
	multiply(a,n);
	check(b);
	addition(a,n);
//7.1.Nhap x
		printf("\n7.1.Nhap x:"); 
		scanf("%d",&x);
	findx(a,n,x);
	arrange(a,n);
}
//2.Nhap mang
int input (int *a, int n) {
	for(int i = 0; i < n; i++) {
		printf("\n2.2.Nhap a[%d]:",i);
		scanf("%d",a+i);
	}
}
//3.Xuat mang
int output (int *a, int n) {
	printf("\n3.Mang vua nhap:");
	for(int i = 0; i < n; i++) {
		printf("%3d",*(a+i));
	}	
}
//4.Gia tri lon nhat
int max (int *a, int n) {
	int i,j, MAX = 0;
		for(i = 0; i < n; i++) {
			if (MAX <= *(a+i)) 
				MAX = *(a+i);
			if (MAX <= *(a+i)) 
				j=i;
		}
   		printf("\n4.Gia tri lon nhat trong mang la: %d",MAX);
}
//5.Tich cac phan tu
int multiply (int *a, int n) {
	int MULTIPLY = 1;
    	for(int i = 0; i < n ; i++)
    		MULTIPLY = MULTIPLY * *(a+i);
    	printf("\n5.Tich cac phan tu trong mang la: %d",MULTIPLY);
} 
//6.Dem va tinh tong so nguyen to
int check (int b) {
	int CHECK = 0, i;
		for(i = 2; i <= b; i++) {
			if(b % i == 0)
	    		CHECK++;
		}
	return CHECK;
}
int addition (int *a, int n) { 
	int i, j, count = 0, ADD = 0, CHECK = 0;
		for(i = 0; i < n; i++)
		{
 			if(check(*(a+i)) == 1) 
				count++; 
			if(check(*(a+i)) == 1) 
				ADD = ADD + *(a+i);
		}
		printf("\n6.1.Co %d phan tu la so nguyen to trong mang.",count);
		printf("\n6.2.Tong cac phan tu la so nguyen to trong mang la: %d",ADD);
}
//7.Nhap x, in vi tri, nguoc lai thong bao
int findx (int *a, int n ,int x) {
	int count = 0;
//7.2.In vi tri (neu co)
		for(int i = 0; i < n; i++) {	
			if(*(a+i) == x) 
				printf("7.2.Gia tri %d cua phan tu a[%d] bang gia tri cua x",x,i);
			if(*(a+i) == x) 
				count++;
		}
    	if (count == 0)
		printf("7.2.x khong ton tai");
}
//8.Sap xep tang dan 
int arrange (int *a, int n) {
	int MIN;
  		for(int i = 0; i < n-1; i++) {
  			for(int j = i + 1; j < n; j++) {
           		if(*(a+i) > a[j]) {
            		MIN = *(a+i);
            		*(a+i) = *(a+j);
            		*(a+j) = MIN; 
            	}
        	}
  		}		
    	printf("\n8.Gia tri mang theo huong tang dan:");
    	for(int i = 0; i < n; i++) {
			printf("\n a[%d] = %d",i,*(a+i));
   		}
}
