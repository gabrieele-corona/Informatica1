/***********************************************************************************************
*  file: espressione.c                                                                         *
*                                                                                              *   
*  \mainpage  espressione                                                                     *
*                                                                                              *
*  @brief espressione tra due varibili con condizioni                                          *
*                                                                                              *
*  @author Gabriele Corona                                                                     *
*                                                                                              *
*  @date 21/10/22                                                                              *
*                                                                                              *
***********************************************************************************************/
#include<stdio.h>//printf,scanf
int main()
{
    //dichiaro le variabili input e output
	int a,b;
	//dichiariamo la variabile di lavoro e output
	int c;
	
	//avvalorare le variabili
	printf("Inserisci il valore del primo intero\t");
	scanf("%d",&a);
	printf("Inserisci il valore del secondo intero\t");
	scanf("%d",&b);
	
	//eloaborazione 
	if((a/b)>3){
	  c=-1*a;
	}
	else{
	  c=b-a;
	}
	
	//visualizza output
	printf("A=%d\n", a);
	printf("B=%d\n", b);
	printf("C=%d\n", c);
	
	//terminiamo il programma
	return 0;
}
