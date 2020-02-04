/*
Nazlee Yahia
p1200800
*/
class Personne{
	private String naissance;
	private int nbCafe;
	
	public Personne(){
		naissance = "02/05/1990";
		nbCafe = 1;
	}
	
	public Personne(String n, int c){
		naissance = n;
		nbCafe = c;
	}
	
	public String getNaissance() {
		return naissance;
	}
	
	public int getnbCafe() {
		return nbCafe;
	}
	
	public void setnbCafe(int c) {
		nbCafe = c;
	}
	
	
}

public class TestPersonne {

	public static void main(String[] args) {
		
		Personne[] pers = new Personne[5];
		pers[0] = new Personne("16/11/1992",2);
		pers[1] = new Personne();
		pers[2] = new Personne("23/05/1996",5);
		pers[3] = new Personne("19/02/1985",0);
		pers[4] = new Personne("30/05/1991",2);
		imprime(pers,5);
		System.out.println();
		plus(pers,5);
		System.out.println();
		reduit(pers,5);
		System.out.println();
		imprime(pers,5);
		System.out.println();		
		trier(pers,5);
		System.out.println();	
		imprime(pers,5);
		System.out.println();	
		mai(pers,5);
		
	}
	
	public static void mai(Personne[] pers, int n) {
		String temp;
		int num;
		int i, compter = 0;
		
		for(i = 0; i < n; i++) {
			temp = pers[i].getNaissance();
			num = Character.getNumericValue(temp.charAt(4));
			if(num == 5) {
				compter++;
			}
		}
		
		System.out.print("Il y a "+compter+" personnes qui sont nées au mois de mai");
		
	}
	
	public static void trier(Personne[] pers, int n) {
		int i,j;
		int a,b;
		Personne temp = new Personne();
		System.out.println("Trier...");
		 for (i = 0; i < n; ++i) 
	        {
	            for (j = i + 1; j < n; ++j)
	            {
	            	a = pers[i].getnbCafe();
	            	b = pers[j].getnbCafe();
	                if (a > b) 
	                {
	                	temp = pers[i];
	                	pers[i] = pers[j];
	                	pers[j] = temp;
	                }
	 
	            }
	 
	        }
		 return;
	}
	
	public static void reduit(Personne[] pers, int n) {
		int temp;
		
		for(int i = 0; i < n; i++) {
			temp = pers[i].getnbCafe();
			if(temp > 0) {
				pers[i].setnbCafe(temp-1);
			}
		}
	}
	
	public static void imprime(Personne[] pers, int n) {
		
		System.out.println("Naissance\tnbCafe");
		for(int i =0; i <n; i++) {
			System.out.println(pers[i].getNaissance()+"\t"+pers[i].getnbCafe());
		}
		
	}
	
	public static void plus(Personne[] pers, int n) {
		int tempcafe, temp = 0; 
		int max = 0;
		for(int i = 0; i < 5; i++) {
			tempcafe = pers[i].getnbCafe();
			if(tempcafe > max) {
				max = tempcafe;
				temp = i;
			}
		}
		
		System.out.print(pers[temp].getNaissance()+" consomme le plus de café avec "+pers[temp].getnbCafe());
		return;
		
	}

}
/*Resultat
Naissance	nbCafe
16/11/1992	2
02/05/1990	1
23/05/1996	5
19/02/1985	0
30/05/1991	2

23/05/1996 consomme le plus de café avec 5

Naissance	nbCafe
16/11/1992	1
02/05/1990	0
23/05/1996	4
19/02/1985	0
30/05/1991	1

Trier...

Naissance	nbCafe
02/05/1990	0
19/02/1985	0
16/11/1992	1
30/05/1991	1
23/05/1996	4

Il y a 3 personnes qui sont nées au mois de mai
 */

