/*����� ������� �������������
���� 1-8
������������ � 1
������� �2
�������: ��������� ���� � ��/� � �/�*/
#include <stdio.h>
#define nodes_in_km_h 1.85 
#define km_h_in_m_s 1000/3600

int main()
{
	system("chcp 1251");
	system("cls");
	float node;
	printf("������� ���������� �����: ");
	int x;
	do
	{
		x = scanf_s("%f", &node);
		if (!x)
		{
			printf("������ �����!!!!!!\n��������� ������� �����: ");
			while (getchar() != '\n');
		}
		else
		{
			float km_h = node * nodes_in_km_h;
			float m_s = km_h * km_h_in_m_s;
			printf("%.1f ����� = %.1f ��/� = %.1f �/�  \n", node , km_h,m_s);
		}
	} while (x != 1);
	_getch();
	return 0;
}