#include<stdio.h>
#include<stdlib.h>
int main(){
	printf("Nhap so dong va cot cua ma tran:\n");
	int n,m,j,k,temp;
	scanf("%d %d",&n,&m);
	int numbers[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("numbers[%d][%d]=",i,j);
			scanf("%d",&numbers[i][j]);
		}
	}
	do{
		printf("\n****************MENU*****************\n");
		printf("1. In gia tri mang theo ma tran\n");
		printf("2. Sap xep mang co gia tri cac phan tu theo dong tang dan\n");
		printf("3. Sap xep mang co gia tri cac phan tu theo cot giam dan\n");
		printf("4. Thoat\n");
		int choice;
		printf("Lua chon cua ban la:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Gia tri mang theo ma tran:\n");
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						printf("%d\t",numbers[i][j]);
					}
					printf("\n");
				}
				break;
			case 2:
				for(int i=0;i<n;i++){
					for(int j=0;j<m-1;j++){
						for(int k=0;k<m-j-1;k++){
						    if(numbers[i][k]>numbers[i][k+1]){
							    temp=numbers[i][k];
							    numbers[i][k]=numbers[i][k+1];
							    numbers[i][k+1]=temp;
						    }
					    }
				    }
				}
				printf("Mang co gia tri phan tu theo dong tang dan:\n");
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						printf("%d\t",numbers[i][j]);
					}
					printf("\n");
				}
				break;
			case 3:
				for(int j=0;j<m;j++){
					for(int i=0;i<n-1;i++){
						for(int k=0;k<m-i-1;k++){
						    if(numbers[k][j]>numbers[k+1][j]){
							    temp=numbers[k][j];
							    numbers[k][j]=numbers[k+1][j];
							    numbers[k+1][j]=temp;
						    }
					    }
				    }
				}
				printf("Mang co gia tri phan tu theo cot giam dan:\n");
				for(int i=n-1;i>=0;i--){
					for(int j=m-1;j>=0;j--){
						printf("%d\t",numbers[i][j]);
					}
					printf("\n");
				}
				break;
			case 4:
				exit(0);
			default:
				printf("Vui long chon gia tri tu 1-4\n");
		}
	}while(1==1);
}
