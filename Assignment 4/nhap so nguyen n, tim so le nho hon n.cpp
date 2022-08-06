#include <stdio.h>
#include <math.h>
int main(){
	int n;
	printf("nhap so nguyen n= ");
	scanf("%d",&n);
	printf("so nguyen le nho hon %d la:\n",n);
	int i=1;
	while(i<n){
		if(i%2==1){
		
			printf("%d ",i);
			
			
		}
		i++;
	}
}
