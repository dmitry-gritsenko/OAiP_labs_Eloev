/*����� ������� �������������
���� 1-8
������������ � 1
������� �2
�������: ��������� ���� � ��/� � �/�*/
#include <stdio.h>
#define N 1.85 
#define C 1000/3600

int main()
{
	system("chcp 1251");
	system("cls");
	float a;
	printf("������� ���������� �����: ");
	int x;
	do
	{
		x = scanf_s("%f", &a);
		if (!x)
		{
			printf("������ �����!!!!!!\n��������� ������� �����: ");
			while (getchar() != '\n');
		}
		else
		{
			float c = a *N;
			float b = c * C;
			printf("%.1f ����� = %.1f ��/� = %.1f �/�  \n",a,c,b); 
		}
	} while (x != 1);
	_getch();
	return 0;
}