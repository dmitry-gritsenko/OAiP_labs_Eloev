#define _CRT_SECURE_NO_WARNINGSNO
#include <stdio.h>


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
			printf("������ �����. ��������� ������� �����: ");
			while (getchar() != '\n');
		}
		else
		{
			float c = a *1.85;
			float b = (c * 1000) / 3600;
			printf("%.1f ��/� \n", c);
			printf("%.1f �/� \n", b);
		}
	} while (x != 1);
	_getch();
	return 0;
}