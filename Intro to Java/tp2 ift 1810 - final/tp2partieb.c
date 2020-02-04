/*Nazlee Yahia
p1200800
IFT1810 */

#include <stdio.h>

int main() {
	int somme1 =0, temp = 5;
	
	do{
	temp = temp + temp;
	printf("%d + ", temp);
	somme1 += temp;
	} 
	while (temp < 640);
	printf("0 = \n%d\n\n", somme1);
	
	int somme2 = 0;
	temp = 5;
	
	do{
		temp = temp + 5;
		printf ("%d + ", temp);
		somme2 += temp;
	} while (temp < 100);
	printf(" 0 = \n%d\n\n", somme2);
	
	int somme3 =0;
	temp = 1;
	
	while(temp < 99){
		temp = temp + 2;
		printf("1/%d + ", temp);
		somme3 += temp;
	}
	printf(" 0 = \n1/%d\n\n", somme3);
	
	int somme4 =0;
	temp = 0;
	while(temp < 7){
		temp = temp + 1;
		printf("%d + ", temp);
		somme4 += temp;
	}
	printf(" 0 = \n%d\n\n", somme4);
	
	int somme5 = 0;
	int i;
	for(i = 1; i<=20; i++){
		temp = 20 % i;
		printf("20 mod %d = %d \n",i, temp);
		if(temp == 0){
			somme5++;
		}
	}
	printf("\nNombre de diviseur : %d\n\n", somme5);
	
	int somme6 = 0;
	for(i = 1; i<=6; i++){
		temp = 6 % i;
		printf("6 mod %d = %d \n",i, temp);
		if(temp == 0){
			somme6++;
		}
	}
	printf("\nNombre de diviseur : %d", somme6);
	
	int somme7 = 0;
	for(i = 1; i<=40; i++){
		temp = 40 % i;
		printf("40 mod %d = %d \n",i, temp);
		if(temp == 0){
			somme7++;
		}
	}
	printf("\nNombre de diviseur : %d", somme7);
	
	
return 0;
}

//Affiche Resultat
/*
10 + 20 + 40 + 80 + 160 + 320 + 640 + 0 =
1270

10 + 15 + 20 + 25 + 30 + 35 + 40 + 45 + 50 + 55 + 60 + 65 + 70 + 75 + 80 + 85 +
90 + 95 + 100 +  0 =
1045

1/3 + 1/5 + 1/7 + 1/9 + 1/11 + 1/13 + 1/15 + 1/17 + 1/19 + 1/21 + 1/23 + 1/25 +
1/27 + 1/29 + 1/31 + 1/33 + 1/35 + 1/37 + 1/39 + 1/41 + 1/43 + 1/45 + 1/47 + 1/4
9 + 1/51 + 1/53 + 1/55 + 1/57 + 1/59 + 1/61 + 1/63 + 1/65 + 1/67 + 1/69 + 1/71 +
 1/73 + 1/75 + 1/77 + 1/79 + 1/81 + 1/83 + 1/85 + 1/87 + 1/89 + 1/91 + 1/93 + 1/
95 + 1/97 + 1/99 +  0 =
1/2499

1 + 2 + 3 + 4 + 5 + 6 + 7 +  0 =
28

20 mod 1 = 0
20 mod 2 = 0
20 mod 3 = 2
20 mod 4 = 0
20 mod 5 = 0
20 mod 6 = 2
20 mod 7 = 6
20 mod 8 = 4
20 mod 9 = 2
20 mod 10 = 0
20 mod 11 = 9
20 mod 12 = 8
20 mod 13 = 7
20 mod 14 = 6
20 mod 15 = 5
20 mod 16 = 4
20 mod 17 = 3
20 mod 18 = 2
20 mod 19 = 1
20 mod 20 = 0

Nombre de diviseur : 6

6 mod 1 = 0
6 mod 2 = 0
6 mod 3 = 0
6 mod 4 = 2
6 mod 5 = 1
6 mod 6 = 0

Nombre de diviseur : 440 mod 1 = 0
40 mod 2 = 0
40 mod 3 = 1
40 mod 4 = 0
40 mod 5 = 0
40 mod 6 = 4
40 mod 7 = 5
40 mod 8 = 0
40 mod 9 = 4
40 mod 10 = 0
40 mod 11 = 7
40 mod 12 = 4
40 mod 13 = 1
40 mod 14 = 12
40 mod 15 = 10
40 mod 16 = 8
40 mod 17 = 6
40 mod 18 = 4
40 mod 19 = 2
40 mod 20 = 0
40 mod 21 = 19
40 mod 22 = 18
40 mod 23 = 17
40 mod 24 = 16
40 mod 25 = 15
40 mod 26 = 14
40 mod 27 = 13
40 mod 28 = 12
40 mod 29 = 11
40 mod 30 = 10
40 mod 31 = 9
40 mod 32 = 8
40 mod 33 = 7
40 mod 34 = 6
40 mod 35 = 5
40 mod 36 = 4
40 mod 37 = 3
40 mod 38 = 2
40 mod 39 = 1
40 mod 40 = 0

Nombre de diviseur : 8
--------------------------------
Process exited after 0.04178 seconds with return value 0
Press any key to continue . . .
*/

