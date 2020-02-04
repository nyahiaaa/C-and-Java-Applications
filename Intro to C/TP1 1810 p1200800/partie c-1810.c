/*Nazlee Yahia
p1200800
IFT1810 */

#include <stdio.h>

int main()	
{ 
  { /* Utilisation du boucle do while*/
    const int BORNE1 =   1,
              BORNE2 = 9999,
              LE_PAS =   2; 
    double denominateur = BORNE1, 
    somme = 0 ;

        do 
           {
            somme += 1 / denominateur ;
            denominateur += LE_PAS;
           } while ( denominateur <= BORNE2 );

    printf("La valeaur de la somme en utilisant le boucle do...while est %10.6f\n", somme);
   }

   { /* Utilisation du boucle while*/
    const int BORNE1 =   1 ,
              BORNE2 = 9999;

    float denominateur = BORNE1, somme = 0 ;

    while ( denominateur <= BORNE2 )
          {
           somme += 1 / denominateur ;
           denominateur += 2;
          }

    printf("La valeaur de la somme en utilisant le boucle while est %10.6f\n", somme);
    }

    { /* Utilisation du boucle for*/
     const int BORNE1 =   1,
               BORNE2 = 9999;
     int denominateur;
     float somme = 0;

     for (denominateur = BORNE1; 
	      denominateur <= BORNE2; 
		  denominateur+=2)
          somme += 1.0 / denominateur;

    printf("La valeaur de la somme en utilisant le boucle for est %10.6f\n", somme);
    }
return 0 ; 
  }
