#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
/*寫一程式，依所輸入之身高、體重計算BMI
BMI值計算公式: BMI=體重(公斤)/身高2(公尺2)
例如：一個52公斤的人，身高是155公分，則BMI為 :
52(公斤)/1.552(公尺2)=21.64*/
	double BMI,cm;
	int kg;
	scanf(" %f%d",&cm,&kg);
	cm=cm/100;
	printf("%.2f\n",cm);
	BMI=(double)kg/(cm*cm);
	printf("%.2f",BMI); 
	return 0;
}
