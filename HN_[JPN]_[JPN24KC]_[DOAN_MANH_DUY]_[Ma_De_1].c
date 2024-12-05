#include<stdio.h>
int main(){
	int choice;
	int i=0;
	do{
		printf("\n----------MENU----------\n");
		printf("1. Nhap so phan tu va gia tri cho mang\n");
		printf("2. In ra gia tri cac phan tu trong mang \n");
		printf("3. Dem so luong cac so nguyen to co trong mang\n");
		printf("4. Tim gia tri nho thu hai trong mang\n");
		printf("5. Them mot phan tu vao vi tri ngau nhien\n");
		printf("6. Xoa phan tu tai vi tri cu the\n");
		printf("7. Sap Xep mang theo thu tu giam dan");
		printf("8. Cho nguoi dung nhap vao mot phan tu, tim kiem xem phan tu do co ton tai hay khong\n");
		printf("9. Xoa Toan bo phan tu trung lap trong mang va hien thi toan phan tu doc nhat co o trong mang\n");
		printf("10. Dao nguoc thu tu cua cac phan tu co trong mang\n");
		printf("11. Thoat khoi chuong trinh\n");
		printf("\n"); 
		printf("Moi Ban Lua Chon: ");
		scanf("%d",&choice);
		int mang;
		int arr[100];
		switch(choice){
			case 1:{//1. Nhap so phan tu va gia tri cho mang
				printf("Nhap Do Dai Cua Mang");
				scanf("%d",&mang);
				for(i=0; i<mang;i++){
				printf("Nhap Phan Tu Thu arr[%d] La: ",i);
				scanf("%d",&arr[i]);
				}
				break;
			}
				case 2:{ //2. In ra gia tri cac phan tu trong mang
					if(i>0){
						for(i=0;i <mang;i++){
							printf("%d\n",arr[i]);
						}
					}
					break;
				}
				case 3:{ //3. Dem so luong cac so nguyen to co trong mang
				
				for(int i=0;i<mang;i++){
				if (i ==2 || i % 2 !=0){
				printf("So Nguyen to thu arr[%d] la %d \n",i,arr[i]);
												}
										}	
											break;				
						}
				case 4:{//4. Tim gia tri nho thu hai trong mang
				int phantu;
					for(i=0;i<mang;i++){
					if(arr[i+1] < arr[i]){
					phantu = arr[i];
					}
					}
					printf("Gia tri nho thu hai la: %d",phantu);
					break;
				}	
				case 5:{//5. Them mot phan tu vao vi tri ngau nhien
				int themphantu,vitri,curse;
					printf("Them mot phan tu ngau nhien la: ");
					scanf("%d",&themphantu);
					printf("Them vi tri (0-%d) la:",mang-1);
					scanf("%d",&vitri);
					if(vitri <mang || vitri >0){
					for( curse = mang; curse>vitri;curse--){
						arr[i] = arr[i+1];
					}
						curse++;
					arr[vitri] = themphantu;
				printf("Vi tri sau khi them la: ");
					for(int i=0;i <mang; i++ ){
						printf("%4d",arr[i]);
					}
				}else{
					printf("Vi tri cua ban them vao khong hop le");
				}
					break;
				}
				case 6:{//Xoa phan tu tai vi tri cu the
		 	int xoa,vitri;
					printf("Xoa Phan Tu Tai Vi Tri (0-%d)",mang-1);
					scanf("%d",&vitri);
				 
						for(i=0;i<mang;i++){
							
						}
					break;
				}
				case 7: {//7. Sap Xep mang theo thu tu giam dan
				int temp; 
					for(i=0;i<mang;i++){
						if(arr[i+1] >arr[i]){
						temp = arr[i+1];
						printf("%4d",arr[i]);	
					}
					}
					break;
				}
				
				case 11:{
					printf("Thoat khoi chuong trinh");
					return 1;
				}					
		}//switch
	}while(choice !=11);
	return 0;
}
