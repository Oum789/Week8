#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	FILE* fa;
	int a, b;
	fa = fopen("a.txt", "r");
	while (!feof(fa)) {
		fscanf(fa, "%d %d", &a, &b);
	}
	fclose(fa);
	int c = a + b;
	FILE* fb;
	fb = fopen("b.txt", "w");
	fprintf(fb, "%d", c);
	fclose(fb);
	return 0;
}
