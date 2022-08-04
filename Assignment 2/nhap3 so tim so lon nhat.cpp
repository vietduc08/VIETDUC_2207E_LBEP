#include <stdio.h>
int main(){
	int a;
	int b;
	int c;
	printf("nhap a =");
	scanf("%d",&a);
	printf("nhap b =");
	scanf("%d",&b);
	printf("nhap c =");
	scanf("%d",&c);
	int max;
	max=a;
	if(b>max)
		max=b;	
		if(c>max)
			max=c;
		printf("so lon nhat la %d",max);	
		
}
