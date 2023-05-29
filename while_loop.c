#include <stdio.h>
int main (int argc, char* argv[])
{
	if (argc > 1) 
	{ char* file_path = argv[1];
	printf("Der übergebene Dateipfad lautet: %s\n", file_path);
	}
	else 
	{
	printf("Es wurde kein Dateipfad übergeben.\n");
	}	

	FILE* file=fopen("datei", "r");
	if (file!= 0)
	{
		char zeichen;
		while((zeichen=fgetc(file)) !=EOF) 
		printf("\%c", zeichen);
	}
	else
	{
		printf("Fehler beim Öffnen der Datei. \n");
	}

return 0;
}
