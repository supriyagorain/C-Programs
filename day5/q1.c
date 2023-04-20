#include <stdio.h>
int main(){
	int n,i,j;
	printf("Enter Rows:");
	scanf("%d",&n);
	int n1=n-1;
	int n2=1;
	for(int i=1; i<=2*n-1; i++){
		for (j=1; j<=n1; j++){
			printf(" ");
		}
		if(i<n){
			n1--;
		}
		else{
			n1++;
		}
		for (j=1; j<=n2; j++){
			printf(" *");
		}
		if(i<n){
			n2++;
		}
		else{
			n2--;
		}
		printf("\n");
	}
	return 0;
}

	
	
