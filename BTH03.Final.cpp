#include<stdio.h>
void nhapmang1c(int a[100], int n);
void xuatmang1c(int a[100], int n);
void maxmang(int a[100], int n);
void tichmang(int a[100], int n);
int ktntmang(int a);
void tongsnt(int a[100], int i);
void timx(int a[100], int n ,int x);
void sapxepmang(int a[100],int n);
void chenx(int a[100],int n, int x);
void xoa(int a[100], int n, int x);

int main()
{   
int n, a[100], i, j, max, x, tong, ktnt;

	//1.Nhap so phan tu cua mang
do{
	printf(" 1.Nhap so phan tu cua mang a: ");
    scanf("%d", &n);
  }while(n<=1 || n>100);
    	
	nhapmang1c(a,n);
    xuatmang1c(a,n);
    maxmang(a,n);
	tichmang(a,n);
    tongsnt(a,n);
    
    //7.1.Nhap gia tri x
    printf(" 7.1.Nhap x="); 
	scanf("%d",&x);
	
	timx(a,n,x);
	sapxepmang(a,n);
    chenx(a,n,x);
	xoa(a,n,x); 
       
return 0;
}

    //2.Nhap mang 1 chieu
    
void nhapmang1c(int a[100], int n)
{
	for (int i=0; i<n; i++)
    {
    	printf(" 2.Nhap phan tu thu a[%d]= ",i);
     	scanf("%d",&a[i]);
    }
}
     //3.Xuat mang 1 chieu
     
void xuatmang1c(int a[100], int n) 
{
	printf(" 3.Cac phan tu co trong mang a la:  \n");
    for(int i=0; i<n; i++)
    printf(" %d; ",a[i]);    	
}
	   
     //4.Tim gia tri lon nhat
     
void maxmang(int a[100], int n)
{
	int i,j, max=0;
	
	for(i=0;i<n;i++)
	{
		if (max <= a[i]) 
		max = a[i];
		if (max <= a[i]) 
		j=i;
	}
    printf("\n 4.Gia tri lon nhat trong mang a la: %d \n",max);
}
  
	 //5.Tich cac phan tu mang
void tichmang(int a[100], int n)
{
	int tich=1;
    for(int i = 0; i<n ; i++)
    tich=tich*a[i];
    printf(" 5.Tich cac phan tu trong mang a la: %d \n",tich);
}

     //6.Dem va tinh tong cac phan tu nguyen to 
     
int ktntmang(int a)
{
	int demktnt=0, i;
	   
	for(i =2; i<=a; i++)
	{
		if(a%i==0)
	    demktnt++;
	}
	return demktnt;
}
void tongsnt(int a[100], int n)
{ 
	int i,j,dem=0, tong=0, demktnt=0;
	
	for(i=0;i<n;i++)
	{
 		if(ktntmang(a[i])==1) 
		demktnt++; 
		if(ktntmang(a[i])==1) 
		tong=tong+a[i];
	}
	printf(" 6.1.Co %d phan tu la so nguyen to trong mang a \n",demktnt);
	printf(" 6.2.Tong cac phan tu la so nguyen to trong mang a la: %d \n",tong);
}

    //7.Nhap x roi tim vi tri 
    
void timx(int a[100], int n ,int x)
{
	int i,dem=0;
	
	//7.2.In vi tri (neu co)
	for (i=0;i<n;i++)
	{	
		if(a[i]==x) 
		printf(" 7.2.Gia tri %d cua phan tu a[%d] bang gia tri cua x",x,i);
		if(a[i]==x) 
		dem++;
	}
    if (dem==0)
	printf(" 7.2.Khong co gia tri cua phan tu nao trong mang a bang x");
}

    //8.Sap xep mang tang dan
    
void sapxepmang(int a[100],int n)
{
	int MIN;
  
	for(int i=0; i<n-1; i++)
	{
    	for(int j=i+1;j<n;j++)
		{
           if(a[i]>a[j])
			{
            	MIN=a[i];
            	a[i]=a[j];
            	a[j]=MIN; 
            }
        }
    }
    printf("\n 8.Gia tri mang a theo huong tang dan:");
    for(int i=0;i<n;i++)
	{
		printf("\n a[%d]=%d",i,a[i]);
    }
}

    //9.Chen phan tu x 
    
void chenx(int a[100],int n, int x)
{	
	printf("\n 9.1.Chen gia tri %d cua x vao phan tu a[%d]",x,n);
    a[n]=x;
    printf("\n 9.2.Mang a sau khi chen x:");
    for(int i=0;i<n+1;i++)
    {
    	printf("\n a[%d]=%d ",i,a[i]);
    }
}

	//10.Nhap k, xoa cac phan tu co gia tri bang k

void xoa(int a[100],int n, int x)
{
	int k,dem=0;
	
	printf("\n 10.1.Nhap k:");
	scanf("%d",&k);
	for(int f=0;f<n;f++)
	{
		for(int i=0;i<n;i++)
        {
	       if(a[i]==k)
	       {
	   	     dem++;
	         for(int j=i;j<n-1;j++)
	         {
		        a[j]=a[j+1];
		     }
		     n--;
	      }
	   }
	} 
	if(dem==0)
	{
		printf(" 10.2.Khong co phan tu nao trong mang a co gia tri bang k, mang a khong thay doi.");
		printf("\n      Mang a:");
		a[n]=x;
    	for(int i=0;i<n+1;i++)
    	{
    	printf("\n a[%d]=%d ",i,a[i]);
		}
	}
	else
	{
	   printf(" 10.2.Mang a sau khi xoa cac phan tu co gia tri bang k:");
	   for(int i=0;i<n;i++)
	   {
	      printf("\n %d ",a[i]);
	   }
	}	
}
	
