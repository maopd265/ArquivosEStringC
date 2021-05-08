#include<stdio.h>
#include<stdlib.h>



int main()
{
	FILE * arq;
	arq=fopen("texto.txt","r");
	char c;
	if(arq==NULL)
	{
			return 0;
	}
	while(!feof(arq))
	{
		fscanf(arq,"%c",&c);
		printf("%c",c);
	}
	fclose(arq);

	
}
