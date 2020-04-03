#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct pokemon{
	char Name[20];
	int Hp;
	int Lv;
};
typedef struct pokemon pkm;

void InputData(struct pokemon *p){
	scanf(" %s",p->Name);
	scanf("%d%d",&p->Hp,&p->Lv);
	
}
void ShowInfo(struct pokemon p ){
	printf("Name: %s\n",p.Name);
	printf("%d\n%d\n\n",p.Hp,p.Lv);
}
//typedef struct pokemon pkm;
int main(int argc, char *argv[]) {
	pkm p1;
	InputData(&p1);
	ShowInfo(p1);
	return 0;
}
typedef struct pokemon pkm;
/*void InputData(struct Pokemon *){
	get(Name);
	scanf("%d%d",&Hp,Lv);
}*/
/*void ShowInfo(struct Pokemon){
	put(Name);
	printf("%d\n%d\n\n",Lv,Hp);
	
}*/
