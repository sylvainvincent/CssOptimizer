#include <stdio.h>
#include <stdlib.h>


//Main Function
int main(int argc, char** argv){
	if (5 != argc) {
		printf("Nombre de paramètres insuffisants\n");
		return 1;
	}

	FILE* fichier_css = NULL;
	FILE* fichier_css_2 = NULL;
	fichier_css = fopen(argv[2], "r"); // r = lecture w = écriture
	fichier_css_2 = fopen(argv[3], "r");
	str commande = argv[1];

	if(NULL == fichier_css || NULL == fichier_css_2) {
		printf("fichier introuvable \n");
		return 1;
	}

	int temp;
	if(argv[2][0] == '1' && !argv[2][1]) {
		while((temp = getc(fichier)) != EOF) { // retourne EOF quand c'est la fin du fichier
			printf("%x ", temp);
		}
	}
	else if(argv[2][0] == '2' && !argv[2][1]) {
		while((temp = getc(fichier)) != EOF) {
			printf("%d ", temp);
		}
	}
	else if(argv[2][0] == '3' && !argv[2][1]) {
		while((temp = getc(fichier)) != EOF) {
			printf("%c ", temp);
		}
	}
	else {
		printf("Arguments invalides \n");
	}
	fclose(fichier_css);
	fclose(fichier_css_2);

	return 0;

}
