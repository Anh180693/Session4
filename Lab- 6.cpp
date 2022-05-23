#include<stdio.h>
int main(){
	int n;
	printf("Nhap vao so phan tu cua mang : ");
	scanf("%d",&n);
	int ary[n];
	printf("Nhap cac phan tu cua mang : ");
	for(int i =0;i<n;i++){
		scanf("%d",&ary[i]);
	}
	int k;
	for(int i=0;i<n;i++){
		if(ary[i]>0){
			k=i;
			break;
		}
	}
	int max,x=0;
	for(int i=k;i<n;i++){
			if(ary[i]>0){
			x+=1;
				if(x>max){
			max=x;
		}
		}
		if(x>max){
			max=x;
		}
	}
		printf("  %d",max);
}
