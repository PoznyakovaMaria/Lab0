#include <locale.h>
#include <stdio.h>
void name()
{
	puts("* * * * * * * * * * * * * * * * * * * * * *");
	puts("*                                         *");
	puts("* ����: ���������� ����������� ���������� *");
	puts("*                                         *");
	puts("*     ��������� ��������� �.�.            *");
	puts("*                                         *");
	puts("* * * * * * * * * * * * * * * * * * * * * *");
}
void date()
{
	puts("    _         _   _   ");
	puts(" | |_   | |  | | |_   ");
	puts(" |  _|. | |. |_| |_|. ");
}
void main()
{
	setlocale(LC_ALL, "RUS");
	puts("��� ���������");
	name();
	date();
}