/***********************************************************************************************
*  
*  \mainpage  for.c                                   
*                                                                                            
*  @brief  stqampare a schermo la tabella pitagorica
*                                   
*                                                                                            
*  @author Gabriele Corona 3H                                                                 
*                                                                                              
*  @date 21/12/22                                                                              
*                                                                                              
***********************************************************************************************/
#include<stdio.h>
int main()
{
	int num=1,num2=0,cont=1;    //dichiaro e avvaloro le variabili intere
	
	for(cont=1;cont<=10;cont++) //quando cont supera il 10 il ciclo si ferma, cont viene incrementato di uno ogni ciclo eseguito
	{
		for(num=1;num<=10;num++) //for annidato che se la variabile inserita dall'utente supera 10 si ferma, il numero viene incrementato di uno ogni ciclo eseguito
		{
			num2+=cont;
			
			printf("%4d",num2);   //stampare a schermo i numeri 
			
		}num2=0;
		printf("\n\n");
		
	}
	return 0;
}
