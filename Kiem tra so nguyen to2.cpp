#include"stdio.h"
#include"math.h"
int kiem_tra_so_nguyen_to(int x[], int n){
for(int i=0; i<n; i++){
	if(x[i]<=1)
	return 0;
}
for(int j=0; j<n; j++){	
for(int i=2; i<= ( int x)-1; i++){
	if(x[j]%i==0)
	return 0;
	}
 }
 return 1;	
}	
int main(){
 int a[100];
 int n;
 do{
 printf("Nhap so luong phan tu: ");
 scanf("%d", &n);
}
while(n<1 || n>100);
for(int i=0; i<n; i++){
 	printf("\n a[%d]=",i);
 	scanf("%d", &a[i]);
 }
 for(int i=0; i<n; i++){
 int kt = (a[i]);
 if(kt) printf(" %d ", a[i]);
 }	
}
