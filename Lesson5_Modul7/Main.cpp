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
			/*�������� �������� ��������� �� C, ������� ��������� � �������������� (������ ������������� ��� ��������) double, int � char.
			����� �������� � ��������������� ��������� �� ������ �� ��� ����������.
			����� ���� ��������� ������ ����������� ����� � �������� ����������� � ������ � ������ ������ (� ������) ������ �� ����� ����������.
			����������� ������������ �������������� �0x% x� ��� ������ ������� � ����������������� �������. �� ������ ������ ������, ������� �������� �������� ���:�0xbfe55918�
			��������� ������� �0x� ������� ���, ��� ������������ ����������������� �������; ������� ���� ������ �����.
			����������� �������� sizeof ��� ����������� ������� ������, ���������� ��� ������� ����������.
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
			printf("����� [a] = 0x%x, �������� [a] = %d, ������ [a] = %d\n", a, *a, sizeof(*a));
			printf("����� [b] = 0x%x, �������� [b] = %c, ������ [b] = %d\n", b, *b, sizeof(*b));
			printf("����� [c] = 0x%x, �������� [c] = %lf, ������ [c] = %d\n\n", c, *c, sizeof(*c));

			printf("����� [i] = 0x%x, �������� [i] = %d, ������ [i] = %d\n", &i, i, sizeof(i));
			printf("����� [g] = 0x%x, �������� [g] = %c, ������ [g] = %d\n", &g, g, sizeof(g));
			printf("����� [h] = 0x%x, �������� [h] = %lf, ������ [h] = %d\n", &h, h, sizeof(h));
		}
		break;
		case 3:
		{
			/*�������� ��������� �� C, ����� ���������, ����� �� Number ���� ������� ��� ����� ���� ������� �����*/
			int a = 0, b = 0;
			int number;
			printf("������� �����: ");
			scanf("%d", &number);
			if (SumPrimeNumber(&number, &a, &b))
				printf("����� %d  ������� �� ������� ����� %d � %d\n", number, a, b);
			else
				printf("Error.\n");
			break;

		}
		break;
		case 4:
		{
			/*�������� ��������� � C, ����� ������������� ���������� ����� � �����������������.*/
			int a;
			printf("������� ���������� �����: ");
			scanf("%d", &a);
			printf("����������������� ����� ������ �����: %X\n", a);
		}
		break;
		case 5:
		{
			/*�������� ��������� c ��� ����� � ������ ��������, ������� ������ ���� ������ 18 � ����� 30 ���,
			���������� ��������� ���������� �������� � ������ ������� ���������� �� ��� ���, ���� �������� �������� �� ����� ��������������.*/
			int old = 0;
			PrintYers(old);
		}
		break;
		case 6:
		{
			/*�������� ��������� c ��� ����� n �����, ����������� �� ����� � ���������� �����, �� �������� �� � �������.*/
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