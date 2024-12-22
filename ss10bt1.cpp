#include<stdio.h>
int main(){
	int arr[10]={3,1,0,7,2,6,4,8,5,10};
	int check=1,n,index,size=10;
	printf("moi banh nhap phan tu de kiem tra: ");
	scanf("%d",&n);
	for(int i=0;i<size;i++){
		if(n==arr[i]){
	       index=i+1;
	       check=0;
			break;
		}
	}
		if(check){
			printf("so cua ban nhap khong co trong mang");
		}else{
			printf("so cua ban nam o vi tri %d trong mang",index);
		}
}
