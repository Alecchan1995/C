#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
/*�g�@�{���A�̩ҿ�J�������B�魫�p��BMI
BMI�ȭp�⤽��: BMI=�魫(����)/����2(����2)
�Ҧp�G�@��52���窺�H�A�����O155�����A�hBMI�� :
52(����)/1.552(����2)=21.64*/
	double BMI,cm;
	int kg;
	scanf(" %f%d",&cm,&kg);
	cm=cm/100;
	printf("%.2f\n",cm);
	BMI=(double)kg/(cm*cm);
	printf("%.2f",BMI); 
	return 0;
}
