#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
int encontrarLetra(int vezes,char buscaLetra,char letraArquivo)
{
	if(buscaLetra==letraArquivo)
	{
		vezes++;
	}
	return vezes;
	
}

int main()
{
	setlocale(LC_ALL,"portuguese");
	FILE * arq;
	arq=fopen("texto.txt","r");
	char c,procurarLetra;
	int repeticaoLetra=0;
	printf("\n%d",repeticaoLetra);
	printf("\nQual letra você gostaria de procurar no texto?\n");
	scanf("%c",&procurarLetra);
	if(arq==NULL)
	{
			return 0;
	}
	while(!feof(arq))
	{
		fscanf(arq,"%c",&c);
		repeticaoLetra=encontrarLetra(repeticaoLetra,procurarLetra,c);

		 
		printf("%c",c);
	}
	fclose(arq);
printf("\n%d",repeticaoLetra);
	
}
