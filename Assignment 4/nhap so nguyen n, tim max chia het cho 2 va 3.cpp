#include <stdio.h>
#include <math.h>
int main(){
	int n;
	printf("nhap so nguyen n = ");
	scanf("%d",&n);
	int i;
	int max=0;
	for(i=0; i<n;i++){
		if((i%2==0&&(i%3==0))){
			max = i;
		}
	}
	printf("so nho lon nhat cua n chia het cho 2 va 3 la:\n");
	printf("%d",max);
}
