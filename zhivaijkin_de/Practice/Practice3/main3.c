#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

void main()
{
	int a, b, c, d, f, e, x, y, z;
	char g;
	srand((unsigned int)time(0));
	a = 0;
	setlocale(LC_CTYPE, "rus");
	do 
	{
		printf("\n������ �����! - ������� 1 ����� ����������; 2 - ����� ����������.\n");
		scanf("%d", &f);
	}
	while (f < 0 || f > 2);
	if (f == 1)
	{
		b = 1 + rand() % 1000;
		while (1)
		{
			printf("����� �������� (�� 1 �� 1000), ���������!\n");
			do
			{
				scanf("%d", &d);
			}
			while ((d < 1) || (d > 1000));
			a++;
			if (d == b)
			{
				break;
			}
			if (d > b)
			{
				printf("���������� ����� ������!\n");
			}
			if (d < b)
			{
				printf("���������� ����� ������!\n");
			}
		}
		printf("������! \n ����� �������: %d\n", a);
		return;
	}
	if (f == 2)
	{
		printf("��������� ����� �� 1 �� 1000\n");
		do
		{
			scanf("%d", &c);
		}
		while ((c < 1)||(c > 1000));
		x = 0;
		y = 1001;
		z = 0;
		a = 0;
		g = '.';
		do
		{
			e = rand() * (y-x) / RAND_MAX + x;
			printf("\n �����, ���: %d \n", e);
			printf("������� ���� >, <, =\n");
			scanf("%*c%c", &g);
			a++;
			switch (g)
			{
			case '>':
				x = e + 1;
				break;
			case '<':
				y = e;
				break;
			case '=':
				z = 1;
				break;
			default:
				printf("����������� ����! ������� ��� ���. \n");
				break;
			}
		}
		while (z == 0);
		printf("\n ���! � ������ ���� �����. ����� �������: %d \n", a);
	}
}