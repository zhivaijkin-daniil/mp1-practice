#include <stdio.h>
#include <math.h>
#include <locale.h>
void main()
{
	int n;
	float m; //�����
	float hz, wz; //������ ������
	float db; //��������
	float dsp, dvp, wood, tdsp, tdvp, twood; //��������� � �������
	float Vz, Vd, Vb, Vtop, Vn; //������

	dsp=650;
	dvp=820;
	wood=700;
	tdsp=1.5;
	tdvp=0.5;
	twood=1;
	setlocale (LC_CTYPE,"rus");
	printf("������ ����� (�� 180�� �� 220��) =");
	scanf("%f", &hz);
	printf("������ ����� (�� 80�� �� 120��) =");
	scanf("%f", &wz);
	printf("������� �������� (�� 50�� �� 90��) =");
	scanf("%f", &db);
	if ((hz<180)||(hz>220)||(db<50)||(db>90)||(wz<80)||(wz>120))
	{
		printf("�������� ������ (������, �������) ��������� ��� ���������");
		return;
	}
	//������ ���������� � ������� �����
	n=(hz/40);
	//������ �������
	Vz=(hz*wz*tdvp)/1000000;
	Vd=(hz*wz*twood)/1000000;
	Vb=(hz*db*tdsp)/1000000;
	Vtop=(wz*db*tdsp)/1000000;
	Vn=(n*(db*wz*tdsp)/1000000);
	//������ �����
	m=(dsp*(Vb+Vtop+Vn)+(dvp*Vz)+(wood*Vd));
	printf("����� ����� (��) = %f ", m);
	return;
}