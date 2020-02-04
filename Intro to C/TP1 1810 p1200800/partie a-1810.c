/*Nazlee Yahia
p1200800
IFT1810 */

#include <stdio.h>

int main() {
	float salaire, salaireAn, prime, surprime;
	int ans,exit;
	exit = 1;
	
	printf("\tBienvenu a la societe La Genereuse\n\n"); /*Affiche Bienvenu a la societe la generause*/
	while(exit == 1){ /*Utilisation de boucle while*/
		
	printf("Quel est votre salaire?\n");/*Affiche le salaire*/
	scanf("%f", &salaire);
	printf("Quel est votre nombre d'annee d'anciennete?\n"); /*Affiche le nb d'annee d'anciennete*/
	scanf("%d", &ans);
	
	/*Utilisation du statement if else*/
	if(ans < 5){ /*execute continue si an est inferieur de 5 */
		surprime = 350;
	}
	else if(ans >= 5 && ans <= 10){
		surprime = 765;
	}
	else if(ans > 10){
		surprime = 1230;
	}
	
	prime = (salaire*0.0275) + surprime ; /*Calculer le prime*/
	salaireAn = salaire + prime;/*Calculer la salaire annuelle*/
	printf("\n\t\tResultats"); /*Afficher tous les resultat*/
	printf("\nSalaire avant les prime \t\t%.2f $\n"
		"Nombre d'annees \t\t\t%d ans\n"
		"Prime Total (incluant Surprime) \t%.2f $\n"
		"Salaire Annuel \t\t\t\t%.2f $\n\n", salaire, ans, prime, salaireAn);
	
	printf("Faite un choix \n1. Continuer\n2. Quitter\n"); /*Affiche les choix*/
	scanf("%d", &exit);
	
	}
	
	printf("Aurevoir!");
	return 0;
}

/*Affiche Resultat

        Bienvenu a la societe La Genereuse

Quel est votre salaire?
32567.89
Quel est votre nombre d'annee d'anciennete?
3

                Resultats
Salaire avant les prime                 32567.89 $
Nombre d'annees                         3 ans
Prime Total (incluant Surprime)         1245.62 $
Salaire Annuel                          33813.51 $

Faite un choix
1. Continuer
2. Quitter
1
Quel est votre salaire?
48226.00
Quel est votre nombre d'annee d'anciennete?
10

                Resultats
Salaire avant les prime                 48226.00 $
Nombre d'annees                         10 ans
Prime Total (incluant Surprime)         2091.22 $
Salaire Annuel                          50317.21 $

Faite un choix
1. Continuer
2. Quitter
1
Quel est votre salaire?
29530.25
Quel est votre nombre d'annee d'anciennete?
12

                Resultats
Salaire avant les prime                 29530.25 $
Nombre d'annees                         12 ans
Prime Total (incluant Surprime)         2042.08 $
Salaire Annuel                          31572.33 $

Faite un choix
1. Continuer
2. Quitter
2
Aurevoir!
--------------------------------
Process exited after 54.19 seconds with return value 0
Press any key to continue . . .

*/
