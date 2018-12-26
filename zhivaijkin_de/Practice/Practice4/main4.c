#include <stdio.h>
#include <locale.h>
#define N 10

void menu()
{
    printf("\n����� �1. �����������...\n");
    printf("\n�������\n");
}
int cod(int str[])
{
    int i,a;
    printf("������� �����-���: \n");
    do
    {
        scanf("%d", &a);
    }
    while (a < 1000 || a > 1009);
    for (i = 0; i < N; i++)
    {
        str[i] = a;
        return i;
    }
}
void info(char tov[][15], int a[], int p[], float skd[], int b)
{
	
	int i;
    printf("\n���������� � ������: \n");
    printf("%c", tov[b][i]);
    printf("\n���: %d\n", a[b]);
    printf("����: %d\n", p[b]);
    printf("������: %0.0f\n", skd[b]);
}
float summa(int p[], float skd[], int b)
{
    int i;
    float summa = 0.0;
    for (i = 0; i < N; i++)
    {
        summa = p[b] - (skd[b] / 100) * p[b];
    }
    return summa;
}
void itog(char tov[][15], int p[], int kol[], float skd[], float price)
{
    int i,j;
    printf("\n����:\n");
    for (i = 0; i < N; i++)
    {
		if (kol[i] != 0)
        {
			printf("%c\n", tov[i][j]);
			printf("��������� ��. ������: %d ���.\n", p[i]);
			printf("���������� ������: %d\n", kol[i]);
			printf("������: %0.0f \n", skd[i]);
			printf("�������� ����: %f", p[i] - (skd[i] / 100) * p[i] * kol[i]);
        }
    }
    printf("\n� ������: %f \n", price);
}
void main()
{
    int c[N] = {1000, 1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1009};
    int p[N] = {1000, 450, 890, 2300, 3000, 800, 2100, 20, 300, 120};
    int var;
    int a = 0;
    float price = 0;
    char tov[N][15] = { "������", "�����", "����o", "���-��� ", "�������", "�������", "�������", "������", "������", "�������" };
    int str[100] = { 0 };
    float skd[] = {10, 10, 1, 5, 30, 10, 10, 10, 20, 10};
    setlocale(LC_ALL, "Rus");
    menu();
    while(1)
    {
        printf("1 - ������������ ������\n");
        printf("2 - ������ ����\n");
        scanf("%d", &var);
        switch (var)
        {
        case 1:
			a = cod(c);
            str[a] = str[a] + 1;
            info(tov, c, p, skd, a);
            price += summa(p, skd, a);
            break;
        case 2:
            itog(tov, p, str, skd, price);
            break;
        }
        if (var == 2)
        {
            break;
        }
    }
}