#include<iostream>
#include<stdio.h>
#include<locale.h>
#include"Header.h"
#include<time.h>
#include<stdlib.h>


void main22()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	short int n, quit;
	do
	{
		printf("please enter number of a task?: ");
		scanf("%hu", &n);
		switch (n)
		{
		case 1:
		case 2:
		{
			/*Напишите короткую программу на C, которая объявляет и инициализирует (любому интересующему вас значению) double, int и char.
			Затем объявите и инициализируйте указатель на каждый из три переменные.
			Затем ваша программа должна распечатать адрес и значение сохраненный в памяти и размер памяти (в байтах) каждой из шести переменных.
			Используйте спецификатор форматирования «0x% x» для печати адресов в шестнадцатеричном формате. Вы должны видеть адреса, которые выглядят примерно так:«0xbfe55918»
			Начальный символы «0x» говорят вам, что используется шестнадцатеричная нотация; остаток цифр выдает адрес.
			Используйте оператор sizeof для определения размера памяти, выделенной для каждого переменная.
			*/
			int *a = NULL;
			char *b = NULL;
			double *c = NULL;
			int i = 5;
			char g = 'a';
			double h = 10.2;
			a = &i;
			b = &g;
			c = &h;
			printf("адрес [a] = 0x%x, значение [a] = %d, размер [a] = %d\n", a, *a, sizeof(*a));
			printf("адрес [b] = 0x%x, значение [b] = %c, размер [b] = %d\n", b, *b, sizeof(*b));
			printf("адрес [c] = 0x%x, значение [c] = %lf, размер [c] = %d\n\n", c, *c, sizeof(*c));

			printf("адрес [i] = 0x%x, значение [i] = %d, размер [i] = %d\n", &i, i, sizeof(i));
			printf("адрес [g] = 0x%x, значение [g] = %c, размер [g] = %d\n", &g, g, sizeof(g));
			printf("адрес [h] = 0x%x, значение [h] = %lf, размер [h] = %d\n", &h, h, sizeof(h));
		}
		break;
		case 3:
		{
			/*Напишите программу на C, чтобы проверить, может ли Number быть выражен как сумма двух простых чисел*/
			int a = 0, b = 0;
			int number;
			printf("введите число: ");
			scanf("%d", &number);
			if (SumPrimeNumber(&number, &a, &b))
				printf("число %d  состоит из простых чисел %d и %d\n", number, a, b);
			else
				printf("Error.\n");
			break;

		}
		break;
		case 4:
		{
			/*Напишите программу в C, чтобы преобразовать десятичное число в шестнадцатеричное.*/
			int a;
			printf("введите десятичное число: ");
			scanf("%d", &a);
			printf("Шестнадцатеричная форма записи числа: %X\n", a);
		}
		break;
		case 5:
		{
			/*Напишите программу c для ввода и печати возраста, который должен быть больше 18 и менее 30 лет,
			необходимо проверить возрастную проверку и ввести возраст рекурсивно до тех пор, пока значение возраста не будет действительным.*/
			int old = 0;
			PrintYers(old);
		}
		break;
		case 6:
		{
			/*Напишите программу c для ввода n чисел, напечатайте их сумму и наибольшее число, не сохраняя их в массиве.*/
			SUMM();
		}
		break;
		case 7:
		{

		}
		default:printf("There is no task! Please enter number of a task\n");
			break;
		}
		printf("To continue? 1-Yes 2-No: ");
		scanf("%hu", &quit);
		printf("\n");
	} while (quit == 1);
}