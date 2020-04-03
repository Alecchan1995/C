#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int **p,i,j;
	int cla,std;
	double sum=0,aver;
	printf("How many class?: ");
	scanf("%d",&cla);
	printf("How many your student?: ");
	scanf("%d",&std);
	
	p=(int**)malloc(sizeof(int*)*cla);
	for(i=0;i<cla;i++){
		p[i]=(int*)malloc(sizeof(int)*std); 
		}
	for(i=0;i<cla;i++){
		sum=0;
		aver=0;
		printf("class: %d\n",i+1);
		for(j=0;j<std;j++){
			printf("student%d: ",j+1);
			scanf("%d",&p[i][j]);
			sum+=p[i][j]; 
			}
		printf("avg: %.2f\n",sum/j);
		}
	sum=0;
	for(i=0;i<cla;i++){
		for(j=0;j<std;j++){
			sum+=p[i][j];
			printf("%.2f\n",sum);
			} 
		}
	printf("all student avg: %.2f",sum/(cla*std));
	return 0;
	
	free(p[i]);
	free(p);
	
}
