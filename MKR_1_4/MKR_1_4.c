// MKR1_4.c: Обрахунок функції з аналізом вхідних даних.//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<locale.h>
#include <math.h>
#include <conio.h>
double f;
int main(void)
{
	float x, y;
	setlocale(LC_CTYPE, "ukr");
	do
	{
		printf("\n Введiть два дiйсних числа:");
		printf("\n \t Значення x="); scanf("%f", &x);
		printf("\t Значення y="); scanf("%f", &y);
		if ((x + y) < 0) printf("\n Не можливо обрахувати корiнь з суми веддених Вами чисел x= %.3f та y= %.3f \n", x, y);
		if ((x + y) == 0) printf("\n Не можливо провести розрахунок. \n Сума введених Вами чисел x= %.3f та y= %.3f рiвна \"0\", \n що викличе дiлення на \"0\" \n", x, y);
	} while ((x + y) <= 0);
	f = (pow(x, 2) + pow(y, 2)) / sqrt(x + y);
	printf("\n Результат розрахунку функцii при заданих x= %.3f та y= %0.3f становить %.3lf", x, y, f);

	int getch(); getch();
	return 0;
}
