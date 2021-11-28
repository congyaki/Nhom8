#include"stdio.h"
#include"string.h"
#include"stdlib.h"

int main(){
	char tpr[100] ;
	FILE *f;
	f=fopen("bth4_bai7" , "w");
	if(f==NULL){
		printf("\nloi file !");
		exit(0);
	}
	printf("nhap vao chuoi : ");
	fgets(tpr , sizeof tpr, stdin);
	printf("do dai chuoi : %d\n" ,strlen(tpr));
	puts(tpr);
	fprintf(f, "%s" , tpr);
	fprintf(f,"%d" , strlen(tpr));
	printf("choi dao nguoc : %s" , strrev(tpr));
	fprintf(f, "%s" , strrev(tpr));
	fclose(f);
}