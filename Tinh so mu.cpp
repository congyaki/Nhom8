#include"stdio.h"
int main(){
 int n;
 Nhap:
 printf("Nhap so n:");
 scanf("%d", &n);
 if (n<=0) goto Nhap;
printf("\n Day so le la:");
 	for(int i; i<=n; i++){
 	if(i%2 == 0) continue;
 	printf("\n %d", i);
	 }	
}
