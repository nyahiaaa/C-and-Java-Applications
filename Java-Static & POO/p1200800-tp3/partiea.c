/*
Nazlee Yahia
p1200800
*/

#include <stdio.h>

void imprime(char *poste, int *nbCafe, int *age, int n);
void analyse(char *poste, int *nbCafe, int *age, int n, int *deux, int *trois, int *quatre, int *cinq, float *six, float *sept);
void swap(char *poste, int *nbCafe, int *age, int n);
void resultat(int *deux, int *trois, int *quatre, int *cinq, float *six, float *sept);

int main() {
	
	char poste[] = {'A', 'P', 'O', 'P', 'A', 'P', 'A', 'P'};
	int nbCafe[] = {3, 1, 5, 1, 2, 1, 0, 3};
	int age[] = {25, 18, 23, 20, 50, 24, 52, 29};
	int n = 8;
	int i,j,tempint;
	char tempchar;
	int deux = 0, trois = 0, quatre = 10, cinq = 0;
	float six = 0, sept = 0;
	
	
	imprime(poste,nbCafe,age,n);
	analyse(poste,nbCafe,age,n, &deux, &trois, &quatre, &cinq, &six, &sept);
	swap(poste,nbCafe,age,n);
	resultat(&deux, &trois, &quatre, &cinq, &six, &sept);
	imprime(poste,nbCafe,age,n);

	return 0;
}

void imprime(char *poste, int *nbCafe, int *age, int n){
		int i = 0;
		for(i = 0; i < n; i++){
		printf("Poste: %c\tnbCafe: %d\tAge: %d\n", poste[i], nbCafe[i], age[i]);
	}
	
	return;
}

void analyse(char *poste, int *nbCafe, int *age, int n, int *deux, int *trois, int *quatre, int *cinq, float *six, float *sept){
	
	int i =0;
	
		for(i = 0; i < n; i++){
		switch(poste[i]){
			
			case 'A':
			if(age[i]>*cinq){
				*cinq = age[i];
			}
			
			break;
			
			case 'O':
				
			break;
			
			case 'P':
			*deux = *deux + 1;
			if(nbCafe[i] < *quatre){
				*quatre = nbCafe[i];
			}
			*six += nbCafe[i];
			break;
			
			case 'S':
			*trois = *trois +1;
			break;
		}
		*sept += age[i];
	}
	*six = *six / *deux;
	*sept = *sept / n;
	
	
	return;
}


void swap(char *poste, int *nbCafe, int *age, int n){
		int i = 0;
		int j = 0;
		int tempint;
		char tempchar;
		
		 for (i = 0; i < n; ++i) 
        {
            for (j = i + 1; j < n; ++j)
            {
                if (age[i] > age[j]) 
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
	
	return;
}


void resultat(int *deux, int *trois, int *quatre, int *cinq, float *six, float *sept){
	
	    printf("\n\nNombre de programmeurs: %d\n", *deux);
        printf("Nombre de secretaires: %d\n", *trois);
        printf("Consommation minimal de cafe des programmeurs: %d\n", *quatre);
        printf("Age maximal des analystes: %d\n", *cinq);
        printf("Consommation moyenne de cafe des programmeurs: %.2f\n", *six);
        printf("Age moyen de tout les employes: %.2f\n\n", *sept);
return;

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


