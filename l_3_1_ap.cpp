//бібліотеки
#include <iostream>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>
//Визначення головної функції
int main() {
//Оголошення локальних змінних
int x;
float y, res;
//double y, res; - або так, але не int
//зчитування даних
printf("Enter X / integer: ");
scanf("%d", &x);
 //обчислення
if (x < 4) 
{
res = ((4 * pow(x, 7)) - (pow(x, 5)) + (pow(x, 3)) - 2);
}
//(4 <= x < 7)
else {
if (x < 7)
{
res = ((atan((abs(x) + 1) / 2)) + 8.3 * x);
}
else
{
res = (log10(abs(2 * x + exp(4 * x + 1))));
}
}
//виведення результату
y = pow(x, 2) + 1 + res;
printf("Result = %8.4f", y);
return 0;
}