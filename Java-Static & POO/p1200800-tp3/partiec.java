/*
Nazlee Yahia
p1200800
*/

public class partiec {

	public static void main(String[] args) {
		
		 String  telUDM  =  "5143436111", telJean =  "4503861504";
		 System.out.print("Téléphone d’UdM :");
		 affiche(telUDM);
		 System.out.print("Téléphone de Jean :");
		 affiche(telJean);
		 System.out.println("");
		 System.out.println("Pour le numéro de téléphone d’UdM:");
		 fois(telUDM);
		 System.out.println("Pour le numéro de téléphone de Jean:");
		 fois(telJean);
		 commun(telUDM,telJean);
		 
	}
	
	public static void commun(String a, String b) {
		int i = 0;
		
		System.out.print("Les chiffres impairs communs de ces 2 téléphones :");
		for(i = 1; i < 10;) {
			if(a.contains(""+i) && b.contains(""+i)) {
				System.out.print(" "+i);
			}
			i = i+2;
		}
		System.out.println();
		System.out.print("Les chiffres pairs communs de ces 2 téléphones :");
		for(i = 0; i < 10;) {
			if(a.contains(""+i) && b.contains(""+i)) {
				System.out.print(" "+i);
			}
			i = i+2;
		}
		
	}
	
	public static void fois(String num) {
		int i =0, j =0;
		int numero;
		int fois = 0;
		for(i = 0; i < 10; i++) {
			fois = 0;
			for(j = 0; j < 10; j++) {
				numero = Character.getNumericValue(num.charAt(j));
				if(numero == i) {
					fois++;
				}
			}
			if(fois >= 1) {
				System.out.println("Il y a "+fois+" fois le numéro "+i);
			}
		}
		System.out.println("");
	}
	
	public static void affiche(String num) {
		int i = 0;
		
		for(i = 0; i < 10; i++) {
			if(i == 0) {
				System.out.print("(");
			}
			else if(i == 3) {
				System.out.print(")");
			}
			else if(i == 6) {
				System.out.print("-");
			}
			
			System.out.print(num.charAt(i));
			
		}
		System.out.println("");
		
	}
}

/*Resultat
Téléphone d’UdM :(514)343-6111
Téléphone de Jean :(450)386-1504

Pour le numéro de téléphone d’UdM:
Il y a 4 fois le numéro 1
Il y a 2 fois le numéro 3
Il y a 2 fois le numéro 4
Il y a 1 fois le numéro 5
Il y a 1 fois le numéro 6

Pour le numéro de téléphone de Jean:
Il y a 2 fois le numéro 0
Il y a 1 fois le numéro 1
Il y a 1 fois le numéro 3
Il y a 2 fois le numéro 4
Il y a 2 fois le numéro 5
Il y a 1 fois le numéro 6
Il y a 1 fois le numéro 8

Les chiffres impairs communs de ces 2 téléphones : 1 3 5
Les chiffres pairs communs de ces 2 téléphones : 4 6
*/
