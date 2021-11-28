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
int x;
for(int b=0; b<n-1; b++){
	for(int c = b+1; c<n; c++){
		if(a[c]<a[b]){
			x = a[c];
			a[c] = a[b];
			a[b] = x;
		}
	}
}
printf("Mang sap xep theo thu tu tang dan: ");
		 for(int i=0; i<n; i++){
		 	printf(" %d ",a[i]);
		 	}
}
