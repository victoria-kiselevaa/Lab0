#include<locale.h>
#include<stdio.h> 
int main(void)
{
    char c = '!';
    int i = 2;
    float f = 3.14f;
    double d = 5e-12;
    setlocale(LC_ALL, "RUS");
    puts("Задание 1");
   
	printf("%c %d %f %lf\n",c,i,f,d);
    scanf("%c%d%f%lf", &c,&i,&f,&d);

    system("pause");
    system("cls");

    puts("Задача 1а");
    double A;
    int B;
    double E;
    scanf("%lf", &A);
    B = (int)A;
    E = A - B;
    printf("%d %lf\n", B,E);

    puts("Задача 1б");

    puts("Задача 1в");
    system("pause");
    system("cls");

    puts("Задание 2");

    int a = 11;
    int b = 3;
    int x;
    float y;
    double z;
    x = a / b;
    y = a / b;
    z = a / b;
    printf("%d %f %lf\n", x, y, z);
    printf("%f %lf\n", (float)a / b, (double)a / b);
    
    system("pause");
    system("cls");

    puts("Задание 3");
    int n;
    int k;
    scanf("%d", &n);
    printf("Ваше число %d\n", n);
    printf("Последняя цифра %d, первая- %d, сумма цифра %d\n", n % 10, n / 100, (n%10)+(n/10%10)+(n/100) );
    printf("Число наоборот %d%d%d",n%10,n/10%10,n/100 );
}