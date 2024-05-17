//завдання 1 , варіант 4, значення функції
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
//зчитування даних
printf("Enter X / integer: ");
scanf_s("%d", &x);
 //обчислення
if (x < 4) {
res = ((4 * pow(x, 7)) - (pow(x, 5)) + (pow(x, 3)) - 2);
}
//(4 <= x < 7)
if (x >=4 and x < 7) {
res = ((atan((abs(x) + 1) / 2)) + 8.3 * x);
}
//(x > 7)
if (x >= 7) {
res = (log10(abs(2 * x + exp(4 * x + 1))));
}
y = pow(x, 2) + 1 + res;
//виведення результату
printf("Result = %8.4f", y);
return 0;
}3