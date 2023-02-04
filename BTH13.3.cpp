#include<stdio.h>
#include<conio.h>
#include<string.h>

int tongN (int n);
int main() {
	int i, n, tinhtongN;
		printf("Nhap  mot so nguyen duong: ");
		scanf("%d",&n);
		tinhtongN = tongN(n);
		printf("\nTong cac so tu 1 toi %d la: %d", n, tinhtongN);
		
		return(0);
}
int tongN (int n){
	int tinhtong;
		if(n == 1){
			return(1);
		} else {
			tinhtong = n + tongN(n - 1);
		}
		return(tinhtong);
}
