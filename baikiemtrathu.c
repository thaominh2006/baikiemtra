#include<stdio.h>

int main(){
	int arr[100];
	int currentLength=0;
	int choice;
	int check;
	
	do{
		printf("\n                MENU               \n");
		printf("1. Nhap so phan tu can nhap va gia tri cac phan tu.\n");
		printf("2. In ra cac gia tri phan tu dang quan ly.\n");
		printf("3. In ra gia tri lon nhat cua mang.\n");
		printf("4. In ra cac phan tu la so nguyen to trong mang.\n");
		printf("5. Them mot phan tu vao mang.\n");
		printf("6. Xoa mot phan tu trong mang.\n");
		printf("7. Su dung Selection Sort de sap xep mang theo thu tu tang dan.\n");
		printf("8. Su dung Linear Search de tim kiem phan tu va in ra vi tri index cua phan tu do.\n");
		printf("9.\n               THOAT                 \n");
		printf("\nLua chon cua ban.\n");
		scanf("%d", &choice);
		
		if (choice==1){
			printf("Nhap so phan tu cua mang:", 100);
			scanf("%d", &currentLength);
			
			if(currentLength <=0 || currentLength > 100){
				printf("So phan tu khong hop le.\n");
				currentLength =0;
			}else{
				printf("Nhap gia tri cac phan tu trong mang: \n");
				for(int i=0; i< currentLength; i++){
					printf("Phan tu [%d]: ", i);
					scanf("%d", &arr[i]);
				}
				break;
			}
		}else if(choice ==2){
			printf("Nhap so phan tu cua mang: \n", 100);
			if(currentLength == 0){
				printf("Mang da trong.\n");
			}else{
				printf("Cac phan tu co trong mang la: \n");
				for(int i=0; i< currentLength; i++){
					printf("%d", &arr[i]);
				}
				printf("\n");
			}
			break;
			
		}else if(choice==3){
			printf("Nhap so phan tu: \n", 100);
			if(currentLength ==0){
				printf("\nMang da trong.\n");
			}else{
				int max = arr[0];
				for(int i=1; i<currentLength; i++){
					if(arr[i]> max) max = arr[i];
				}
				printf("Gia tri lon nhat la: %d\n", max);
			}
			break;
			
			}else if(choice==4){
				printf("Nhap cac phan tu: \n", 100);
				if(currentLength ==0){
					printf("\nMang trong.\n");
				}else{
					printf("Cac phan tu la so nguyen to la: \n");
					for(int i=0; i<currentLength; i++){
						int isPrime =1;
						if(arr[i] <=1) isPrime =0;
						for(int j=2; j * j <= arr[i]; j++){
							if(arr[i]%j==0){
								isPrime =0;
								break;
							}
						}
					}
				}
			}else if(choice==5){
				int position;
			    int giaTri;
			    printf("Moi ban nhap gia tri muon them vao mang: \n");
			    scanf("%d", &position);
			    printf("Moi ban nhap gia tri muon them vao: \n");
			    scanf("%d", &giaTri);
			    for(int i=currentLength; i<position; i--){
				arr[i]=arr[i-1];
				currentLength++;
			}
			arr[position-1]= giaTri;
			printf("\nMang sau khi them vao phan tu la:\n");
			for(int i=0; i<currentLength; i++){
				printf("%d", arr[i]);
			}
			printf("\n");
			}else if(choice ==6){
				int position;
				printf("Mang hien tai: \n");
				for(int i=0; i<currentLength; i++){
					printf("%d", arr[i]);
				}
				printf("Nhap gia tri can xoa: ", currentLength);
				scanf("%d", &position);
				if(position < 0 || position > currentLength){
					printf("Vi tri khong hop le.\n");
					
				}else{
					for(int i= position-1; i <= currentLength; i++){
						arr[i] = arr[i + 1];
					}
					currentLength--;
					printf("Phan tu da duoc xoa thanh cong.\n");
				}
				for(int i=0; i< currentLength; i++){
					printf("%d", arr[i]);
					break;
				}
			}else if(choice == 7){
				int n;
				printf("Mang gom nhung phan tu la: \n");
				for(int i=0; i<n; i++){
					printf("%d", arr[i]);
				}
				printf("\n");
				for(int i=1; i<n; i++){
					int key=arr[i];
					int j=i-1;
				while(j >=0 && key < arr[j]){
					arr[j+1]=arr[j];
					j--;
				}
				arr[j+1]= key;
				
				
				}
				printf("\n");
				printf("Mang sau khi sap xep tang dan la: \n");
				for(int i=0; i<n; i++){
					printf("%d", arr[i]);
				}
				break;
				
			}else if(choice ==8){
				int n;
				printf("Mang hien tai la: \n");
				for(int i=0; i<n; i++){
					printf("%d", &arr[i]);
				}
				int numbers;
				printf("\nNhap vao phan tu can tim kiem: ");
				scanf("%d", &numbers);
				int check = 0;
				for(int i=0; i<n; i++){
					if(arr[i] == numbers){
						printf("Phan tu co trong mang nam o vi tri index thu %d\n", i);
						check=1;
					}
				}
				    if(check ==0){
				    	printf("Mang khong chua phan tu can tim.\n");
					}
				break;	
			}else if(choice==9){
				printf("Thoat chuong trinh.\n");
			}else{
				printf("Lua chon khong hop le. Vui long ban chon lai.\n");
			}
			
			
		}while (choice!=9);
		
		return 0;
	}


