#include<iostream>
#include<windows.h>
#include <iostream>
using namespace std;
struct Book {
 char author[20];
 char title[30];
 int year;
};
void inputBooks(Book* books, int size) {
 SetConsoleCP(1251);
 SetConsoleOutputCP(1251);
 cout << "Введіть дані про книги:\n";
 for (int i = 0; i < size; ++i) {
 cout << "Книга " << i + 1 << ":\n";
 cout << "Автор: ";
 cin >> books[i].author;
 cout << "Назва книги: ";
 cin >> books[i].title;
 cout << "Рік видання: ";
 cin >> books[i].year;
 }
}
void outputBooks(const Book* books, int size) {
 SetConsoleCP(1251);
 SetConsoleOutputCP(1251);
 cout << "--------------------------------------------\n";
 cout << "Автор | Назва книги | Рік видання |\n";
 cout << "--------------------------------------------\n";
 for (int i = 0; i < size; ++i) {
 cout << books[i].author << "\t | " << books[i].title << "\t | " <<
books[i].year << "| " << "\n";
 }
 }
void booksAfter2000(const Book* books, int size) {
 SetConsoleCP(1251);
 SetConsoleOutputCP(1251);
 cout << "\n";
 cout << "Книги, видані після 2000 року:\n";
 cout << "--------------------------------------------\n";
 cout << "Автор | Назва книги | Рік видання |\n";
 cout << "--------------------------------------------\n";
 for (int i = 0; i < size; ++i) {
 if (books[i].year > 2000) {
 cout << books[i].author << "    | " << books[i].title << "    | " <<
books[i].year << "  | " << "\n";
 }
 }
 
}
int main() {
 SetConsoleCP(1251);
 SetConsoleOutputCP(1251);
 int size;
 cout << "Введіть кількість книг: ";
 cin >> size;
 Book* library = new Book[size];
 inputBooks(library, size);
 outputBooks(library, size);
 booksAfter2000(library, size);
 delete[] library;
 return 0;
}
