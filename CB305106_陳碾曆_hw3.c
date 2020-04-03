#include <stdio.h>
#include <stdlib.h>
#define  student 5
#define  subject 3
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x[student][subject],i,j,sum,max=0,maxpos=0;
	double avg[student];
	
		for(i=0;i<student;i++){
			printf("student %d\n",i+1);
			sum=0;
			
			for(j=0;j<subject;j++){
				printf(" %d: ",j+1);
				scanf("%d",&x[i][j]);
				sum+=x[i][j];
					}
			printf(" sum: %d\n",sum);
			avg[i]=avg[i]+((double)sum/j);
			printf(" avg: %.2f\n",avg[i]);
		}
		for(i=0;i<student;i++){
			for(j=0;j<subject;j++){
				sum+=x[i][j];}
				} 
			printf("total: %d , avg: %.2f\n ",sum,(double)sum/(student*subject));
			for(i=0;i<student;i++){
				if (avg[i]>max){
					max=avg[i];
					maxpos+=i;
				}
			}
			printf("high avg: student %d: %.2f",maxpos+1,(double)max);
	return 0;
}

