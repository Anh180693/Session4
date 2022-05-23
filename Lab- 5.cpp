#include<stdio.h>
int main(){
	int n;
	printf("Nhap so phan tu cua mang : ");
	scanf("%d",&n);
	int ary[n];
	printf("Nhap phan tu mang : ");
	for(int i=0;i<n;i++){
		scanf("%d",&ary[i]);
	}
	int min = ary[0];
	for(int i=1;i<n;i++){
		if(ary[i]>0 && ary[i]<min){
			min = ary[i];
		}
	}
	printf("So nguyen duong nho nhat la : %d",min);
}
