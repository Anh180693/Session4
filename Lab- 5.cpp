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
	int max = 0;
	for(int i=0;i<n;i++){
		if(ary[i] > max){
			max = ary[i];
		}
	}
	printf("So nguyen duong lon nhat la : %d",max);
}
