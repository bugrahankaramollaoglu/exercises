#include <stdio.h>

/* EOF */

int main(void)
{
	FILE *deneme;

	if ((deneme = fopen("deneme.txt", "w")) == NULL)
		puts("File could not be opened");
	else
	{
		puts("enter things: ");
		puts("enter EOF to finish.");
		printf("%s", "> ");
	}

	char name[30];
	scanf("%s", name);

	while (!feof(stdin))
	{
		fprintf(deneme, "%s\n", name);
		printf("%s", "> ");
		scanf("%s", name);
	}
	fclose(deneme);
}

/* EOF windowsta ctrl+z, unixte ctrl+d'dir */
