#include<stdio.h>

void hello();
long tinhgiaithua(int n);
int tinhtong(int q, int r);
int tinhdtHCN(int q, int r);
int timUSCLN(int q, int r);
int kiemtraSNT(int q);
void hoanvi(int*,int*);
void KTNT(int n);
void TONGNT(int n);
 
//0.Xay dung ham main  
 
int main()
{	
	int n,q,r,s,t,u,v,w,x,y,z;
	
	//Xay dung cac ham in ra chuoi Hello World
	
	hello(); 
	 	 
	//Xay dung cac ham de tinh giai thua cua mot so nguyen 
	
	printf("\n\n Nhap mot so nguyen duong can tinh giai thua:");
	scanf("%d",&x);
	
	while(x<0 || x>33)
	{
		printf("\n So nguyen duong vua nhap vuot qua gia tri tinh toan. Vui long nhap lai so nguyen duong:"); 
		scanf("%d",&x);
	}  
	 	printf("\n Giai thua cua so nguyen duong %d = %d",x,tinhgiaithua(x));
	
	//Xay dung cac ham de tinh tong hai so nguyen
	 
	printf("\n\n Nhap so nguyen q:"); 
	scanf("%d",&q);
	printf("\n Nhap so nguyen r:"); 
	scanf("%d",&r);
	printf("\n Tong cua hai so nguyen %d va %d: %d",q,r,tinhtong(q,r));
	
	//Xay dung cac ham de tinh dien tich hinh chu nhat khi biet chieu dai, chieu rong 
	 
	printf("\n\n Nhap chieu dai hinh chu nhat:"); 
	scanf("%d",&s);
	printf("\n Nhap chieu rong hinh chu nhat:"); 
	scanf("%d",&t);
	printf("\n Dien tich cua hinh chu nhat: %d",tinhdtHCN(s,t));
	
	//Xay dung cac ham de tim uoc so chung lon nhat cua hai so nguyen duong
	 
	printf("\n\n Nhap so nguyen duong thu nhat can tim uoc chung:"); 
	scanf("%d",&u);
	printf("\n Nhap so nguyen duong thu hai can tim uoc chung:"); 
	scanf("%d",&v);
	printf("\n Uoc chung lon nhat cua %d va %d la: %d",u,v,timUSCLN(u,v));
	
	//Xay dung cac ham de kiem tra mot so co phai la so nguyen to hay khong 
	
	printf("\n\n Nhap so nguyen duong can kiem tra:"); 
	scanf("%d",&w);
	
	if(kiemtraSNT(w)==1) 
		printf("\n So nguyen duong %d la so nguyen to",w);
	else 
		printf("\n So nguyen duong %d khong phai so nguyen to",w);
	
	//Xay dung cac ham de hoan vi hai so nguyen
	 
	printf("\n\n Nhap so nguyen A can hoan vi:"); 
	scanf("%d",&y);
	printf("\n Nhap so nguyen B can hoan vi:"); 
	scanf("%d",&z);
	hoanvi(&y,&z);
	printf("\n Sau khi hoan vi thi A=%d va B=%d",y,z);
	
	//Xay dung cac ham cho nhap so nguyen duong n (0<n<20), neu sai phai nhap lai n ... 
	
	printf("\n\n Nhap so nguyen duong n:"); 
	scanf("%d",&n);
	
	while (n<1 || n>20)
	{
		printf("\n Nhap qua gia tri tinh duoc cua n. Vui long nhap lai so nguyen duong n:"); 
		scanf("%d",&n);
	} 
	
	 KTNT(n);
	 TONGNT(n);
	 tinhgiaithua(x);
	 tinhtong(q,r);
	 tinhdtHCN(s,t);
	 
return 0;
}

//1.Xay dung cac ham in ra chuoi Hello World

void hello()
{
	printf("\n\n Hello World!");
}

//2.Xay dung cac ham de tinh giai thua cua mot so nguyen

long tinhgiaithua(int n)
{
	int i,a=1;
	
	if(n==0) 
return 1;
	
	else for(i=0;i<n;i++)
	{
		a=a*(n-i);
	}
return a;
}

//3.Xay dung cac ham de tinh tong hai so nguyen
 
int tinhtong(int q, int r)
{
	int tong=0;
	tong=q+r;
	
return tong;
}

//4.Xay dung cac ham de tinh dien tich hinh chu nhat khi biet chieu dai, chieu rong

int tinhdtHCN(int q, int r)
{
	int dt=1;
	dt=q*r;
	
return dt;
}
 
//5.Xay dung cac ham de tim uoc so chung lon nhat cua hai so nguyen duong

int timUSCLN(int q, int r)
{
	int a;
	
	if(q==0 || r==0) 
	a=q+r;
	else while(q!=r)
	{
		if(q>r) 
		q-=r;
		else q-=r;
	} 
	a=q;
	
return a;
}

//6.Xay dung cac ham de kiem tra mot so co phai la so nguyen to hay khong
 
int kiemtraSNT(int q)
{
	int i, dem=0;
	
	for(i=2;i<=q;i++)
	{
		if(q%i==0) 
		dem++;
	}
	
return dem;
}

//7.Xay dung cac ham de hoan vi hai so nguyen
 
void hoanvi(int *q, int *r)
{
	int tam=0;
	
	tam=*q;
	*q=*r;
	*r=tam;
}

//8.Xay dung cac ham cho nhap so nguyen duong n (0<n<20), neu sai phai nhap lai n ...

	// Kiem tra SNT 
void KTNT(int n) 
{
	if(kiemtraSNT(n)==1)
	    printf("\n\n So nguyen duong n la so nguyen to");
	else
	    printf("\n So nguyen duong n khong la so nguyen to");
}

	//Tinh tong cac so nguyen to tu 1 den n
void TONGNT(int n)
{
    int i,tong=0;
    
	for(i=1;i<=n;i++)
	{
		if(kiemtraSNT(i)==1)
		tong=tong+i;
	}	
    printf("\n Tong cac so nguyen to tu 1 den %d la: %d",n,tong);
}
