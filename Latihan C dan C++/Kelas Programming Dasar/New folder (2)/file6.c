#include <stdio.h>

int main()
{
	FILE *pf;
	char nama[20];
	int nilai, i;

	pf = fopen("tes.txt", "a");
	if (pf == NULL)
	{
		printf("File Tidak Ada\n");
	}
	else
	{
		i = 0;
		do
		{
			printf("Masukkan nama : ");
			scanf(" %s", nama);
			scanf(" %d", &nilai);
			fprintf(pf, "\n%s\n%d", nama, nilai);
			i++;
		} while (i < 2);
	}
	fclose(pf);
	return 0;
}
