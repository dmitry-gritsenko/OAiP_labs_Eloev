/*����� ������� �������������
���� 1-8
������������ � 2
������� �2
�������: �������� ���������, ������� ��������� ������� �������������� ���������
������� ��� ����� ������������ � ������������� ��������� �������. ������ �
��� ����� �������� �������������.*/
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_LENGTH 100
#define MIN_LENGTH 3



int main()
{
	system("chcp 1251");
	system("cls");
	float array[MAX_LENGTH];
	int length;
	printf("������� ����� �������:");
	while (!scanf("%d", &length) || (length > MAX_LENGTH) || (length < MIN_LENGTH))
	{ 
		printf("������ �����!����� ������� �� ������ ��������� �����, ��������� 100 � ���� ������ 3!\n��������� ������� �����: ");
		while (getchar() != '\n');
	}
	while (getchar() != '\n');
	int counter; 
	float min_and_max;
	for (counter = 0; counter < length; counter++)
	{
		printf("�������� �������� array[%d]:", counter);
		while (!scanf("%f", &array[counter]))
		{
			printf("������ �����!!!\n��������� ������� ����� array[%d]: ", counter);
			while (getchar() != '\n');
		}
		while (getchar() != '\n');
	}
	for (counter = 0; counter < (length - 1); counter++)
	{
		if (array[counter] > array[counter + 1])
		{
			min_and_max = array[counter + 1];
			array[counter + 1] = array[counter];
			array[counter] = min_and_max;
		}
	}
	for (counter = 0; counter < (length - 2); counter++)
	{
		if (array[counter] < array[counter + 1])
		{
			min_and_max = array[counter + 1];
			array[counter + 1] = array[counter];
			array[counter] = min_and_max;
		}
	}
	float average;
	average = 0;
	for (counter = 0; counter < (length - 2); counter++)
		average = average + array[counter];
	average = average / (length - 2);
	printf("������� �������������� �������� ������� ��� ������������ � ������������� ��������: %.1f", average);
	_getch();
	return 0;
}