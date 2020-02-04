/*Nazlee Yahia
p1200800
IFT1810 */

#include <stdio.h>

int main() {
	const float PI = 3.14159;
	const float aucun = 10000;
	float rayon, lon, lar, cote, peri, surf, deuxa = 0, deuxb = aucun, deuxc = 0;
	int una = 0, unb = 0, numc;
	char fig;
	int cont = 1;
	
	while(cont == 1){
		printf("Type de figure: \n(C pour Cercle, R pour Rectangle, K pour Carre)\n");
        scanf("%s", &fig);
		
		switch(fig){
			
			case 'c' : case 'C':
			una++;
			printf("\nRayon:");
			scanf("%f", &rayon);
			peri = 2 * PI * rayon;
			surf = PI * rayon * rayon;
			printf("Cercle de rayon %.2f\n", rayon);
			printf("\nPerimetre: %.2f\n", peri);
			printf("\nSurface: %.2f\n", surf);
			if(deuxb > peri){
				deuxb = peri;
			}
			if(deuxa < surf){
				deuxa = surf;
			}
			break;
			
			case 'r' : case 'R':
			una++;
			printf("\nLongeur:");
			scanf("%f", &lon);
			printf("\nLargeur:");
			scanf("%f", &lar);
			peri = 2*(lon + lar);
			surf = lon * lar;
			printf("Rectangle de longeur %.2f et de largeur %.2f\n", lon, lar);
			printf("\nPerimetre: %.2f\n", peri);
			printf("\nSurface: %.2f\n", surf);
			if(lon >= 7.8){
				unb++;
			}
			if(deuxa < surf){
				deuxa = surf;
			}
			break;
			
			case 'k' : case 'K':
			una++;
			numc++;
			printf("\nCote:");
			scanf("%f", &cote);
			peri = 4 * cote;
			surf = cote * cote;
			printf("Carre de cote %.2f\n", cote);
			printf("\nPerimetre: %.2f\n", peri);
			printf("\nSurface: %.2f\n", surf);
			deuxc += cote;
			if(deuxa < surf){
				deuxa = surf;
			}
			break;
		}
		
		printf("\n\nFaite un choix \n1. Continuer\n2. Terminer\n");
		scanf("%d", &cont);
		printf("\n");
	}
	printf("Total de figures traitees: %d\n", una);
	printf("Nombre de rectangles dont la longeur depasse 7.8: %d\n", unb);
	printf("Le surface la plus grande de toutes les figures traitees: %.2f\n", deuxa);
	if(deuxb == aucun){
		deuxb = 0;
	}
	printf("Le perimetre le plus petit des cercles traites: %.2f\n", deuxb);
	deuxc = deuxc/numc;
	printf("Le cote moyen des carres traites: %.2f\n", deuxc);
	
	
	return 0;
}





//Affiche Resultat
/*
Type de figure:
(C pour Cercle, R pour Rectangle, K pour Carre)
c

Rayon:5.7
Cercle de rayon 5.70

Perimetre: 35.81

Surface: 102.07


Faite un choix
1. Continuer
2. Terminer
1

Type de figure:
(C pour Cercle, R pour Rectangle, K pour Carre)
k

Cote:5.6
Carre de cote 5.60

Perimetre: 22.40

Surface: 31.36


Faite un choix
1. Continuer
2. Terminer
1

Type de figure:
(C pour Cercle, R pour Rectangle, K pour Carre)
c

Rayon:2.8
Cercle de rayon 2.80

Perimetre: 17.59

Surface: 24.63


Faite un choix
1. Continuer
2. Terminer
1

Type de figure:
(C pour Cercle, R pour Rectangle, K pour Carre)
r

Longeur:9.2

Largeur:6.8
Rectangle de longeur 9.200000 et de largeur 6.80

Perimetre: 32.00

Surface: 62.56


Faite un choix
1. Continuer
2. Terminer
1

Type de figure:
(C pour Cercle, R pour Rectangle, K pour Carre)
c

Rayon:4.3
Cercle de rayon 4.30

Perimetre: 27.02

Surface: 58.09


Faite un choix
1. Continuer
2. Terminer
1

Type de figure:
(C pour Cercle, R pour Rectangle, K pour Carre)
k

Cote:4.3
Carre de cote 4.30

Perimetre: 17.20

Surface: 18.49


Faite un choix
1. Continuer
2. Terminer
1

Type de figure:
(C pour Cercle, R pour Rectangle, K pour Carre)
r

Longeur:10.8

Largeur:5.2
Rectangle de longeur 10.800000 et de largeur 5.20

Perimetre: 32.00

Surface: 56.16


Faite un choix
1. Continuer
2. Terminer
2

Total de figures traitees: 7
Nombre de rectangles dont la longeur depasse 7.8: 2
Le surface la plus grande de toutes les figures traitees: 102.07
Le perimetre le plus petit des cercles traites: 17.59
Le cote moyen des carres traites: 1.98

--------------------------------
Process exited after 98.72 seconds with return value 0
Press any key to continue . . .
*/
