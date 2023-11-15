#include<stdio.h>
int main(){
	int month;
	float money,i,multiple;
	printf("nhap tien,lai va so thang:");
	scanf("%f %f %d",&money,&multiple,&month);
	for(i=1;i<=month;i++){
		money=money+money*multiple;
	}
	printf("%.2f",money);
}