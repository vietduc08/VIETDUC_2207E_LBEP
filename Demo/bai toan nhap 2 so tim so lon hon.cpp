// start
#include <stdio.h>
int main(){
//
int a;
printf ("nhap a =");
scanf("%d",&a);
int b;
printf("nhap b=");
scanf("%d",&b);
// kiem tra dieu kien a>b
if(a>b){
	printf("max: %d",a);
}
// kiem tra dieu kien a<b
else{
	if (a<b){
	printf("max: %d",b);
	}
//	
else{
	printf("hai so bang nhau");
	}
}
	
}
