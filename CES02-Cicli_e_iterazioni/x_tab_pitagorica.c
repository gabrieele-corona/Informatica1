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
	
	for(cont=1;cont<=10;cont++)
	{
		for(num=1;num<=10;num++)
		{
			num2+=cont;
			
			printf("%4d",num2);
			
		}num2=0;
		printf("\n\n");
		
	}
	return 0;
}