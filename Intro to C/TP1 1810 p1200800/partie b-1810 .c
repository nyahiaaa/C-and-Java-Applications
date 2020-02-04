/*Nazlee Yahia
p1200800
IFT1810 */

#include <stdio.h>
#include <float.h>

void main()	
{ 
 const float LIVRE_EN_KG = 0.454 ; /*déclaration d'une constante */
 float pound, kilogram; /*déclaration du float */
 float fahr, celsius;/*déclaration du float */
 char statutcivil; /*déclaration du character */
 int exit = 1; /*déclaration d'une integer */
 int counterTotal = 0, counterC = 0;/*déclaration du integer en total */
 float totalkg = 0, moyenkg = 0; /*déclaration du float en total moyenne de poids de tous les patients */

	printf("\t\tSondage Du Quartier\n\n"); /* Affiche le Sondage du quartier*/
	while(exit == 1){  /* avec la boucle while */
		
        /* récupère le nombre de kilogrammes de l'utilisateur */
        printf("Entrez le poids en livres:");
        scanf("%f", &pound);
        
        /* conversion de pound en kilogram */
        kilogram = pound * LIVRE_EN_KG ;
        
        /* affiche le nombre de livres et de grammes */
        printf("Son poids %.2f lb est egale a %.2f kg \n", pound, kilogram);
        
		printf("Entrez la valeur pour Farenheit:"); 
		/* Obtenir la valeur Fahrenheit de l'utilisateur */
        scanf("%f", &fahr);
  
       /* conversion de Fahrenheit en Celsius */ 
        celsius = (5.0/9.0) * fahr - 32;

       /* affiche le résultat */
        printf("Sa temperature %.3f F is equal to %.3f C\n", fahr, celsius);
        
        /*affiche le status civil*/
        printf("Entrez son status civil:");
        scanf("%s", &statutcivil);
         switch(statutcivil) /*détermine le statut civil avec le switch */
       { /* cas du statut est Célibataire */
         case 'c' :
         printf("Son statut civil est Célibataire\n" );
         totalkg += kilogram;
         counterC++;
         break;
         case 'C' :
         printf("Son statut civil est Célibataire\n" );
         totalkg += kilogram;
         counterC++;
         break;
         /* cas du statut est marié */
         case 'm' :
         printf("Son statut civil est Marié\n" );
         break;
         case 'M' :
         printf("Son statut civil est Marié\n" );
         break;
         /* cas du statut est divorcé */
         case 'd' :
         printf("Son statut civil est Divorcé\n" );
         break;
         case 'D' :
         printf("Son statut civil est Divorcé\n" );
         break;
         /* cas du statut est separé */
         case 's' :
         printf("Son statut civil est Separé\n" );
         break;
         case 'S' :
         printf("Son statut civil est Separé\n" );
         break;
         /* cas du statut est autre cas */
         case 'a' :
         printf("Son statut civil est Autre cas\n" );
         break;
         case 'A' :
         printf("Son statut civil est Autre cas\n" );
         break;
         /* autrement */
         default :
         printf("Son statut civil est Invalide\n" );
        }
        counterTotal++;
         
        printf("\n\nFaite un choix \n1. Continuer\n2. Terminer\n");
		scanf("%d", &exit);
		printf("\n");
    }
    
    printf("\nNombre total de patients: %d\n",counterTotal ); /* Afficher le nombre total des patients*/
    if(counterC == 0){ /*execute continue si counterC == 0*/
    	moyenkg = 0;
	}
	else{
		moyenkg = totalkg / counterC; /*calcule le poids moyen en kg des célibataires*/
	}
	
	printf("Le poids moyen des celibataires: %.3f kg\n", moyenkg);/*affiche le poids moyen en kg des célibataires*/
        
		return 0;
  } 
  
  
  /* Affiche Resultat
  
                  Sondage Du Quartier

Entrez le poids en livres:158
Son poids 158.00 lb est egale a 71.73 kg
Entrez la valeur pour Farenheit:91.2
Sa temperature 91.200 F is equal to 18.667 C
Entrez son status civil:C
Son statut civil est Celibataire


Faite un choix
1. Continuer
2. Terminer
1

Entrez le poids en livres:128
Son poids 128.00 lb est egale a 58.11 kg
Entrez la valeur pour Farenheit:100
Sa temperature 100.000 F is equal to 23.556 C
Entrez son status civil:D
Son statut civil est Divorce


Faite un choix
1. Continuer
2. Terminer
1

Entrez le poids en livres:145
Son poids 145.00 lb est egale a 65.83 kg
Entrez la valeur pour Farenheit:96.3
Sa temperature 96.300 F is equal to 21.500 C
Entrez son status civil:S
Son statut civil est Separe


Faite un choix
1. Continuer
2. Terminer
1

Entrez le poids en livres:172
Son poids 172.00 lb est egale a 78.09 kg
Entrez la valeur pour Farenheit:98.5
Sa temperature 98.500 F is equal to 22.722 C
Entrez son status civil:c
Son statut civil est Celibataire


Faite un choix
1. Continuer
2. Terminer
2


Nombre total de patients: 4
Le poids moyen des celibataires: 74.910 kg

--------------------------------
Process exited after 63.33 seconds with return value 43
Press any key to continue . . .

*/
