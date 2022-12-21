/*
 file: somma_interi.c
 autore: Gabriele Corona
 data: 21/9/22
 
 Somma di due interi letti da tastiera e stampa a schermo del risultato
 
 Input: due numeri interi
 Elaborazione: somma
 Output: un numero intero
 
 */
   #include <stdio.h> //printf, scanf
int main()
{
   	//dichiariamo le due variabili input
   	int num1,num2;
   	//e output
   	int ris;
   	
   	//Input: due numeri interi
   	printf("Inserisci il primo numero ");
   	scanf("%d", &num1);
   	printf("Inserisci il secondo numero ");
   	scanf("%d", &num2);
   	
   	//Elaborazione: somma
   	//Assegna alla variabile ris
   	//Il risultato della espressione num1 + num2
   	ris =num1+num2;
   	
   	//Output: un numero intero
   	printf("la somma dei due numeri e %d", ris);
   	
   	//terminiamo il programma
   	return 0;  	
   	
}
 
 
