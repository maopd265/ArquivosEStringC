#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main()
{
	setlocale(LC_ALL,"portuguese");
 	char  string1[50];
	 printf("\n\n\nDigite uma String:");
 	scanf("%[^;]s",string1);
 	printf(" %s ",string1);
	
	
	return 0;
}
