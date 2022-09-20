#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int x,y,z;
void fA(void)
{
	FILE* fa;
	int a, b;
	fa = fopen("a.txt", "r");
	while (!feof(fa)) {
		fscanf(fa, "%d %d", &a, &b);
		x = a;
		y = b;
	}
	fclose(fa);
}
void fB(void)
{
	FILE* fb;
	fb = fopen("b.txt", "w");
	z = x + y;
	fprintf(fb, "%d", z);
	fclose(fb);
}
int main()
{
	fA();
	fB();
}