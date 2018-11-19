#include<stdio.h>
#include<math.h>
#include<locale.h>

void main()
{
    float n;
    float m; //�����
    float hz, wz; //������ ������
    float db; //��������
    float dsp, dvp, wood, tdsp, tdvp, twood; //��������� � �������
    float Vz, Vd, Vb, Vtop, Vn; //������
    tdsp=0.015;
    tdvp=0.005;
    twood=0.01;
    setlocale (LC_CTYPE,"rus");
    printf("������ ����� (�� 180�� �� 220��) =");
    scanf("%f", &hz);
    printf("������ ����� (�� 80�� �� 120��) =");
    scanf("%f", &wz);
    printf("������� �������� (�� 50�� �� 90��) =");
    scanf("%f", &db);
    printf("������� ��������� ���\n");
    scanf("%f", &dsp);
    printf("������� ��������� ���\n");
    scanf("%f", &dvp);
    printf("������� ��������� ������\n");
    scanf("%f", &wood);
    if ((hz < 180)||(hz > 220)||(db < 50)||(db > 90)||(wz < 80)||(wz > 120))
    {
        printf("�������� ������ (������, �������) ��������� ��� ���������");
        return;
    }
	hz = hz / 100;
	db = db / 100;
	wz = wz / 100;
    if ((dsp <= 0)||(dvp <= 0)||(wood <= 0))
    {
        printf("������������ ���� ���������");
        return;
    }
    //������ ���������� � ������� �����
    n=((hz - 2 * 0.015) / (0.4 + 0.015) * (wz - 2 * 0.015) * (db - 0.005));
    //������ �������
    Vz=(hz*wz*tdvp);
    Vd=(hz*wz*twood);
    Vb=(hz*db*tdsp);
    Vtop=(wz*db*tdsp);
    Vn=(n*(db*wz*tdsp));
    //������ �����
    m=(dsp*(Vb+Vtop+Vn)+(dvp*Vz)+(wood*Vd));
    printf("����� ����� (��) = %f ", m);
    return;
}