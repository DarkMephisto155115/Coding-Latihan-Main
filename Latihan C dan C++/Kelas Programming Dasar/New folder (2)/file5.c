#include <stdio.h>

int main()
{
	FILE *pf;
	char nama[20], nim[20];
	int nilai;

	pf = fopen("D:/KULIAH/Pemrograman Dasar/programs/cobafile.txt", "r");
	if (pf == NULL)
	{
		printf("File Tidak Ada\n");
	}
	else
	{
		while (!feof(pf))
		{
			fscanf(pf, "%s%d%s", nama, &nilai, nim);
			printf("Nama %s, NIM %s, nilai %d\n", nama, nim, nilai);
		}
	}
	fclose(pf);
	return 0;
}
