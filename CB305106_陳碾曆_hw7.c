#include <stdio.h>
#include <stdlib.h>
#define N 50
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct person{
		char name[50];
		char phone[50];
		char email[50];
	};
typedef struct person psn;
int main(int argc, char *argv[]) {
	FILE *file,*f2; 
	int i,n=0;
	psn p[N];
	char chose,ch;
	char str[50];//�ɮ�name 

	while(1){
		printf("i: �W�[\nl: �C�X\ns: �s��\no: Ū��\nq: �h�X\n>"); 
		scanf("%c",&chose);
		switch(chose){
			case 'i':{//���J
				printf("1");
			 		printf("Name: ");
					scanf("%s",p[n].name);
					printf("Phone: "); 
					scanf("%s",p[n].phone);
					printf("Email: ");
					scanf("%s",p[n].email);
					n++;
				break;
			}
			case'l':{//�C�X 
				for(i=0;i<n;i++){
					printf("Name: %s\n",p[i].name);
					printf("Phone: %s\n",p[i].phone);
					printf("Email: %s\n\n",p[i].email);
				}	
				break;
			}
			case's':{//�s�� 
				printf("You are file name> ");
				scanf("%s",str); 
				file= fopen(str,"a");
				//fprintf(file,"%d\n",n);
				for(i=0;i<n;i++){
					fprintf(file,"%s\n",p[i].name); 
					fprintf(file,"%s\n",p[i].phone); 
					fprintf(file,"%s\n",p[i].email);
				}
				fclose(file); //�s�� 
				break;
			}
			case'o':{//Ū�� 
				printf("You are file name> ");
				scanf("%s",str);//��J�ɦW 
				file=fopen(str,"r");
				if(str == NULL){
					printf("failed to open file!\n");
					return 1;
					}else{
				//fscanf(file,"%d\n",&n);
				for(i=0;i>=n;i++){
				//while(1){
					printf("Ū�ɦ�111" );
				    fscanf(file,"%s\n",p[i].name);
					fscanf(file,"%s\n",p[i].phone);
					fscanf(file,"%s\n",p[i].email);
					n++;
					if(feof(file))
						break;
					}
				}
				/*
				while(1){		
					fscanf(f2, " %c", &n);
					if( feof(file) )
						break;
					printf("%c", n);
					}*/
				fclose(file);	
				break;
			}
			case'q':{// �h�X
				return 0;
				break;
			}
		}
		system("pause");
		system("cls"); 
	}
	
	
	return 0;
}

