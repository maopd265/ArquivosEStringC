#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main()
{
	setlocale(LC_ALL,"portuguese");
 	char  string1[50];
	 printf("\n\n\nDigite uma String:");
 	scanf("%[^\n]",string1);
 	//com espaço
 	//scanf("%[^;]s ",string1);
 	//com delimitador
 	printf(" %s ",string1);
	
	
	return 0;
}
