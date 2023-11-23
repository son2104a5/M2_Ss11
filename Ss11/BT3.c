#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,searchValue,count,mid,temp,j;
	int start=0;
	printf("nhap so phan tu co trong mang:");
	scanf("%d",&n);
	int numbers[n];
	int end=sizeof(numbers)/sizeof(int);
	for(int i=0;i<n;i++){
		printf("numbers[%d]=",i);
		scanf("%d",&numbers[i]);
	}
	do{
		printf("\n***************MENU****************\n");
		printf("1. In gia tri cac phan tu cua mang\n");
		printf("2. Nhap gia tri tim kiem va su dung thuat toan tim kiem tuyen tinh tim tat ca cac phan tu trong mang co gia tri bang gia tri tim kiem\n");
		printf("3. Nhap gia tri tim kiem va su dung thuat toan tim kiem nhi phan tim phan tu trong mang\n");
		printf("4. Thoat\n");
		int choice;
		printf("Lua chon cua ban:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Cac phan tu co trong mang la:\n");
				for(int i=0;i<n;i++){
					printf("%d\t",numbers[i]);
				}
				break;
			case 2:
				printf("Nhap gia tri ban muon tim trong mang:");
				scanf("%d",&searchValue);
				for(int i=0;i<n;i++){
					if(numbers[i]==searchValue){
						count++;
					}
				}
				if(count==0){
					printf("Khong co gia tri ban can tim trong mang\n");
				}else{
					printf("Co tat ca %d gia tri ban can tim trong mang\n",count);
				}
				break;
			case 3:
				for(int i=0;i<n-1;i++){
					for(j=i+1;j<n;j++){
						if(numbers[i]>numbers[j]){
							temp=numbers[i];
							numbers[i]=numbers[j];
							numbers[j]=temp;
						}
					}
				}
				for(int i=0;i<n;i++){
					printf("%d\t",numbers[i]);
				}
				printf("\nNhap gia tri ban muon tim trong mang:");
				scanf("%d",&searchValue);
				while(start<=end){
					mid=(start+end)/2;
					if(numbers[mid]==searchValue){
						break;
					}else if(numbers[mid]<searchValue){
						start=mid+1;
					}else{
						end=mid-1;
					}
				}
				if(numbers[mid]==searchValue){
                    printf("Phan tu co chi so %d trong mang co gia tri %d\n",mid,numbers[mid]);
                }else{
                    printf("Khong tim thay phan tu co gia tri %d trong mang\n",searchValue);
                }
				break;
			case 4:
				exit(0);
			default:
				printf("Vui long nhap gia tri tu 1-4\n");
		}
	}while(1==1);
}
