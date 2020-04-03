#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
	int num,num1=0,num2=0,num3=0,num4=0;
	scanf("%d",&num);
		if(num>99999)
		printf("out of range");
		else if(num!=0){
		if (num>=10000 && num<100000)
			{
				num1=num/10000;
				switch(num1){
			case 1:{
				printf("³ü");
				break;}
			case 2:{
				printf("¶L");
				break;}
			case 3:{
				printf("°Ñ");
				break;}
			case 4:{
				printf("¸v");
				break;} 
			case 5:{
				printf("¥î");
				break;} 
			case 6:{
				printf("³°");
				break;} 
			case 7:{ 
				printf("¬m");
				break;} 
			case 8:{
				printf("®Ã");
				break;}
			case 9:{
			    printf("¨h");
				break;}
					} 
			printf("¸U");
		}
		if(num%10000>=1000 && num<100000)
			{
				num2=num%10000/1000;
				switch(num2){
			case 1:{
				printf("³ü");
				break;}
			case 2:{
				printf("¶L");
				break;}
			case 3:{
				printf("°Ñ");
				break;}
			case 4:{
				printf("¸v");
				break;} 
			case 5:{
				printf("¥î");
				break;} 
			case 6:{
				printf("³°");
				break;} 
			case 7:{ 
				printf("¬m");
				break;} 
			case 8:{
				printf("®Ã");
				break;}
			case 9:{
			    printf("¨h");
				break;}
					} 
			printf("¥a"); 
			} 
			 
		if (num%10000%1000>=100 && num<100000)
			{
			num3=num%10000%1000/100;
			switch(num3){
			case 1:{
				printf("³ü");
				break;}
			case 2:{
				printf("¶L");
				break;}
			case 3:{
				printf("°Ñ");
				break;}
			case 4:{
				printf("¸v");
				break;} 
			case 5:{
				printf("¥î");
				break;} 
			case 6:{
				printf("³°");
				break;} 
			case 7:{ 
				printf("¬m");
				break;} 
			case 8:{
				printf("®Ã");
				break;}
			case 9:{
			    printf("¨h");
				break;} 
					} 
			 printf("¨Õ");
	 		
				} 
		if (num%10000%1000%100>=10 && num<100000)
				{
			num4=num%10000%1000%100/10;
			switch(num4){
			case 1:{
				printf("³ü");
				break;}
			case 2:{
				printf("¶L");
				break;}
			case 3:{
				printf("°Ñ");
				break;}
			case 4:{
				printf("¸v");
				break;} 
			case 5:{
				printf("¥î");
				break;} 
			case 6:{
				printf("³°");
				break;} 
			case 7:{ 
				printf("¬m");
				break;} 
			case 8:{
				printf("®Ã");
				break;}
			case 9:{
			    printf("¨h");
				break;}
					} 
			printf("¬B");
				}
		if (num%10000%1000%100%10>=1 && num<100000)
			{
		num=num%10000%1000%100%10;
		switch(num){
			case 1:{
				printf("³ü");
				break;}
			case 2:{
				printf("¶L");
				break;}
			case 3:{
				printf("°Ñ");
				break;}
			case 4:{
				printf("¸v");
				break;} 
			case 5:{
				printf("¥î");
				break;} 
			case 6:{ 
				printf("³°");
				break;} 
			case 7:{ 
				printf("¬m");
				break;} 
			case 8:{
				printf("®Ã");
				break;}
			case 9:{
			    printf("¨h");
				break;}
					} 
				}
			printf("¤¸¾ã");
			} 
	return 0;
}

