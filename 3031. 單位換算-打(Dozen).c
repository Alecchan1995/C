#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,i;
	scanf("%d",&x);
	if(x%12==0)
		{
		x/=12;
		printf("%d dozen",x);
	}
	else if(x%12!=0)
		{
		i=x%12;
		x/=12;
		printf("%d dozen and %d",x,i);
	}
	return 0;
}
