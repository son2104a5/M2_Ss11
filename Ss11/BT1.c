#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,key,j,temp;
	printf("nhap so phan tu co trong mang:");
	scanf("%d",&n);
	int numbers[n];
	for(int i=0;i<n;i++){
		printf("numbers[%d]=",i);
		scanf("%d",&numbers[i]);
	}
	do{
		printf("\n************MENU**************\n");
		printf("1. In ra cac phan tu cua mang\n");
		printf("2. Su dung Insertion Sort sap xep mang giam dan va in ra\n");
		printf("3. Su dung Seclection Sort sap xep mang tang dan va in ra\n");
		printf("4. Su dung Bubble Sort sap xep mang giam dan va in ra\n");
		printf("5. Thoat\n");
		int choice;
		printf("Nhap lua chon cua ban:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Cac phan tu co trong mang la:\n");
				for(int i=0;i<n;i++){
					printf("%d\t",numbers[i]);
				}
				break;
			case 2:
				for(int i=1;i<n;i++){
					key=numbers[i];
					j=i-1;
					while(j>=0&&numbers[j]>key){
						numbers[j+1]=numbers[j];
						j--;
					}
					numbers[j+1]=key;
				}
				printf("Mang giam dan duoc sap xep lai bang Insertion Sort:\n");
				for(int i=n-1;i>=0;i--){
					printf("%d\t",numbers[i]);
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
				printf("Mang tang dan duoc sap xep lai bang Seclection Sort:\n");
				for(int i=0;i<n;i++){
					printf("%d\t",numbers[i]);
				}
				break;
			case 4:
				for(int i=0;i<n-1;i++){
					for(j=0;j<n-i-1;j++){
						if(numbers[j]>numbers[j+1]){
							temp=numbers[j];
							numbers[j]=numbers[j+1];
							numbers[j+1]=temp;
						}
					}
				}
				printf("Mang giam dan duoc sap xep lai bang Bubble Sort:\n");
				for(int i=n-1;i>=0;i--){
					printf("%d\t",numbers[i]);
				}
				break;
			case 5:
				exit(0);
			default:
				printf("Vui long lua chon gia tri tu 1-5\n");
		}
	}while(1==1);
}
