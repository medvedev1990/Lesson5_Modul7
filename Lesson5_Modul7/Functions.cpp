#include<iostream>
#include<stdio.h>
#include<locale.h>
#include"Header.h"
#include<time.h>
#include<stdlib.h>

int i, j;
bool PrimeNumber(int *a)
{
	bool flag;
	int check = 0;
	for (int i = 1; i <= *a; i++)
	{
		if (*a%i == 0)
			check++;
	}
	if (check == 2)
		flag = true;
	else
		flag = false;
	return flag;
}
bool SumPrimeNumber(int *number, int *a, int *b)
{
	bool flag = false;
	for (int i = 1; i <= (*number / 2); i++)
	{
		if (PrimeNumber(&i))
		{
			for (int j = ((*number / 2)) + 1; j < *number; j++)
			{
				if (PrimeNumber(&j) && i + j == *number)
				{
					*a = i;
					*b = j;
					flag = true;
				}
			}
		}
	}
	return flag;
}
int PrintYers(int year)
{
	printf("Enter please old: ");
	scanf("%d", &year);
	if (year >= 18 && year <= 30)
	{
		printf("GOOD!\n");
		return 1;
	}
	else
		printf("Error!\n");
	return PrintYers(year);
}
void SUMM()
{
	int a, b = 0;
	int summ = 0;
	do
	{
		printf("введите число: ");
		if (scanf("%d", &a) == 1)
		{
			summ += a;
			if (b < a)
				b = a;
		}
		else
			break;
	} while (true);
	printf("сумма чисел = %d\nмаксимальное число = %d\n", summ, b);
}