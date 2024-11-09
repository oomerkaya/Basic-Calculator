#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main(void)

{
	float sayi1, sayi2;
	char islem;
	printf("Lutfen 1. sayiyi giriniz: ");
	scanf("%f", &sayi1);
	printf("Lutfen 2. sayiyi giriniz: ");
	scanf("%f", &sayi2);
	printf("Lutfen kullanmak istediginiz matematiksel sembolu giriniz: ");
	scanf("%s", &islem);

	switch (islem) 
	{
	case '+': printf("Toplam: %2.f", (sayi1 + sayi2)); break;
	case '-':printf("Fark: %2.f", (sayi1 - sayi2)); break;
	case '*':printf("Carpim: %.2f", (sayi1 * sayi2)); break; 
	case '/':printf("Bolum: %.2f", (sayi1 / sayi2)); break;
	default:printf("Hatali sembol"); break;
	}

	getch();
}