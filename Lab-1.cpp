#include<stdio.h>
int main(){
	int ary[5];
	printf("Nhap mang : ");
	for(int i=0;i<5;i++){
		scanf("%d",&ary[i]);
	}
	float S=0;
	float dem=0;
	for(int i=0;i<5;i++){
		if(ary[i] % 2!=0){
			S+=ary[i];
			dem+=1;
		}
	}
	printf("Trung binh cong cac so le trong mang la : %f ",S/dem);
}
