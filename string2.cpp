#include<stdio.h>
#include<string.h>
#include<locale.h>
//ordenacao


int main()
{
	setlocale(LC_ALL,"portuguese");
	char  string[30]={"Ola mundo"};
	scanf("%[^\n]s",string);
	
	printf("%s %s",strtok(string," "),string);	
}
