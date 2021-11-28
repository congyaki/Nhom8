#include"stdio.h"
int main(){
	int a[100];
	int n;
do{
	printf("Nhap so phan tu cua mang:");
	scanf("%d", &n);		
	}while(n<1 || n>100);
 for(int i=0; i<n; i++){
 	printf("\n a[%d]=",i);
 	scanf("%d", &a[i]);
 }
 
 int maxnum = a[0];
for(int i = 1; i<n; i++){
	if(a[i]>maxnum) maxnum = a[i];
	}
printf("So lon nhat trong day la: %d", maxnum);
int minnum = a[0];
for(int i = 1; i<n; i++){
	if(a[i]<minnum) minnum = a[i];
	}
printf("\nSo be nhat trong day la: %d", minnum);
}
