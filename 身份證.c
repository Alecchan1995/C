#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
char eng;
	int num,numch;
	scanf("%c",&eng);
			if(eng=='A')
				eng=(int)10;
		else if(eng=='B')
				eng=(int)11;
		else if(eng=='C')
				eng=(int)12;
		else if(eng=='D')
				eng=(int)13;
		else if(eng=='E')
				eng=(int)14;
		else if(eng=='F')
				eng=(int)15;
		else if(eng=='G')
				eng=(int)16;
		else if(eng=='H')
				eng=(int)17;
		else if(eng=='I')
				eng=(int)34;
		else if(eng=='J')
				eng=(int)18;
		else if(eng=='K')
				eng=(int)19;
		else if(eng=='L')
				eng=(int)20;
		else if(eng=='M')
				eng=(int)21;
		else if(eng=='N')
				eng=(int)22;
		else if(eng=='O')
				eng=(int)35;
		else if(eng=='P')
				eng=(int)23;
		else if(eng=='Q')
				eng=(int)24;
		else if(eng=='R')
				eng=(int)25;
		else if(eng=='S')
				eng=(int)26;
		else if(eng=='T')
				eng=(int)27;
		else if(eng=='U')
				eng=(int)28;
		else if(eng=='V')
				eng=(int)29;
		else if(eng=='W')
				eng=(int)32;
		else if(eng=='X')
				eng=(int)30;
		else if(eng=='Y')
				eng=(int)31;
		else if(eng=='Z')
				eng=(int)33;
		
		printf("%d\n",eng);
		
			 if(eng>=10)
				{
				numch=numch+(eng/10);
				eng=eng-((eng/10)*10);
				printf("%d\n",numch);
				
				}
			 if(eng<10)
				{
				numch=numch+(eng*9);
				printf("%d\n",numch);
				}
		printf("%d\n",numch);
			
			numch+=eng;
			if(num>=100000000){ 
				numch=numch+(num/100000000)*8;
				num=num-((num/100000000)*100000000);
					}
			//	numch+=numch; 
			if(num>=10000000){ 
				numch=numch+(num/10000000)*7;
				num=num-((num/10000000)*10000000);
					} 
			//	numch+=numch;
			if(num>=1000000){ 
				numch=numch+(num/1000000)*6;
				num=num-((num/1000000)*1000000); 
					}
			//	numch+=numch;
			if(num>=100000){ 
				numch=numch+(num/100000)*5;
				num=num-((num/100000)*100000);
					}
			//	numch+=numch; 
	    	if(num>=10000){ 
				numch=numch+(num/10000)*4;
				num=num-((num/10000)*10000);
					}
			//	numch+=numch; 
			if(num>=1000){ 
				numch=numch+(num/1000)*3;
				num=num-((num/1000)*1000);
					}
			//	numch+=numch;
			if(num>=100){ 
				numch=numch+(num/100)*2;
				num=num-((num/100)*100);
					}
			//	numch+=numch; 
			if(num>=10){ 
				numch=numch+(num/10)*1;
				num=num-((num/10)*10);
					}
				//numch+=numch; 
			if(num>=1){ 
				numch=numch+(num%1)*1;
					} 
				numch+=numch;
			printf("%d\n",numch);	
	//printf("%c%d\n",eng,num);
	//printf("%d",numch);
	
	//printf("%d",a);

}
