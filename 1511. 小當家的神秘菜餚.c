#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,x,y,i,j,total=20;//N代表比賽的時間, X代表加熱一分鐘可增加的溫度, Y代表冷切一分鐘可減少的溫度
	scanf(" %d%d%d",&n,&x,&y);
	if(n%2!=0)
	{
		for(i=0;i<n;i++){ 
			if(i!=n){
				total+=x;
				i++;
			}
			if(i==n)
				break;
			if(i!=n){
				total-=y;
			}
			if(i==n)
				break;
		}	
		printf("%d",total); 
	}
	if(n%2==0)
	{
		total+=x;
		n-=2;
		for(i=0;i<n-1;i++){ 
			if(i!=n){
				total+=x;
				i++;
			}
			if(i==n)
				break;
			if(i!=n){
				total-=y;
			}
			if(i==n)
				break;
		}
		printf("%d",total);	
	}
	return 0;
}
