#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int j,sum=0,temp,l=10000;
	int k=0;
	int i,x[l];
	for(i=0;i<l;i++){
			scanf("%d",&x[i]);
			if(x[i]==-1){
				k=i-1;
				break;
		}
		else if(x[i]>30){
		sum=sum+x[i];
		}
	}
			
	for(i=0;i<k;i++){
		for(j=0;j<k;j++){
			if(x[j]<x[j+1]){
				temp=x[j];
				x[j]=x[j+1];
				x[j+1]=temp;
			}
		}
	}
	printf("[");
	for(i=0;i<=k;i++){
		printf("%d",x[i]);
		if(i<k)
		printf(", ");
		
	}
	printf("]\n");
	for(i=0;i<k;i++){
		for(j=0;j<k;j++){
			if(x[j]>x[j+1]){
				temp=x[j+1];
				x[j+1]=x[j];
				  x[j]=temp;
			}
		}
	}
	printf("[");
	for(i=0;i<=k;i++){
		printf("%d",x[i]);
		if(i<k)
		printf(", ");
	}
	printf("]\n%d",sum);
	return 0;
}
