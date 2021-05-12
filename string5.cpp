#include<stdio.h>
#include<string.h>
#include<locale.h>
//string 2 , comparacao de strings em C


int main()
{
	setlocale(LC_ALL,"portuguese");
	char animal1[40]  ;
	char animal2[40] ;
	scanf("%s",animal1);
	scanf("%s",animal2);
	printf("ANIMAL 1 = %s\n",animal1);
	printf("ANIMAL 2 = %s\n",animal2);
	if(strcmp(animal1,animal2)>0)
	{
		printf("\n\n%s",animal2);
	}else if(strcmp(animal1,animal2)<0)
	{
		printf("\n\n%s",animal1);
	}else 
	{
		printf("\nAS DUAS STRINGS SÃO IGUAIS");
	}
	
	return 0;
}
