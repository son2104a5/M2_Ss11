#include <stdio.h> 
int main(){
  int n;
  printf("Nhap so phan tu cua mang:");
  scanf("%d", &n);
  int numbers [n];
  printf("Nhap gia tri cac phan tu mang:\n");
  for (int i=0;i<n;i++){
    printf("numbers [%d]=",i);
    scanf("%d", &numbers[i]);
  }
  int searchValue;
  printf("Nhap vao gia tri can tim trong mang:");
  scanf("%d", &searchValue);
  searchValue;
  int i;
  int flagSearched = 0;
  for(int i=0;i<n;i++) {
    if (numbers[i]==searchValue){
      flagSearched = 1;
      break;
    }
  }  
  if(flagSearched==1) {
    printf("Trong mang co phan tu chi so %d co gia tri bang %d\n",i,numbers[i]);
  } else {
    printf("Khong tim thay phan tu co gia tri %d trong mang\n",searchValue);
  }
}
