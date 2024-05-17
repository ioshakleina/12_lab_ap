#include <iostream>
//using namespace std;
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>
//17
//Визначення головної функції
int main() {
//Оголошення локальних змінних
int x;
//зчитування даних
printf_s("Enter odd integer: ");
scanf_s("%d", &x);
//виведення результату
if (x>=1 and x<= 10) {
    switch (x)
{
case 1: printf(" ONE "); break;
case 3: printf(" THREE "); break;
case 5: printf(" FIVE "); break;
case 7: printf(" SEVEN "); break;
case 9: printf(" NINE "); break;
default: printf("You entered even number"); break;
}
}
else {
printf("You entered WRONG number");
}
return 0;
}