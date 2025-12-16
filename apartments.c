#include <stdio.h>
#include <Windows.h>
#include <math.h>

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float m;
	int rub_m;

	printf("¬ведите плоащдь квартиры m*m:");
	scanf_s("%f", &m);

	printf("¬ведите стоимость за 1 кв.м.:");
	scanf_s("%d", &rub_m);

	float price = m * rub_m;

	printf(" вартира площадью %f метров с ценой %d   за 1 кв.м. будет стоить %f рублей", m, rub_m, price);


}

