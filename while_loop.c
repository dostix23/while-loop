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

return 0;
}
