#include"stdio.h"
float trung_binh_cong(int x[], int n){
 int tong = 0;
for(int i=0; i<n; i++){
tong+= x[i];
 }return (float)tong/n;
} 
int main(){
 int a[100];
 int n;
 do{
 	printf("Nhap so luong phan tu");
 	scanf("%d", &n);
 }while(n<1 || n>100);
 for(int i=0; i<n; i++){
  printf("\n a[%d]", i);
  scanf("%d", &a[i]);
 }	
 printf("Tong gia tri cua mang = %.2f ",trung_binh_cong(a, n) );
}	
