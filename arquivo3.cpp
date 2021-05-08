#include<stdio.h>
#include<locale.h>
#include<string.h>
int main()
{
	setlocale(LC_ALL,"portuguese");
	char  stringParaEscrever[50];
	FILE * arq;
	printf("Frase que você gostaria de inserir no texto:\n");
	scanf("%[^\n]",stringParaEscrever);
	arq=fopen("texto.txt","a");
	if(arq==NULL)
	fprintf(stdout,"ARQUIVO NULO!\n");
	else
	fprintf(arq," %s ",stringParaEscrever);
// 	fwrite(stringParaEscrever,1,strlen(stringParaEscrever),arq);
	fclose(arq);
	return 0;
}
