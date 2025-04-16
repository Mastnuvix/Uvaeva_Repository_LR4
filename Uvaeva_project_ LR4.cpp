#include <iostream>
#include <limits>
#include <cmath>
#include <algorithm>
using namespace std;
float x = 0;
float y = 0;
float razn = x - y;
void raznost(){
cout << "ввести вещественное число х" << endl;
cin >> x;  
cout << "Результат задания 1:" << endl;
}
void razni(){
//задание 2 ввести вещественное число y
cout << "Результат задания 2:" << endl;
}
void zad(){
//задание 3 найти целую часть разности этих 2-х чисел
cout << "Результат задания 3:" << endl;
}
void zadan(){
//задание 4 найти дробную часть разности этих 2-ч чисел
cout << "Результат задания 4:" << endl;
}   
int main()
{
setlocale(LC_ALL,"rus");
double x, y;

x = Num("Введите вещественное число x: ");
y = Num("Введите вещественное число y: ");

int choice;

cout << "Выберите действие:\n";
cout << "1. Найти целую часть разности\n";
cout << "2. Найти дробную часть разности\n";
cout << "Введите номер действия (1 или 2): ";
int keys;
  cout << "Введите цифру от 1 или 2:";
  cin >> keys;
  if (!cin.good()) {
  
  cout<<"\nВведите числа!\n";
  cin.clear();
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  }

switch (keys) {
  case 1: {
      int fru = fruct(x, y);
          cout << "Целая часть разности: " << fru << endl;
      break;
  }
  case 2: {
      double veg = vegetable(x, y);
          cout << "Дробная часть разности: " << veg << endl;
      break;
  }
  default:
          cout << "Неверный выбор. Пожалуйста, введите 1 или 2." << endl;
      break;
}

return 0;
}