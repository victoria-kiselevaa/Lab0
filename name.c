#include <stdio.h>
#include <locale.h>
#include "name.h"
void name1()
{
	puts ("��� ���������");
}
void main(void)
{
	setlocale(LC_ALL, "RUS");
	name1();
	name();

}