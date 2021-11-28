#include"stdio.h"
#include"math.h"
int kiem_tra_so_nguyen_to(int n){
    if(n<2)
        return 0;
    else{
        for(int i=2;i<=n/2;i++)
            if(n%i==0)
                return 0;
        return 1;
    }
}
 
int insonguyento(int a[], int n){
    printf("\nCac so nguyen to co trong mang la: \n");
    for(int i=0;i<n;i++)
        if(kiem_tra_so_nguyen_to(a[i]))
            printf("%5d",a[i]);
            }
int main(){
 int a[100];
 int n;
 do{
 printf("Nhap so luong phan tu: ");
 scanf("%d", &n);
}while(n<1 || n>100);
for(int i=0; i<n; i++){
 	printf("\n a[%d]=",i);
 	scanf("%d", &a[i]);
 }
 kiem_tra_so_nguyen_to(n);
 insonguyento(a,n);
}	
