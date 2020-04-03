#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
    int x;
    char n[10];
    scanf("%s",&n);
    if(!strcmp(n,"AD"))
     	{
     	
		while(scanf("%d",&x)!=-1){
			switch(x=x%12)	{
				case 0:x=0;{
					printf("µU\n"); 
					break; 
				}
				case 1:x=1; {
					printf("Âû\n");
					break; 
				}
				case 2:x=2; {
					printf("ª¯\n"); 
					break;
				}
				case 3:x=3; {
					printf("½Þ\n"); 
					break;
				}
				case 4:x=4;{
					printf("¹«\n"); 
					break;
				}
				case 5:x=5;{
					printf("¤û\n"); 
					break;
				}
				case 6:x=6;{
					printf("ªê\n"); 
					break;
				}
				case 7:x=7;{
					printf("§K\n"); 
					break;
				}
				case 8:x=8;{
					printf("Às\n"); 
					break;
				}
				case 9:x=9;{
					printf("³D\n"); 
					break;
				}
				case 10:x=10;{
					printf("°¨\n"); 
					break;
				}
				case 11:x=11;{
					printf("¦Ï\n"); 
					break;
				}
				}
			if(x == -1){
			break;
			}
			}
		}
		if(!strcmp(n,"Minguo"))
		{
		while(scanf("%d",&x)!=-1){
			switch(x=(x+1911)%12)	{
				case 0:x=0;{
				printf("µU\n"); 
				break; 
				}
				case -1:x=-1;
				break;
				case 1:x=1; {
				printf("Âû\n");
				break; 
				}
				case 2:x=2; {
				printf("ª¯\n"); 
				break;
				}
				case 3:x=3; {
				printf("½Þ\n"); 
				break;
				}
				case 4:x=4;{
				printf("¹«\n"); 
				break;
				}
				case 5:x=5;{
				printf("¤û\n"); 
				break;
				}
				case 6:x=6;{
				printf("ªê\n"); 
				break;
				}
				case 7:x=7;{
				printf("§K\n"); 
				break;
				}
				case 8:x=8;{
				printf("Às\n"); 
				break;
				}
				case 9:x=9;{
				printf("³D\n"); 
				break;
				}
				case 10:x=10;{
				printf("°¨\n"); 
				break;
				}
				case 11:x=11;{
				printf("¦Ï\n"); 
				break;
				}
			}
		if(x == -1){
			break;
			}
		}
	}

	return 0;
}

