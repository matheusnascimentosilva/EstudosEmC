#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
		char nome1[15];
		char nome2[15];
		char nome3[15];
		char vertebrado[] = "vertebrado";
		char invertebrado[] = "invertebrado";
		char mamifero[] = "mamifero";
		char onivoro[] = "onivoro";
		char ave[] = "ave";
		char carnivoro[] = "carnivoro";
		char anelideo[] = "anelideo";
		char hematofago[] = "hematofago";
		char herbivoro[] = "herbivoro";
		char inseto[] = "inseto";
		
		
		printf("|___________________________________________|\n");
		printf("|_____________DESCUBRA O ANIMAL_____________|\n");
		printf("|___________________________________________|\n");
		
			printf("vertebrado ou invertebrado ?\n");		
			scanf("%s",nome1);
			if(strcmp(invertebrado,nome1)==0){
				printf("inseto ou anelideo ?\n");
				scanf("%s",nome2);
				printf("hematofago ou herbivoro ?\n");
				scanf("%s",nome3);		
			}else{
			printf("ave ou mamifero ?\n");
			scanf("%s",nome2);
				if(strcmp(ave,nome2)==0){
					printf("carnivoro ou onivoro ?\n");
					scanf("%s",nome3);
				}else{
					printf("carnivoro ou herbivoro ?\n");
					scanf("%s",nome3);
				}
			
			}
				if(strcmp(vertebrado,nome1)==0){
					if(strcmp(mamifero,nome2)==0){
						if(strcmp(onivoro,nome3)==0){
							printf("UM HOMEM SEM DUVIDAS\n");
						}else{
							printf("UMA VACA\n");
						}
					}else if(strcmp(ave,nome2)==0){
						if(strcmp(onivoro,nome3)==0){
							printf("UM POMBO\n");
						}else{
							printf("UMA AGUIA\n");
						}
					}
				}else{
					if(strcmp(anelideo,nome2)==0){
						if(strcmp(onivoro,nome3)==0){
							printf("MINHOCA\n");
						}else{
							printf("SANGUESSUGA\n");
						}
					}else{
						if(strcmp(hematofago,nome3)==0){
							printf("PULGA\n");
						}else{
							printf("LAGARTA\n");
						}
					}
				}
	
	return 0;
	system("pause");
}
