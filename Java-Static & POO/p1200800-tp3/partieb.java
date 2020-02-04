/*
Nazlee Yahia
p1200800
*/

public class partieb {

	public static void main(String[] args) {
		char poste[] = {'A', 'P', 'O', 'P', 'A', 'P', 'A', 'P'};
		int nbCafe[] = {3, 1, 5, 1, 2, 1, 0, 3};
		int age[] = {25, 18, 23, 20, 50, 24, 52, 29};
		int n = 8;
	
		int intr[] = new int[4];
		float floatr[] = new float[2];

		imprime(poste,nbCafe,age,n);
		analyse(poste,nbCafe,age,n,intr,floatr);
		swap(poste,nbCafe,age,n);
		resultat(intr,floatr);
		imprime(poste,nbCafe,age,n);		
		
	}
	
	public static void resultat(int[] intr, float[] floatr) {
		
	    System.out.println("\n\nNombre de programmeurs: "+ intr[0]);
        System.out.println("Nombre de secretaires: "+intr[1]);
        System.out.println("Consommation minimal de cafe des programmeurs: "+intr[2]);
        System.out.println("Age maximal des analystes: "+intr[3]);
        System.out.println("Consommation moyenne de cafe des programmeurs: "+floatr[0]);
        System.out.println("Age moyen de tout les employes: "+floatr[1]);
        System.out.println("\n");
	}
	
	public static void swap(char[] poste, int [] nbCafe, int[] age, int n) {
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
	
	public static void imprime(char[] poste, int [] nbCafe, int[] age, int n) {
		int i = 0;
		for(i = 0; i < n; i++){
		System.out.println("Poste: "+poste[i]+"\tnbCafe: "+nbCafe[i]+"\tAge: "+age[i]);
		}
		
		return;
		
	}
	
	public static void analyse(char[] poste, int [] nbCafe, int[] age, int n, int[] intr, float[] floatr) {
		int deux = 0, trois = 0, quatre = 10, cinq = 0;
		float six = 0, sept = 0;
		int i =0;
		
		for(i = 0; i < n; i++){
		switch(poste[i]){
			
			case 'A':
			if(age[i]>cinq){
				cinq = age[i];
			}
			
			break;
			
			case 'O':
				
			break;
			
			case 'P':
			deux = deux + 1;
			if(nbCafe[i] < quatre){
				quatre = nbCafe[i];
			}
			six += nbCafe[i];
			break;
			
			case 'S':
			trois = trois +1;
			break;
		}
		sept += age[i];
	}
	six = six / deux;
	sept = sept / n;
	
	intr[0] = deux;
	intr[1] = trois;
	intr[2] = quatre;
	intr[3] = cinq;
	floatr[0] = six;
	floatr[1] = sept;
	
	return;
		
	}

}


/*Resultat
Poste: A	nbCafe: 3	Age: 25
Poste: P	nbCafe: 1	Age: 18
Poste: O	nbCafe: 5	Age: 23
Poste: P	nbCafe: 1	Age: 20
Poste: A	nbCafe: 2	Age: 50
Poste: P	nbCafe: 1	Age: 24
Poste: A	nbCafe: 0	Age: 52
Poste: P	nbCafe: 3	Age: 29


Nombre de programmeurs: 4
Nombre de secretaires: 0
Consommation minimal de cafe des programmeurs: 1
Age maximal des analystes: 52
Consommation moyenne de cafe des programmeurs: 1.5
Age moyen de tout les employes: 30.125


Poste: P	nbCafe: 1	Age: 18
Poste: P	nbCafe: 1	Age: 20
Poste: O	nbCafe: 5	Age: 23
Poste: P	nbCafe: 1	Age: 24
Poste: A	nbCafe: 3	Age: 25
Poste: P	nbCafe: 3	Age: 29
Poste: A	nbCafe: 2	Age: 50
Poste: A	nbCafe: 0	Age: 52

 */
