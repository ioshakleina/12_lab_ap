#include <windows.h>
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;
// Функція для введення елементів вручну
int* inputArray( int* arr, int countelem) {
SetConsoleCP(1251);
SetConsoleOutputCP(1251);
cout << "Введіть елементи масиву:\n";
for (int i = 0; i < countelem; i++) {
cout << "arr[" << i << "]="; 
cin >> arr[i];
}
return arr;
}
// Функція для генерації елементів випадково
int* generateRandomArray(int* arr, int countelem, int min, int max) {
srand((unsigned)time(NULL));
for (int i = 0; i < countelem; i++)
{
arr[i] =min + rand() % (max- min + 1);
}
return arr;
}
// середнє арифметичного індексів максимального та мінімального елементів масиву
double findAvgIndices( int *arr, int countelem) {
int min=arr[0], max=arr[0];
int minIndex = 0;
int maxIndex = 0;
for (int i = 0; i < countelem; i++) {
if (arr[i] < min) {
min= arr[i];
minIndex = i;
}
else if (arr[i] > max) {
max=arr[i];
maxIndex = i;
}
}
double avg = static_cast<double>(minIndex + maxIndex) / 2;
return avg;
}
// Функція для виведення масива
void printArray(int *arr, int countelem) {
for (int i = 0; i < countelem; i++)
// розділяти значення за допомогою табуляції
cout << "arr[" << i << "]=" << arr[i] << "\t" ;
}
int main() {
//генератор випадкових чисел
srand(static_cast<unsigned>(time(0)));
//кирилиця
SetConsoleCP(1251);
SetConsoleOutputCP(1251);
const int countelem = 5;
int arr[countelem];
//генеруємо вручну
int* f = inputArray(arr, countelem);
cout << endl;
cout << "1. Введений з клавіатури масив" << endl;
//виводимо 1й
for (int i = 0; i < countelem; i++)
cout << f[i] << "\t";
cout << endl;
//aбо
// printArray(f, countelem);
cout << endl;
cout << "2. Згенерований випадково масив"<< endl;
//рандомно
int* s = generateRandomArray(arr, countelem, 1, 50);
//виводимо 2й
for (int i = 0; i < countelem; i++)
cout << s[i] << "\t";
cout << endl;
//aбо
// printArray(s, countelem);
cout << endl;
cout << "Середнє арифметичне індексів max та min 2го масиву: " <<
findAvgIndices(s, countelem) << endl;
return 0;
}
