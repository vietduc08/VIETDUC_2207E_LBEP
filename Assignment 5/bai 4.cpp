#include <stdio.h>
int main(){
	for(int i=1;i<=5;i++){
		for(int j=1;j<=i;j++){
			for(int n=1;n<=i;n++){
				printf("*");
			}
		printf(" ");
		}
		printf("\n");
	}
}
