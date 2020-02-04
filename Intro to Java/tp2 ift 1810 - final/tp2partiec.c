/*Nazlee Yahia
p1200800
IFT1810 */

int main() {
	char poste[] = {'A', 'P', 'O', 'P', 'A', 'P', 'A', 'P'};/*déclaration du character */
	int nbCafe[] = {3, 1, 5, 1, 2, 1, 0, 3};/*déclaration d'une integer de nbCafe*/
	int age[] = {25, 18, 23, 20, 50, 24, 52, 29};/*déclaration d'une integer d'age*/
	int n = 8;
	int i,j,tempint;
	char tempchar; /*déclaration du character */
	int deux = 0, trois = 0, quatre = 10, cinq = 0;x
	float six = 0, sept = 0;/*déclaration du float */
	
	for(i = 0; i < n; i++){ /* Utilisation du boucle for*/
		printf("Poste: %c\tnbCafe: %d\tAge: %d\n", poste[i], nbCafe[i], age[i]); /* Affiche le poste*/
	}
	
	for(i = 0; i < n; i++){
		switch(poste[i]){ /*détermine le poste avec le switch */
			
			case 'A':
			if(age[i]>cinq){
				cinq = age[i];
			} 
	
			break;
			
			case 'O':
				
			break;
			
			case 'P':
			deux++;
			if(nbCafe[i] < quatre){
				quatre = nbCafe[i];
			}
			six += nbCafe[i];
			break;
			
			case 'S':
			trois++;
			break;
		}
		sept += age[i];
	}
	six = six/deux;
	sept = sept/n;
	
    for (i = 0; i < n; ++i) /* Avec la boucle for.*/
        {
            for (j = i + 1; j < n; ++j)/* Avec la boucle for.*/
            {
                if (age[i] > age[j]) /* cas de l'age.*/
                {
 
                    tempint =  age[i];
                    age[i] = age[j];
                    age[j] = tempint;
 
                    tempint =  nbCafe[i];
                    nbCafe[i] = nbCafe[j];
                    nbCafe[j] = tempint;
 
                    tempchar =  poste[i];
                    poste[i] = poste[j];
                    poste[j] = tempchar;
 
                }
 
            }
 
        }
        
        printf("\n\nNombre de programmeurs: %d\n", deux);/* Affiche Nombre de programmeurs:*/
        printf("Nombre de secretaires: %d\n", trois);/* Affiche Nombre de secretaires:*/
        printf("Consommation minimal de cafe des programmeurs: %d\n", quatre);/* Affiche Consommation minimal de cafe des programmeurs:*/
        printf("Age maximal des analystes: %d\n", cinq);/* Affiche Age maximal des analystes:*/
        printf("Consommation moyenne de cafe des programmeurs: %.2f\n", six);/* Affiche Consommation moyenne de cafe des programmeurs:*/
        printf("Age moyen de tout les employes: %.2f\n\n", sept);/* Affiche Age moyen de tout les employes:*/
        
	
		for(i = 0; i < n; i++){
		printf("Poste: %c\tnbCafe: %d\tAge: %d\n", poste[i], nbCafe[i], age[i]);
	}
	
	
	
	return 0;
}

//Affiche Resultat
/*
Poste: A        nbCafe: 3       Age: 25
Poste: P        nbCafe: 1       Age: 18
Poste: O        nbCafe: 5       Age: 23
Poste: P        nbCafe: 1       Age: 20
Poste: A        nbCafe: 2       Age: 50
Poste: P        nbCafe: 1       Age: 24
Poste: A        nbCafe: 0       Age: 52
Poste: P        nbCafe: 3       Age: 29


Nombre de programmeurs: 4
Nombre de secretaires: 0
Consommation minimal de cafe des programmeurs: 1
Age maximal des analystes: 52
Consommation moyenne de cafe des programmeurs: 1.50
Age moyen de tout les employes: 30.13

Poste: P        nbCafe: 1       Age: 18
Poste: P        nbCafe: 1       Age: 20
Poste: O        nbCafe: 5       Age: 23
Poste: P        nbCafe: 1       Age: 24
Poste: A        nbCafe: 3       Age: 25
Poste: P        nbCafe: 3       Age: 29
Poste: A        nbCafe: 2       Age: 50
Poste: A        nbCafe: 0       Age: 52

--------------------------------
Process exited after 0.2042 seconds with return value 0
Press any key to continue . . .*/
